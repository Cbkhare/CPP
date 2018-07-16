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
#include <bitset>

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
  std::string toBinary(int n)
  {
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
  }

  int countBits(uint32_t n) {
      //bitset<32> foo(n);
      string foo;
      foo = toBinary(n);

      for (int i=0;i<foo.size();i++){
        //int j=foo[i]
        char j=foo[i],x;
        //x = (j=="1") ? "0":"1";
        //cout<<j<<endl;
        if (j=='1'){
          x='0';
        }
        else{
          x='1';
        }
        if (i==0){
          if(foo.size()>1){
            if(foo[i+1]==j){
              //foo.flip(i+1);
              foo[i+1]=x;
            }
          }}
        else if(i==foo.size()-1){
          if(foo[i-1]==j){
            //foo.flip(i-1);
            foo[i-1]=x;
          }}
        else{
          if (foo[i-1]==j){
            //foo.flip(i-1);
            foo[i-1] = x;
          }
          if (foo[i+1]==j){
            //foo.flip(i+1);
            foo[i+1]=x;
          }}
      //foo.flip(i);
      foo[i]=x;
    }
    //cout<<foo<<endl;
    int s = foo.size();
    char L = (s%2==0) ?'Y':'X';
    char opp = (L=='X') ?'Y':'X';
    int y = stoi(foo,nullptr,2);
    if ((y==n) or (y-n==1) or (y-n==-1)){
      return L;
    }
    else
    {
      return opp;
    }
}
};


int main()
{
  int r;
  cin>>r;
  rep(j,r){
    int x;
    cin>>x;
    Solution s;
    char ans;
    ans = s.countBits(x);
    //print_vec(it,ans);
    cout<<ans<<endl;
  }
}

/*
https://leetcode.com/problems/counting-bits/description/
*/
