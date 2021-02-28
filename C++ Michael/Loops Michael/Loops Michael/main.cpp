//
//  main.cpp
//  Loops Michael
//
//  Created by Jordan Sun on 3/21/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    for (int i = 1; i <= 10; i++){ // i++ means i + 1
        cout << "Hi" << endl;
    }
    
//    i = i + 1;
//    i += 1;
//    i++;
    
    int j = 1;
    for (int i = 1; i < 6; i++){
        
        j += 2;
        
        cout << j << endl;
    }
    
    int i = 1;
    while (i < 8){
        cout << "you're cool" << endl;
        i++;
    }
    
    int num;
    while (1){ // while (1) makes the loop run forever
        cout << "Enter a number (0 to quit)" << endl;
        cin >> num;
        
        int numTimesTwo = num * 2;
        cout << num << " times 2 is: " << numTimesTwo << endl;
        
        if (num == 0){ // two equal signs is for checking
            break;
        }
    }
    
    return 0;
}
