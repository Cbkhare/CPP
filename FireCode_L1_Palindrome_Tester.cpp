#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

bool is_string_palindrome1(string str)
{
    if (str.empty())
    {return 1;}
    // Add your code below this line. Do not modify any other code.
    std::string::reverse_iterator rt;
    std::string st;
    // Add your code above this line. Do not modify any other code.
    for (rt = str.rbegin(); rt!=str.rend(); ++rt)
    {
        st+=*rt;
    }
    cout << st << endl;
    return str.compare(st)==0;
}

bool is_string_palindrome(string str)
{
    // Add your code below this line. Do not modify any other code.

    // Add your code above this line. Do not modify any other code.
    string::iterator sit=str.begin();
    string::iterator eit=str.end()-1;
    while (sit<eit)
    {
        if (*sit!=*eit)
        {
            return false;
        }
        sit++;
        eit--;

    }
    return true;
}

int main()
{
    int x;
    //vector<int>arr(n);
    //for(int i=0;i<n;i++) cin >> arr[i];
    //int x = single_number(arr, n);
    cin >> x;
    for (int i=0; i<x; ++i){
    string n;
    cin >> n;
    cout << is_string_palindrome(n) << endl;
    }
    return 0;
}
