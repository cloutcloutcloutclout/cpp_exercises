#include <iostream>
using namespace std;

int main(){

    // Average of 3 numbers
    
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    float sum = a + b + c;
    float count = 3;

    float answer = sum / count;

    cout << "\n" << answer << endl;

    return 0;
}