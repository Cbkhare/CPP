//
//  B_Max_Min.cpp
//  CPP
//
//  Created by Chitrabasu Khare on 11/08/17.
//  Copyright © 2017 Chitrabasu Khare. All rights reserved.
//

#define  max(a,b) ((a) > (b) ? (a) : (b))
#define  min(a,b) (a > b ? b : a)
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "CbK Begins \n";
    int x,y;
    std::cin >> x >> y;
    std::cout<< std::max(x,y)<<"\n";
    std::cout<< std::min(x,y);
    
    
    return 0;
}
