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
//int imin = std::numeric_limits<int>::min(); // minimum value
//int imax = std::numeric_limits<int>::max();

int getSum(int n)
{
    int sum;
    /* Single line that calculates sum */
    for (sum = 0; n > 0; sum += n % 10, n /= 10);
    //cout<<sum<<endl;
    return sum;
}

int bazinga(int a)
{
int c=1,num =19;
while (true){
  if (getSum(num)==10){
    if (c==a){
      return num;}
    else{
      c+=1;
      }
    }
    num+=9;
  }
}

int main()
{
  int x;
  cin>>x;
  cout<<bazinga(x)<<endl;
  return 0;
}

/*http://codeforces.com/problemset/problem/919/B*/
