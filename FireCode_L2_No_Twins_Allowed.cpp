#include<iostream>
#include<map>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

bool are_all_characters_unique_old(string s)
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

bool are_all_characters_unique(string str)
{
    // Add your code below this line. Do not modify any other code.
    unordered_set<char> roller;
    // unordered_set<std::string> roller;
    string::iterator it;
    for (it=str.begin(); it<str.end();it++)
    {
      if (roller.find(*it) == roller.end())
      {
        roller.insert(*it);
      }
      else
      {
        return false;
      }
    }
    return true;
    // Add your code above this line. Do not modify any other code.
}


bool are_all_characters_unique_fast(std::string str)
{
    std::vector<bool> dup( 256, false );
    for ( auto c : str ) {
        if ( dup[c] ) return false;
        else dup[c] = true;
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
    cout<<are_all_characters_unique(str)<<endl;}
    return 0;
}
