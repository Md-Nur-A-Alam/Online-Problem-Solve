#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void piramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<"#";
        }
        cout<<endl;
        
    }
    
}

int main()
{
    int n;
    cin >> n;
    piramid(n);
    return 0;
}