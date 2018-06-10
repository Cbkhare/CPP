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


int main()
{
  int x,y,z;
  std::vector<int> v1, v2;
  cin>>x;
  cin>>y;
  rep(j,y){
    int p;
    cin>>p;
    v1.push_back(p);
  }
  cin>>z;
  rep(j,z){
    int q;
    cin>>q;
    v2.push_back(q);
  }
  //int iv1=v1.front(), iv2=v2.front(), ev1=v1.back(), ev2 = v2.back(), c=0;
  int c=0;
  bool found = true;
  while (v1.size() * v2.size()){
    if (v1.front() > v2.front()){
      v1.push_back(v2.front());
      v1.push_back(v1.front());
      v1.erase(v1.begin());
      v2.erase(v2.begin());
    }
    else{
      v2.push_back(v1.front());
      v2.push_back(v2.front());
      v1.erase(v1.begin());
      v2.erase(v2.begin());
    }
    //if ((iv1==v1.front() and iv2==v2.front() and ev1==v1.back() \
      and ev2==v2.back()) or (c>526))  this is also correct
    if (c>526)
      {
        found = false;
        break;
      }
      c++;
  }
  if (not found){
    cout<<-1<<endl;
  }
  else{
    int r =1 ;
    if (not v1.size()) r=2;
    cout<<c<<" "<<r;
  }
}
