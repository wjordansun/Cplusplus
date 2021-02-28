//
//  main.cpp
//  Input Michael
//
//  Created by Jordan Sun on 2/15/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main() {
    
    //type variable type
    //Type name of the variable
    int x; //whole numbers
    float y; //whole numbers and fractions
    double z; //whole number with more decimal places
    long double a;
    string str;
    char c; //this stores exactly ONE letter
    
    
    //math
    //left value = right value
    int num = 3;
    cout << num << endl;
    
    int r,t;
    cout << "Please give me two numbers: " << endl;
    
    cin >> r;
    cin >> t;
    
    int w = r + t;
    cout << "Sum: " << w << endl;
    
    int b = r - t;
    cout << "Difference: " << b << endl;
    
    int m = r*t;
    cout << "Product: " << m << endl;
    
    double d = r/t;
    cout << "Quotient: " << d << endl;
    
    cout << "Power Value: r^t: " << pow(r, t) << endl;
    
    double u = sqrt(r);
    cout << "Square root of the first number: " << u << endl;
    
    string A;
    string B;
    
    cout << "Please enter two strings: " << endl;
    cin >> A;
    cin >> B;
    cout << "Concatenation: " << A + " " + B << endl; //Concatenation means addition
    
    
    
//    cout << "Give me a number:" << endl;
//    cin >> x;
//    cout << "You gave me: " << x << endl;
    
    return 0;
}
