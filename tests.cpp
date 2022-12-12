#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A: Return All Numbers of Range"){
    CHECK(printRange(-2,10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(5, 1) == "");
    CHECK(printRange(0,1) == "0 1");
    CHECK(printRange(1,1) == "1");
    CHECK(printRange(112, 118) == "112 113 114 115 116 117 118");
}

TEST_CASE("Task B: Return Sum of Numbers of Range"){
    CHECK(sumRange(-2,10) == 52);
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(0, 2) == 3);
    CHECK(sumRange(1431341, 0) == 0);
}

TEST_CASE("Task C: Return Sum of Range of Elements of an Array"){
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
    CHECK(sumArray(arr,0) == 0);
    CHECK(sumArray(arr,1) == 12);
    CHECK(sumArray(arr,5) == 34);
    CHECK(sumArray(arr, 10) == 43);
}

TEST_CASE("Task D: Is String Alphanumeric"){
    CHECK(isAlphanumeric("ABCD") == 1);
    CHECK(isAlphanumeric("Abcd1234xyz") == 1);
    CHECK(isAlphanumeric("KLMN 8-7-6") == 0);
    CHECK(isAlphanumeric("13279846") == 1);
    CHECK(isAlphanumeric(" ") == 0);
    CHECK(isAlphanumeric("halil@halil.halil") == 0);
    CHECK(isAlphanumeric("space11character") == 1);
    CHECK(isAlphanumeric("Daniel Jones") == 0);
}

TEST_CASE("Task E: Are the Nested Parentheses Correct"){
    CHECK(nestedParens("()") == 1);
    CHECK(nestedParens("") == 1);
    CHECK(nestedParens("(((") == 0);
    CHECK(nestedParens("(()") == 0);
    CHECK(nestedParens(")(") == 0);
    CHECK(nestedParens("a(b)c") == 0);
    CHECK(nestedParens("((()))()") == 0);
    CHECK(nestedParens("((((((()))))))") == 1);
}