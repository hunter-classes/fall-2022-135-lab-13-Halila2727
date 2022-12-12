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

int sumArray(int *arr, int size)
{
    if(size > 0)
    {
        return *(arr + (size-1)) + sumArray(arr, size-1);
    }
    return 0;
}


bool isAlphanumeric(std::string s)
{
    if(s.length() == 0)
    {
        return true;
    }
    else if((isalpha(s[0]) || isalnum(s[0])) == false)
    {
        return false;
    }

    s = s.substr(1);

    return isAlphanumeric(s);
}

bool nestedParens(std::string s)
{
    if(s.length() == 0)
    {
        return true;
    }
    else if(s[0] != '(' || s[s.size()-1] != ')')
    {
        return false;
    }

    s = s.substr(1);
    s = s.substr(0, s.size()-1);

    return nestedParens(s);
}

bool divisible(int *prices, int size)
{
    return true; //placeholder
}