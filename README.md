## task 1

int main(){

    // 2 integers: display sum, difference, product, integer quotent.
    
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


## task 2

int main(){

    // 2 integers, area of rectangle
    
    float x, y;
    cout << "Enter length and width: ";
    cin >> x >> y;

    // answers

    cout << "\n" << "Area of rectangle is: " << x * y << endl;

    return 0;
}

## task 3

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

## task 4

int main(){

    // converting to ascii (probably important l8r)
    
    char a;
    cout << "Enter singular character: ";
    cin >> a;

    int charascii = (int)a;

    cout << "\n" << charascii << endl;

    return 0;
}