/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Strickland
 */

#include <iostream>
#include <string>
#include <vector>
#define NUMOFDIGITS 10

using namespace std;

int getNum(string input);
int doCalc(string operation, int in1, int in2);

int main() {
    int numIn1, numIn2;
    string op, strIn1, strIn2;
    // get input
    cout << "Please input two digits and an operator: ";
    cin >> strIn1;
    cin >> strIn2;
    cin >> op;

    // get numeric value of strIn1 and strIn2.
    numIn1 = getNum(strIn1);
    numIn2 = getNum(strIn2);
    
    // output calculation
    cout << strIn1 << " " << op << " " << strIn2 << " = " << doCalc(op, numIn1, numIn2) << endl;
    return 0;
}

// gets the numeric value of a string.
int getNum(string input) {
    const string digits[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    const string strs[10] = {"zero", "one", "two", "three", "four", "five", "six",
                            "seven", "eight", "nine"};
    for (int i = 0; i < NUMOFDIGITS; i++) {
        // get the numeric value of the input
        if (digits[i] == input || strs[i] == input) {
            return i + 1;
        }
    }
    return -1;
}

// calculates and returns the result of in1 <operand> in2
int doCalc(string operation, int in1, int in2) {
    int result = -1;
    // determine operation type.
    if (operation == "+" || operation == "plus" ) {
        result = in1 + in2;
    } else if (operation == "-" || operation == "minus") {
        result = in1 - in2;
    } else if (operation == "*" || operation == "mul") {
        result = in1 * in2;
    } else if (operation == "/" || operation == "div") {
        result = in1 / in2;
    }
    return result;
}