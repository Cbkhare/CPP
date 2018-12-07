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

#define repas(it,str) for(auto it = str.begin(); it < str.end(); ++it)
#define reps(it,str) for(string::iterator it = str.begin(); it < str.end(); ++it)
//cout << index++ << *it;
#define rep(i, n) for(int i=0;i<n;i++)
#define rep_vec(it,v) for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++)
#define print_vec(it,v) for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++) cout <<*it<< ' '
#define print_vector(v) for (const auto i: v)  std::cout << i << ' ';
#define max(x,y)  (x>y)?x:y
#define min(x,y)  (x>y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)
typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;

/*
//******************************************************************************
//Accesing pointer vector
https://stackoverflow.com/questions/1910712/dereference-vector-pointer-to-access-element
void method(std::vector<int>* v)
  {
    v->push_back(20);

    for(int i=0; i<v->size();i++){
      cout<<(*v)[i]<<endl;

    }
  }

int main(){
  std::vector<int> v;
  v.push_back(10);
  method(&v);
  print_vec(it, v);
  return 0;
}
//******************************************************************************
*/



/*
rep(i,x) {
  cin>>y;
  v.push_back(y) ;
}

vector<char> v;
reps(it,y)
{
  v.push_back(*it);
}
*/
//std::copy (v.begin(), v.end(), std::ostream_iterator<T>(cout, ", "));
//std::copy (v.begin(), v.end(), std::ostream_iterator<char>(cout, ", "));

int main()
{
    int n,m;
    cin>>n;
    for (int i=0; i<n;i++){
        /*cin>>m;
        Solution S;

        */cin>>m;
        Solution S;vector<int> ans;
        ans = S.sieve(m);
        print_vector(ans);
    }
    return 0;
}
