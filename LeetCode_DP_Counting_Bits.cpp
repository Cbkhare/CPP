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
#include <sstream>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
typedef pair <int, int> pii;


#define repas(it,str) for(auto it = str.begin(); it < str.end(); ++it)
#define reps(it,str) for(string::iterator it = str.begin(); it < str.end(); ++it)
//cout << index++ << *it;
#define rep(i, n) for(int i=0;i<n;i++)
#define print_vec(it,v) for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++) cout <<*it<< ' '
#define print_vector(v) for (const auto i: v)  std::cout << i << ' ';
#define max(x,y)  (x>y)?x:y
#define min(x,y)  (x<y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)
typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;


class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v;
        int len_b=1; //length of bit, max_length that but can have
        for (int i=0;i<=num;i++){
            //cout<<bitset < 32 > (i)[0]<<endl; bitset < 32 > (i).count(1)
            //cout<<(i & (i-1))<<endl;
            bool x;
            x = i & (i-1);
            if (i==0){
                v.push_back(0);
            }
            else if(i==1){
                v.push_back(1);
            }
            else if(!x)
            {        //Number is power of 2
                len_b=1;
                v.push_back(1);
            }
            else{
                v.push_back(v[i & (i - 1 )] + 1);

            }
        }
        return v;
    }

      vector<int> countBits_alternative(int num) {
          vector<int> v;
          int len_b=1; //length of bit, max_length that but can have
          for (int i=0;i<=num;i++){
              //cout<<(i & (i-1))<<endl;
              bool x;
              x = i & (i-1);
              if (i==0){
                  v.push_back(0);
              }
              else{
                  if (i%2==0){
                      v.push_back(v[i/2]);

                  }
                  else{
                      v.push_back(v[i/2]+1);
                  }
              }

          }
          return v;
      }
  };
};


int main()
{
  rep(j,10){
    int x;
    cin>>x;
    Solution s;
    vector<int> ans;
    ans = s.countBits(x);
    print_vec(it,ans);
  }
}

/*
https://leetcode.com/problems/counting-bits/description/
*/
