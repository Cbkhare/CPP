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
#define rep_vec(it,v) for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++)
#define print_vec(it,v) for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++) cout <<*it<< ' '
#define print_vector(v) for (const auto i: v)  std::cout << i << ' ';
typedef std::map<int, int> mii;
typedef std::string::iterator sit;
typedef std::map<int, int>::iterator miit;
#define max(x,y)  (x>y)?x:y
#define min(x,y)  (x<y)?x:y
#define len(arr)  sizeof(arr)/sizeof(*arr)


//std::mii m;

class Solution{
  public:
    std::unordered_map<int, int> umap;
    std::vector<int> *vc;
    int cloud(int i,vector<int> c){
        if(umap.find(i) != umap.end()){
          return umap.at(i);
        }
        if (c[i]==1 or i>=c.size()){
          umap[i] = 2147483647;
        }
        else if (i==c.size()-1){
          umap[i] = 0;
        }
        else{
          //std::vector<int> v1(c.begin()+1,c.end());
          int d;
          d = min(this->cloud(i+1,c), this->cloud(i+2,c));
          cout<<d<<' '<<i<<endl;
          d++;
          umap[i] = d;
        }
        return umap.at(i);
    }

    int jumpingOnClouds(vector<int> c) {
      //std::vector<int> *vc = new vector<int>[sizeof(c)];
      //return cloud(0, c);
      return this->cloud(0,c);
      /*
      for(std::vector<int>::iterator it=vc->begin(); it!=vc->end(); it++){
        cout<<*it<<endl;
      }*/
    }
  };


  class Solution1{
    public:
      std::vector<int> vc;
      int cloud(int i,vector<int> c){
          if( i<c.size() and vc[i] != -1){
            return vc.at(i);
          }
          if (c[i]==1 or i>=c.size()){
            vc[i] = 2147483647;
          }
          else if (i==c.size()-1){
            vc[i] = 0;
          }
          else{
            //std::vector<int> v1(c.begin()+1,c.end());
            int d;
            d = min(this->cloud(i+1,c), this->cloud(i+2,c));
            cout<<d<<' '<<i<<endl;
            d++;
            vc[i] = d;
          }
          return vc.at(i);
      }

      int jumpingOnClouds(vector<int> c) {
        //std::vector<int> *vc = new vector<int>[sizeof(c)];
        //return cloud(0, c);
        vc.resize(c.size()+2, -1);
        return this->cloud(0,c);
        /*
        for(std::vector<int>::iterator it=vc->begin(); it!=vc->end(); it++){
          cout<<*it<<endl;
        }*/
      }
    };


int main()
{
    int size;
    cin>>size;
    std::vector<int> v(size);
    rep_vec(it,v){
      std::cin>>*it;
    }
    int output;
    Solution1 s;
    output = s.jumpingOnClouds(v);
    std::cout<<output<<endl;
    //print_vec(it, v);
    return 0;
}

/*
https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
*/
