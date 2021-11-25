/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Hao Nguyen
 */

#include <iostream>
#include <string.h>
using namespace std;

string checkOddEven(int n)
{
    int r = n % 2;

    if (r == 0)
        return "even";
    else
        return "odd";
}