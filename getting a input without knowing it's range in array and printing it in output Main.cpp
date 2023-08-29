#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    char test[10];
    int a=0;
    char ta='s';
    while (isalnum(ta))//getting input without knowing range 
    {
      cin>>test[a];
      ta=test[a];
      a+=1;
    }
    int n=a-1;
    sort(test,test+n,greater<int>());// sorting the array in decenting order
    //for accending order dont use 3rd parameter in sorting
    for( int j=0;j<n;j++)// to print output
    {
      cout<<test[j];
    }
    return 0;
}