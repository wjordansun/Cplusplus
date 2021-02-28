//
//  main.cpp
//  Bank Michael
//
//  Created by Jordan Sun on 5/9/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

using namespace std;

class OneClickBank {
private:
    double currentBalance;
public:
    
    OneClickBank() {
        currentBalance = 1000.0;
    }
    
    void checkBalance() {
        cout << "Your current balance is: $" << currentBalance << endl;
    }
    
    void depositCash() {
        int cash;
        double check;
        int choice;
        
        cout << "How much would like to enter: cash(1) check(2)? " << endl;
        cin >> choice;
        if (choice == 1){
            cout << "Please enter how much cash you want to deposit" << endl;
            cin >> cash;
            if (cash < 100){
                currentBalance = currentBalance + cash;
                cout << "You deposited: $" << cash << endl;
                cout << "Your total balance is now: $" << currentBalance << endl;
            }
            else {
                cout << "Sorry we can't have you deposit more than $100." << endl;
            }
        }
        else if (choice == 2){
            cout << "Please enter how much you want to deposit" << endl;
            cin >> check;
            currentBalance = currentBalance + check; // currentBalance += check;
            cout << "You deposited: $" << check << endl;
            cout << "Your total balance is now: $" << currentBalance << endl;
        }
        else {
            cout << "Please enter a number, either 1 or 2" << endl;
            depositCash();
        }
    }
    
    void withdrawCash() {
        int cash;
        cout << "How much do you want to withdraw?" << endl;
        cin >> cash;
        
        if (cash % 20 == 0 && cash > 0){ // % means modulo and checks for remainder
            if (cash > 200){
                cout << "You can't take more than $200" << endl;
                cout << "Your current balance is: $" << currentBalance << endl;
            }
            else if (cash <= 200 && cash < currentBalance){
                cout << "You withdrew: $" << cash << endl;
                currentBalance = currentBalance - cash;
                cout << "Your current balance is: " << currentBalance << endl;
            }
            else {}
        }
        else {
            cout << "The amount you withdraw has to be a multiple of 20" << endl;
            withdrawCash();
        }
    }
};

int main() {
    OneClickBank myMachine;
    int choice;
    bool boolean = true;
    while (boolean) {
        cout << "Press 1 to check balance" << endl;
        cout << "Press 2 to deposit cash" << endl;
        cout << "Press 3 to withdraw cash" << endl;
        cout << "Press anything to quit" << endl;
        cin >> choice;
        switch(choice) {
            case 1:
                myMachine.checkBalance();
                break;
            case 2:
                myMachine.depositCash();
                break;
            case 3:
                myMachine.withdrawCash();
                break;
            default:
                boolean = false;
                break;
        }
    }
    
    
    return 0;
}
