Defining a function is the way you specify how an operation is to be done. A function cannot be called unless it has been previously declared. 

A function declaration gives the name of the function, the type of the value returned (if any), and the number and types of the arguments that must be supplied in a call. For example,

Elem* next_elem();     // no argument; return a pointer to Elem (an Elem*)
void exit(int);       // int argument; return nothing
double sqrt(double)  // double argument; return a double

In a function declaration, the return type comes before the name of the function and the argument types after the name enclosed in parentheses.

The semantics of argument passing are identical to the semantics of copy initialization. That is, argument types are checked and implicit argument type conversion takes place when necessary. For example:

double s2 = sqrt(2)             // call sqrt() with the argument double(2)
double s3 = sqrt("three")       // error: sqrt() requires an agrument of type double.

The value of such compile-time checking and type conversion should not be underestimated. A function declaration may contain argument names. This can be a help to the reader of a program, but unless the declaration is also a function definition, the compiler simply ignores such names. For example:

double sqrt(double d);          // return the square root of d
double square(double);          // return the square of the argument

The type of function consists of the return type and the argument types. For class member functions, the name of the class is also part of the function type. For example:

double get(const vector<double>&vec, int index);        // type: double(const vector<double>&,int)
char& String:: operator[](int index);                   // type: char& String::(int)


We can compose functions representing common or specialized tasks into larger computations. Using a function to do a specific task often saves us from writing a specific piece of code in the middle of other code; making it a function forces us to name the activity and document its dependencies.

If two functions are defined with the same name, but with different argument types, the compiler will choose the most appropriate function to invoke for each call. Example:

void print(int);                // takes an integer argument
void print(double);             // takes a floating-point argument
void print(string);             // takes a string argument

void user()
{
    print(42);                  // calls print(int)
    print(9.65);                // calls print(double)
    print("D is for Digital");  // calls print(string)
}

If two alternative functions could be called, but neither is better than the other, the call is deemed ambiguous and the compiler gives an error. Example:

void print(int, double);
void print(double, int);

void user2()
{
    print(0,0);     // error ambiguous
}

This is known as function overloading and is one of the essential parts of generic programming. When a function is overloaded, each function of the same name should implement the same semantics. The print() functions are examples of this; each print() prints its argument.