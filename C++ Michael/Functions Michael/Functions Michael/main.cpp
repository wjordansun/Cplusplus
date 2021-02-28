//
//  main.cpp
//  Functions Michael
//
//  Created by Jordan Sun on 4/4/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>

using namespace std;

// SIGNATURE of a function
// what does the fxn return? (void ==> returns nothing)
// what is the name of the fxn? (there can only be one main fxn)
// what does the function need to do what it does

void printThis() {
    cout << "Easiest function ever" << endl;
}

void add(int a, int b) { // int a and int b are called parameters
    int result; //declare a variable
    result = a + b;
    cout << "The result is: " << result << endl;
}

int multiply(int x, int y) {
    int result = x * y;
    return result;
}

int main() {
    
    int p,q;
    int resultFromMultiply;
    int lotsOfMultiplies;
    
    cout << "Give me two numbers: " << endl;
    cin >> p;
    cin >> q;
    
    
    printThis(); // This is me calling the function
    add(3, 7);
    
    //When we have a function that retuerns something, we have to "catch" what it returns other wise we lose it.
    
    resultFromMultiply = multiply(p,q);
    cout << "Looks like I caught this answer: " << resultFromMultiply << endl;
    
    lotsOfMultiplies = multiply(multiply(2, 3), multiply(4, 5));
    cout << "Lots of Multiplies = " << lotsOfMultiplies << endl;
    
    return 0;
}
