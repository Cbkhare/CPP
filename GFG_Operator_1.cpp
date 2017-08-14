//
//  GFG_Operator_1.cpp
//  CPP
//
//  Created by Chitrabasu Khare on 11/08/17.
//  Copyright © 2017 Chitrabasu Khare. All rights reserved.
//

#define max(A,B) (A > B ? A : B)
#define min(a,b) (A > B ? B: A)
#include <iostream>
using namespace std;

int main() {
    //code
    int i =0,x;
    std::cin>>x;
    for (;i<x;i++)
    {
        int a,b;
        std::cin>>a>>b;
        std::cout<<a+b<<'\n';
        std::cout<<max(a,b)-min(a,b)<<'\n';
        std::cout<<max(a,b)/min(a,b)<<'\n';
        std::cout<<a*b<<'\n';
    }
    return 0;
}


/*
 Given two numbers A and B. Perform addition, subtraction, division and multiplication on these two numbers and display result in a new line.
 
 Input: First line of the input contains an integer T which denotes the number of test cases. Then T test cases follow.  Each test case contains a single line containing two space separated integers A and B.
 
 Output: There should be four lines of output for each test case. Description of the 4 lines is shown below:
 First Line:  Result of addition of the two numbers
 Second Line: Result of subtracting the smaller number from the greater number.
 Third Line: Result of dividing greater number by the smaller number (Result will be in integer)
 Fourth Line: Result of multiplication of the two numbers.
 
 Constraints:
 1 <= T< = 100
 1<=A<=1000
 1<=B<=1000
 
 Example:
 Input:
 2
 2 4
 3 6
 
 Output:
 6
 2
 2
 8
 9
 3
 2
 18*/
