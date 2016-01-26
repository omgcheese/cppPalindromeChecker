//
//  main.cpp
//  palindromeNumber
//
//  Created by Jinwook Lee on 2016-01-25.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPalindrome(int number){
    
    int temp = number;
    int reverse = 0;
    while (number != 0){
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    
    
    return (temp == reverse) ? true : false;
    
}

int main() {
    bool token;
    char play;
    cout << "Simulation on?(y/n)" << endl;
    cin >> play;
    (play == 'y') ? token = true : token = false;
    while(token) {
        int num;
        bool pal;
        cout << "Please enter a number" << endl;
        cin >> num;
        pal = isPalindrome(num);
        pal ? cout << num << " is Palindome\n" : cout << num << " is not Palindome\n";
        cout << "simulate again?(y/n)" << endl;
        char play;
        cin >> play;
        (play == 'y')? token = true : token = false;
    }
    return 0;
}
