//
//  strings.cpp
//  CPP
//
//  Created by Chitrabasu Khare on 13/08/17.
//  Copyright © 2017 Chitrabasu Khare. All rights reserved.
//
#include <string>
#include <iostream>

using namespace std;

int main()
{
    
    string str = "Chitrabasu Khare";
    std::cout << str.length() << str << std::endl;
    for (int i=0;i<str.length();i++)
    {
        //std::cout<< str[i]<<'\n';
        std::cout << str.at(i)<<'\n';
    }
    return 0;
    
}
