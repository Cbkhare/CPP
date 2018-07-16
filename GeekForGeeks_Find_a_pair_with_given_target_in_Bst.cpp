#include <set>
#include <vector>
std::unordered_set<int> us;
std::vector<int> v;
void fillUs(struct node *root, int target)
{
    if (root==NULL){    return;}
    bool l=false,r=false;
    if (root->left){

        fillUs(root->left, target);
    }
    if (root->right){
        fillUs(root->right, target);
    }
    int d;
    d = target - root->val;
    us.insert(d);
    v.push_back(root->val);
}
bool isPairPresent(struct node *root, int target){
    fillUs(root,target);
    for (std::vector<int>::iterator it=v.begin(); it!=v.end();it++){
        if (us.find(*it) != us.end()){
            return true;
        }
    }
    return false;

std::unordered_set<int> us;
bool isPairPresent(struct node *root, int target){
    if (root==NULL){ return false;}
    bool l=false, r=false;
    if (root->left){
      l = isPairPresent(root, target);
    }
    if (root->right){
      r = isPairPresent(root, target);
    }
    d = target-root.val;
    if (us.find(d)!=us.end()){
      return true;
    }
    else{
      us.insert(root->val);
      return l or r;
    }
return false;


'''
Given a Binary Search Tree and a target sum, write a function that returns true if there is a pair with sum equals to target sum, otherwise return false.

Input:
First line consists of T test cases. First line of every test case consists of N and target, denoting the number of elements in bst and target sum. Second line consists of elements of BST.

Output:
Return True if target sum pair is found else False.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
7 10
1 2 3 4 5 6 7
7 33
15 10 20 8 12 16 25
Output:
1
1'''
