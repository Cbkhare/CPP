#include<iostream>
#include<map>
#include <vector>
#include <string>
using namespace std;

bool are_all_characters_unique(string s)
{
    map<char, int> m;
    string::iterator it;
    for (it=s.begin(); it<s.end(); it++)
    {
      if (m.find(*it)->second >0)
      { return false; }
      else
      {
        m[*it]+=1;
      }
    }

    return true;
}


int main()
{
    int n;
    cin >>n;
    for (int i=0; i<n; i++)
    {
    string str;
    cin>>str;
    cout<<are_all_characters_unique1(str)<<endl;}
    return 0;
}
