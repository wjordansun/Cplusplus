//
//  main.cpp
//  Grade Calculator Michael
//
//  Created by Jordan Sun on 3/15/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    double hw1, hw2, hw3, hw4, hw5, hw6;
    double mt1, mt2;
    double f1;
    double hwaverage;
    double mtaverage;
    
    cout << "Please enter 6 homework grades: " << endl;
    cin >> hw1;
    cin >> hw2;
    cin >> hw3;
    cin >> hw4;
    cin >> hw5;
    cin >> hw6;
    
    cout << "Please enter 2 midterm grades: " << endl;
    cin >> mt1;
    cin >> mt2;
    
    cout << "Please enter 1 final grade:" << endl;
    cin >> f1;
    
    hwaverage = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6)/6;
    
    mtaverage = (mt1 + mt2)/2;
    
    double weightedScore = ((hwaverage/100)*0.4 + (mtaverage/100)*0.4 + (f1/100)*0.2)*100;
    
    cout << "Weighted score is: " << weightedScore << endl;
    
    if (weightedScore >= 90){
        cout << "You get an A" << endl;
    }
    else if (weightedScore >= 80 && weightedScore < 90){
        cout << "You get a B" << endl;
    }
    else if (weightedScore >= 70 && weightedScore < 80){
        cout << "You get a C" << endl;
    }
    else {
        cout << "You get a D" << endl;
    }
    
    return 0;
}
