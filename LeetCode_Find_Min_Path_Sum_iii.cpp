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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

      int count = 0;
      int value = 0;
    int pathSum(TreeNode* root, int sum)  {
        if (root == NULL) return 0;
        this->value = sum;
        getNodes(root);
        return this->count;
    }

    std::vector<int> getNodes(TreeNode* node){
      std::vector<int> lv,rv;
      int nv;
      if (node->left != NULL){
        lv = getNodes(node->left);
      }
      if (node->right != NULL){
        rv = getNodes(node->right);
      }


      for(std::vector<int>::iterator it=lv.begin(); it!=lv.end(); it++){
        nv = lv[*it] + node->val;
        if (nv == this->value){
          this->count+=1;
          lv.erase(it);
        }
        else{
          lv[it]= nv;
        }
      }

      for(std::vector<int>::iterator it=rv.begin(); it!=rv.end(); it++){
        nv = rv[*it] + node->val;
        if (nv == this->value){
          this->count+=1;
          rv.erase(it);
        }
        else{
          rv[it]= nv;
        }
      }

      lv.insert(lv.end(), rv.begin(), rv.end());
      lv.insert(lv.end(), node->val);
      return lv;
    }
};
