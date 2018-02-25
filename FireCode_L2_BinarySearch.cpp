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
#include <array>
using namespace std;

bool binary_search(int arr[], int size, int n)
{
    // Add your code below this line. Do not modify any other code.
    int i=0, m;
    while (i<=size)
    {
        m = int((size+i)/2);
        if (arr[m]==n)
        {
            return true;
        }
        else if(arr[m]>n)
        {
            size = m-1;
        }
        else //(arr[m]<n)
        {
            i = m+1;
        }
        //cout <<i<<' '<<m<<' '<<size<<endl;
    }
    return false;
    // Add your code above this line. Do not modify any other code.
}

int main()
{
  int y=2,arr[]={1,2,3, 4, 5,7,9,12};

  cout<<binary_search(arr, sizeof(arr)/sizeof(arr[0]), 3)<<endl;
  return 0;
}


/*Write a function that searches an array of integers for a given integer using the Binary Search Algorithm.
If the element is found in the array, return true. Otherwise, return false.
You can assume that the given array of integers is already sorted in ascending order.

Examples:

binary_search({2,5,7,8,9},5,9) -> true
binary_search({2,8,9,12},4,6) -> false
binary_search({2},1,4) -> false
binary_search({},0,9) -> false
{} -> [Empty] Array*/
