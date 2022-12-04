/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 13
    This program will perform all the tasks
*/

#include <iostream>
#include <cmath>
#include <string>

std::string printRange(int left, int right)
{
    std::string result = "";
    
    if(left < right)
    {
        result += std::to_string(left) + " ";
        return result + printRange(left + 1, right);
    }
    else
    {
        if(left == right)
        {
            result += std::to_string(left);
            return result + printRange(left + 1, right);
        }
        else
        {
            return result;
        }
    }
}

int sumRange(int left, int right)
{
    int total = 0;

    if(left <= right)
    {
        total += left;
        return total + sumRange(left+1, right);
    }
    else
    {
        return total;
    }
}

int sumArrayInRange(int *arr, int left, int right) //helper function for sumArray
{
    return 0; //placeholder
}

int sumArray(int *arr, int size)
{
    return 0; //placeholder
}


bool isAlphanumeric(std::string s)
{
    return true; //placeholder
}

bool nestedParens(std::string s)
{
    return true; //placeholder
}

bool divisible(int *prices, int size)
{
    return true; //placeholder
}