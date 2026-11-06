#include <iostream>
using namespace std;

int main() {
    int myInt; //declaration of an integer variable
    myInt = 15; //initialization of the integer variable
    
    double myDouble = 3.14159;
    int x = 10; 
    int y(20);
    int z{30};
    
    cout << myInt << endl;
    cout << myDouble << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    return 0;
}