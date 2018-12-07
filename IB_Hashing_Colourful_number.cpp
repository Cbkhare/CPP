
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
#include <stack>
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
#define min(x,y)  (x<y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)
#define print_vector(v) for (const auto i: v)  std::cout << i << ' ';
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())


typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;


//****************************-Solution-****************************************

class Solution {
public:
  unordered_set<int> ust;
  int colorful(int A);
  int mul_colr(int N);
};

int Solution::mul_colr(int N){
  int m=1;
  bool set=false;
  while (true){
    m *=N%10;
    N/=10;
    if (set or N==0) break;
    if (N<10){
      set=true;
    }
  }
  return m;
}
int Solution::colorful(int A) {
  if (A==0) return 1;
  //cout<<A<<endl;
  int N = A;
  bool not_next = false;
  int result =1,digit=0;
  while (true){
    digit+=1;
    //cout<<N<<endl;
    int mul=this->mul_colr(N);
    if (this->ust.find(mul) != this->ust.end()){
      return 0;
    }
    this->ust.insert(mul);
    N/=10;
    if (not_next or N==0) break;
    if (N<10) not_next = true;
  }
  if (A>=10){
    result = this->colorful(A%int(pow(10,digit-1)));
  }
  return result;
}


int Solution::colorful_editorial(int N) {
        char st[20];
        sprintf(st, "%d", N);
        int len = strlen(st);

        map<long long, bool> Hash;

        for(int i = 0; i < len; ++i) {
            long long mul = 1;
            for(int j = i; j < len; ++j) {
                mul *= (long long)(st[j] - '0');
                if(Hash.find(mul) != Hash.end())
                        return 0;
                Hash[mul] = true;
            }
        }

        return 1;
}


int Solution::colorful_edi_modified(int N) {
        string st;
        st = to_string(N);
        map<long long, bool> Hash;

        for(int i = 0; i < st.size(); ++i) {
            long long mul = 1;
            for(int j = i; j < st.size(); ++j) {
                mul *= (long long)(st[j] - '0');
                if(Hash.find(mul) != Hash.end())
                        return 0;
                Hash[mul] = true;
            }
        }

        return 1;
}

int main()
{
    int n,m;
    cin>>n;
    for (int i=0; i<n;i++){
      cin>>m;
      Solution S;
      int ans;
      ans = S.colorful(m);
      cout<<ans<<endl;
      //print_vector(v);
      //cout<<ans<<endl;
    }
    return 0;
}
