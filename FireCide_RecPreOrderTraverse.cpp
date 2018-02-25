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


class Tree
{
public:
  int value;
  Tree* left;
  Tree* right;
  Tree(int val)
  {
    value = val;
    left = NULL;
    right = NULL;
  }
  int get_value() {
    return value;
  }

};

void insert(Tree *cur, int val) {
  if(cur->get_value() > val) {
    if(cur->left == NULL) {
      cur->left = new Tree(val);
    }
    else {
      insert(cur->left, val);
    }
  }
  else {
    if(cur->right == NULL) {
      cur->right = new Tree(val);
    }
    else {
      insert(cur->right, val);
    }
  }
}

void print_inorder(Tree *cur) {
  if(cur->left != NULL) {
    print_inorder(cur->left);
  }
  cout << cur->get_value() << " ";
  if(cur->right != NULL) {
    print_inorder(cur->right);
  }
}



struct treeNode{
  int value;              /* value of the node */
  struct treeNode* left;  /* pointer to the left child node */
  struct treeNode* right; /* pointer to the right child node */
};


class Tr
{
public:
  treeNode* root;
  treeNode* back ;

  void insert (int x)
  {
    treeNode* n = new treeNode;
    if (root == NULL)
    {
      root = n;
    }
    else
    {
      if (x > back->value)
      {
        back->right =  n;
      }
      else
      {
        back->left = n;
      }
    }
    n->value = x;
    n->left=NULL;
    n->right = NULL;
    back = n;
  }

  void print_inorder(Tr *cur) {
    if(cur->left != NULL) {
      print_inorder(cur->left);
    }
    cout << cur->get_value() << " ";
    if(cur->right != NULL) {
      print_inorder(cur->right);
    }
  }
};


int main()
{
  int x;
  cout << "How many numbers: ";
  cin >> x;
  /*
  Tree* root = NULL;
  for (int i=0; i<x; i++)
  {
     int y;
     cin>>y;
     if(root == NULL) {
       root = new Tree(y);
     } else {
       insert(root, y);
     }
  }
  print_inorder(root);*/
  Tr t = new Tr();
  for (int i =0;i<x;i++)
  {
    int y;
    cin>>y;
    t.insert(y)
  }
  t.print_inorder(this->root)

}
