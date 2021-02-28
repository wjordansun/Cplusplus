//
//  main.cpp
//  Loop Max Min Michael
//
//  Created by Jordan Sun on 3/28/20.
//  Copyright © 2020 Jordan Sun. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    for (int i = 1; i <= 10; i++){
        cout << "Hi guys" << endl;
    }
    
    int num; //declaration
    int sum = 0; //initiation
    double average;
    int max = 0;
    int min = 1000000;
    int count = 0;
    
    while(1){
        
        cout << "Input a number (-1 to quit): " << endl;
        cin >> num;
        
        if (num == -1){
            break;
        }
        
        if (cin.fail()){
            cout << "Please input a number. " << endl;
            break;
        }
        
        max = (num > max)? num:max; //conditional statement
                                    //if num is greater than max, it becomes the new max
        
        min = (num < min)? num:min; //conditional statement
                                    //if num is less than min, it becomes the new min
        
//        sum = sum + num;
        sum += num; //same thing
        
        count++; //count + 1
        
        
    }
    
    average = double(sum) / double(count);
    
    cout << "You entered " << count << " numbers." << endl;
    cout << "The max is: " << max << endl;
    cout << "The min is: " << min << endl;
    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << average << endl;
    
    return 0;
}
