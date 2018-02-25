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
typedef pair <int, int> pii;

#define reps(i,v) for(int i=0; v[i]; i++)
#define rep(i, n) for(int i=0;i<n;i++)
#define max(x,y)  (x>y)?x:y
#define min(x,y)  (x>y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)
typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;

bool is_isomorphic(string input1, string input2)
{
  map<int, vector<int> > cm1, cm2;
  if (input1.size() != input2.size())
  {
    return false;
  }
  string::iterator it;
  for (int i = 0; i < input1.size(); i++)
  {
    if (cm1.count(input1[i]) ==0 and cm2.count(input2[i])==0)
    {
      cm1[input1[i]].push_back(i);
      cm2[input2[i]].push_back(i);
    }
    else if (cm1.count(input1[i]) ==1 and cm2.count(input2[i])==1)
    {
      sort(cm1[input1[i]].begin(),cm1[input1[i]].end());
      sort(cm2[input2[i]].begin(),cm2[input2[i]].end());
      if (cm1[input1[i]]!=cm2[input2[i]])
      {
        return false;
      }
      else
        {
          cm1[input1[i]].push_back(i);
          cm2[input2[i]].push_back(i);
        }
      }
    else
      {
        return false;
      }
  }
  return true;
}

int main()
{
    int x;
    cin>>x;
    for (int i =0; i<x ; i++)
    {
      string str;
      string str1;
      cin>>str;
      cin>>str1;
      cout << is_isomorphic(str, str1)<<endl;
    }

}
