/*
    Intro to C++ by Eric Gregori

     References:
     http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

     g++ class_example.cc -pedantic -Wall -Wextra -Weffc++

 */

#include <iostream>

using namespace std;


/*
     The C++ compiler combines the function parameters with the function name.
     This is called symbol mangling. 
     double add(double a, double b)  is not the same as  double add(double a)

     Using the same function name with different parameters is called
     function overloading and it is a form of compile time polymorphism.

     https://arxiv.org/pdf/1311.7203.pdf
     http://web.mit.edu/tibbetts/Public/inside-c/www/mangling.html
 */
class calculator { // https://www.cplusplus.com/doc/tutorial/classes/
    // https://softwareengineering.stackexchange.com/questions/143736/why-do-we-need-private-variables
    private: // Private variables and functions can be accessed by class members
        double last_result; // member variable

        // Pass by reference
        // https://www.tutorialspoint.com/cplusplus/cpp_function_call_by_reference.htm
        void add(double a, double b, double &result);

    public: // These functions can be called external to the class
        calculator(); // constructor
        void   mc(void);
        double mr(void);
        double add(double a, double b);  
        double add(double a);            // function overload
        double mult(double a, double b); 
        double mult(double a);           // function overload
};

// constructor - Called automatically when object is instantiated
// https://isocpp.org/wiki/faq/ctors
calculator::calculator() // This function is part of the class
{
    // We can access members variables directly because this function is part of the class.
    last_result = 0.0;
}

// This function is part of the class (private)
void calculator::add(double a, double b, double &result)
{
    result = a + b; // result - pass by reference
}


//
// These functions are public so they can be called from outside the class.
//
void calculator::mc(void) // Memory Clear
{
    last_result = 0.0;
}

double calculator::mr(void) // Memory recall
{
    return last_result;
}

double calculator::add(double a, double b)
{
    double result = 0.0;
    add(a,b,result);  // Calling private function, Pass by reference
    last_result = result;
    return result;
}

double calculator::add(double a)
{
    double result = 0.0;
    add(a,last_result,result);  // Calling private function, Pass by reference
    last_result = result;       // Update private variable
    return result;
}

double calculator::mult(double a, double b)
{
    double result = a * b;
    last_result = result;
    return result;
}

double calculator::mult(double a)
{
    double result = a * last_result;
    last_result = result;       // Update private variable
    return result;
}


char user_input(double &a, double &b) // This function is NOT a part of the class
{
    char oper = 'x';

    cout << endl;
    cout << "Enter operator: +  or *" << endl;
    cout << "#=memory add, $=memory mult, !=memory clear, ?=memory recall" << endl;
    cout << "x=exit   then hit enter" << endl;
    cin >> oper;
    if((oper != 'x') && (oper != '?'))
    {
        cout << "Enter floating point digit -  example: 0.5, 1.2, 3.14   then hit enter" << endl;
        cin >> a;
        if((oper != '#') && (oper != '$'))
        {
            cout << "Enter floating point digit -  example: 0.5, 1.2, 3.14   then hit enter" << endl;
            cin >> b;
        }
    }

    return oper;
}

int main()
{
    bool exit_now     = false;

    // An object is an instantiation of a class.
    // https://www.cplusplus.com/doc/tutorial/classes/
    calculator myobject; // Instantiate object defined by the class calculator
                         // This builds the object in memory and calls the constructor.

    while(!exit_now)
    {
        // We can access the public members defined in the class via the object.
        bool   valid_result = false;
        double a            = 0.0;
        double b            = 0.0;
        double result       = 0.0;
        char oper = user_input(a,b);
        switch(oper)
        {
            case '+':
                result = myobject.add(a,b);
                valid_result = true;
                break;
            case '*':
                result = myobject.mult(a,b);
                valid_result = true;
                break;
            case '#': // memory add
                result = myobject.add(a);
                b = myobject.mr();
                valid_result = true;
                break;
            case '$': // memory mult
                result = myobject.mult(a);
                b = myobject.mr();
                valid_result = true;
                break;
            case '?': // memory recall
                result = myobject.mr();
                cout << endl << endl << "Memory recall: " << result << endl;
                valid_result = false;
                break;
            case '!': // memory clear
                myobject.mc();
                break;
            case 'x':
                exit_now = true;
                break;
            default:
                cout << endl << "Please use one of the following operators" << endl;
                break;
        }

        if(valid_result)
            cout << endl << endl << a << " " << oper << " " << b << " = " << result << endl;
    }
}
