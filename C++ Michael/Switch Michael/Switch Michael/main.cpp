//
//  main.cpp
//  Switch Michael
//
//  Created by Jordan Sun on 4/25/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int day = 3;
    switch (day){ //what goes in the parentheses is called the expression
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
    }
    
    int num;
    cout << "What day of the week is it?" << endl;
    cin >> num;
    switch (num){
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Its a weekday!" << endl;
            break;
    }
    
   int p;
   int q;
   cout << "Please enter two numbers" << endl;
   cin >> p;
   cin >> q;
    
    int operation;
    bool t = true; //boolean variables are either true or false
    while (t){
        
        cout << "Press 1 to do addition." << endl;
        cout << "Press 2 to do subtraction." << endl;
        cout << "Press 3 to do multiplication." << endl;
        cout << "Press 4 to do division." << endl;
        cout << "Press any other number to quit." << endl;
        cin >> operation;
        switch (operation){
            case 1:
                cout << "The sum is: " << p + q << endl;
                break;
            case 2:
                cout << "The difference is: " << p - q << endl;
                break;
            case 3:
                cout << "The product is: " << p * q << endl;
                break;
            case 4:
                cout << "The quotient is: " << p / q << endl;
                break;
            default:
                t = false;
                break;
                
                
        }
        
        
        
    }
    
    
    
    return 0;
}
