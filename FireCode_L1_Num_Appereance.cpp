//
//  FireCode_L1_Num_Appereance.cpp
//  CPP
//
//  Created by Chitrabasu Khare on 31/01/18.
//  Copyright © 2018 Chitrabasu Khare. All rights reserved.
//
#include<iostream>
#include<map>
#include <vector>
using namespace std;

int single_number(vector<int>arr, int sz)
{
    map<int, int> m;
    map<int, int>:: iterator it;
    for (int i=0; i < sz ; i++ )
    {
        m[arr[i]]++;
    }
    for (it = m.begin(); it!=m.end(); ++it)
    {
      if (it->second ==1)
      {return it->first;
      }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];
    int x = single_number(arr, n);
    cout << x << endl;
}
