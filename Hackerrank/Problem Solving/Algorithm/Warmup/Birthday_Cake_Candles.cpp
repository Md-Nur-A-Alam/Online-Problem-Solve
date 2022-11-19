#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int candle(int arr[],int n)
{
    sort(arr,arr+n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[n-1]==arr[i])
        {
            count++;
        }
    }
    return count;

}

int main()
{
    int arr[100000],n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<candle(arr,n)<<endl;
    
    return 0;

}