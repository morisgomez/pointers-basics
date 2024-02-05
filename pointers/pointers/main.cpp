

#include <iostream>

using namespace std;

int main() {
    int var = 35;
    cout << " + the variable 'var' has an assigned value of: " << var << endl;
    cout << " + '&var' gives the memory address of where 35 is stored: " << &var << endl;
    int * foo = &var;
    
    cout << " + 'int* foo = &var' stores address of 35 into a pointer type foo: " << foo << endl;
    cout << " + foo points to the address of var // stores the address of var value which is 35" << endl;
    cout << " + whenver we call 'foo' we are getting and address but if we call '*foo' we get the value at that address." << endl;
    cout << " + '*foo' gives us: " << *foo <<endl;
    
  
    return 0;
}
