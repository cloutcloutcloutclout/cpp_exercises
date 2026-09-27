#include <iostream>
using namespace std;

int main(){

    // 2 integers, sum(a * y), difference, product, integer quotent (integer division)
    
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    // answers
    
    cout << "\n" << "Sum is: " << x + y << endl;
    cout << "difference is: " << x - y << endl;
    cout << "product is: " << x * y << endl;
    cout << "quotent is: " << x / y << endl;

    return 0;
}