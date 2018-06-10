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


long int bazinga(long int a, long int b)
{
  if (a>b)
  {
    return a-b;
  }
  else if (a==b){
    return 0;
  }
  else{
    int cnt = 0;
    while (a!=b){
      if (b&1 or b<a){ //b is odd
        b++;
      }
      else{
        b/=2;
      }
      cnt+=1;
    }
    return cnt;
  }

}

int main()
{
  long int x,y;
  cin>>x;
  cin>>y;
  cout<<bazinga(x,y)<<endl;
  return 0;
}
