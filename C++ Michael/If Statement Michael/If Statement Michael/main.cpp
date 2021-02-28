//
//  main.cpp
//  If Statement Michael
//
//  Created by Jordan Sun on 2/22/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    char yesOrNo;
    double totalScore, optOutTest;
    //Camel Case: first word is lower case, words after are uppercase
    
    cout << "Did you take the opt out test? (Y/N)" << endl;
    cin >> yesOrNo;
    if (yesOrNo == 'Y' || yesOrNo == 'y'){
        cout << "Sweet! how much did you get?" << endl;
        cin >> optOutTest;
        //if the optOutTest score is > 80, this person gets an A
        if (optOutTest > 80){
            cout << "Congrats! you get an A!" << endl;
            exit(0);
        }
        
    }
    
    cout << "Alright, let's try this instead. What is your total score?" << endl;
    cin >> totalScore;
    
    //if this score > 90, this persons gets an A
    
    if (totalScore >= 90){
        //only execute this code if the test passes
        cout << "Congrats! you get an A!" << endl;
    }
    //B: if score >= 80 AND < 90
    else if(totalScore >= 80 && totalScore < 90){
        cout << "Nice job, you get a B." << endl;
    }
    else if(totalScore >= 70 && totalScore < 80){
        cout << "You get a C??!! You're so dumb." << endl;
    }
    else {
        cout << "Difficult times bro :/" << endl;
    }
    
    return 0;
}
