#include "std_lib_facilities.h"
using namespace std;

double expression();    // declaration so that primary() can call expression()

class Token {           // a very simple user-defined type
public:
    char kind;
    double value;
    Token(char ch):  kind(ch), value(0) { }          // make a Token from a char
    Token(char ch, double val):  kind(ch), value(val) { } // make a Token from a char and a double
};

class Token_stream {
    public:
        Token_stream();          // make a Token_stream that reads from cin
        Token get();            // get a Token (get() is defined in §6.8.2)
        void putback(Token t); // put a Token back
    private:
        bool full;         // is there a Token in the buffer?
        Token buffer;     // here is where we keep a Token put back using putback()
};

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream(): full(false), buffer(0) { }   // no Token in buffer
    
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;     // copy t to buffer
    full = true;   // buffer is now full
}

Token Token_stream::get(){
    if (full) {     // do we already have a Token ready?
    full = false;  // remove Token from buffer
    return buffer;
    }

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch){
        case ';':    // for "print"
        case 'q':    // for "quit"
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token(ch);        // let each character represent itself
        case '.':
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
        {
            cin.putback(ch);             // put digit back into the input stream
            double val;
            cin >> val;                // read a floating-point number
            return Token('8', val);   // let '8' represent "a number"
        }
        default:
            error("Bad token");
            return 0;
    }
}

Token_stream ts;        // a Token_stream called ts which provides get() and putback()

double primary(){

    Token t = ts.get();
    switch (t.kind) {
        case '(':                     // handle ‘(‘ expression ‘)’
        {
            double d = expression();
            t = ts.get();
            if ( t.kind != ')' ) error(" ')' expected ");
            return d;
        }
        case '8':               // we use ‘8’ to represent a number
            return t.value;    // return the number’s value
        default:
            error("primary expected");
            //ts.putback(t);
    }
}

double term(){

    double left = primary();
    Token t = ts.get();        // get the next Token from the Token stream
    while (true) {
        switch (t.kind) {
            case '*':
                left *= primary();
                t = ts.get();
                break;
            case '/':
            {
                double d = primary();
                if (d == 0) error("divide by zero");
                left /= d; 
                t = ts.get();
                break;
            }
            /*case '%':    //becouse % don't work with floating point values.
                left %= primary();
                t = ts.get();
                break;             */ 
            default: 
                ts.putback(t); // put t back into the Token stream
                return left;
        }
    }
}

double expression(){
    double left = term();       // read and evaluate a Term
    Token t = ts.get();        // get the next Token from the Token stream
    while (true) {
        switch (t.kind) {
            case '+':
                left += term();         // evaluate Term and add
                t = ts.get();
                break;
            case '-':
                left -= term();     // evaluate Term and subtract
                t = ts.get();
                break;
            default: 
                ts.putback(t);  // put t back into the token stream
                return left;   // finally: no more + or –; return the answer
        }
    }
}

int main(){

    try {
        double val = 0;
        //Token t = ts.get();
        while (cin) {
            Token t = ts.get();
            if (t.kind == 'q') break;    // ‘q’ for “quit”
            if (t.kind == ';')          // ‘;’ for “print now”
                cout << " = " << val << '\n';
            else
                ts.putback(t);

                val = expression();
        }
        keep_window_open ();
        return 0;
    }
    catch (exception& e) {
        cerr << e.what() << "\n";
        keep_window_open ();
        return 1;
    }
    catch (...) {
        cerr<<"exception \n";
        keep_window_open ();
        return 2;
    }

}
