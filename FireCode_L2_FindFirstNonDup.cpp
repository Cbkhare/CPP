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

char first_non_repeating(string str)
{
    std::vector<int> v(26,0);
    string::iterator it;
    for (it=str.begin(); it<str.end(); it++)
    {
      v[*it-'a']+=1;
      cout <<*it-'a'<<" "<<int(*it)<<" "<<int(*it)%97<<v[int(*it)%97]<<endl;
    }
    //std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    //cout<<"\n"<<endl;
    for (it=str.begin(); it<str.end(); it++)
    {
      if (v[*it-'a']==1)
      {
        return *it;
      }
    }
    return '0';
}


int main()
{
  int x;
  cin>>x;
  for (int i=0; i<x;i++)
  {
    string str;
    cin >> str;
    cout<<first_non_repeating(str)<<endl;
  }
  return 0;
}
