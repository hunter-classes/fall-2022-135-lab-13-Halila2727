/*
  Author: Halil Akca
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab 13
  This program will call the functions made in other .cpp files
*/

#include <iostream>
#include <string>
#include <string>
#include "funcs.h"

int main()
{
    std::cout << "\nTask A: Print Range Recursively\nRange -2 to 10\n" << printRange(-2, 10);
    std::cout << "\n\n------------------\n";

    std::cout << "\nTask B: Sum of Range Recursively\nRange 1 to 3\n" << sumRange(1, 3);
    std::cout << "\nRange -2 to 10\n" << sumRange(-2, 10);
    std::cout << "\n\n------------------\n";

    int *arr = new int[10]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    std::cout << "\nTask C: Sum of Elements of Array\nAdd all elements: " << sumArray(arr, 10);
    std::cout << "\nAdd first 5 elements: " << sumArray(arr, 5);
    std::cout << "\n\n------------------\n";
    
    std::cout << "\nTask D: Is It Alphanumeric?\n\"ABCD\" is " << isAlphanumeric("ABCD");
    std::cout << "\n\"Abcd1234xyz\" is " << isAlphanumeric("Abcd1234xyz");
    std::cout << "\n\"KLMN 8-7-6\" is " << isAlphanumeric("KLMN 8-7-6");
    std::cout << "\n\n------------------\n";

    std::cout << "\nTask E: Are Nested Parentheses Correct?\n((())) is " << nestedParens("((()))");
    std::cout << "\n() is " << nestedParens("()");
    std::cout << "\n is " << nestedParens("");
    std::cout << "\n((( is " << nestedParens("(((");
    std::cout << "\n(() is " << nestedParens("(()");
    std::cout << "\n)( is " << nestedParens(")(");
    std::cout << "\na(b)c is " << nestedParens("a(b)c");
    std::cout << "\n\n------------------\n";

    return 0;
}