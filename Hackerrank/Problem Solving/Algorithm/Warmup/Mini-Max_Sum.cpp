#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void MiniMax(long long int array[])
{
    long long int min=0,max=0;
    for (int i = 0; i < 5; i++)
    {
        if (i>0)
        {
            max += array[i];
        }
        if (i<4)
        {
            min += array[i];
        }
    }
    cout<<min<<" "<<max<<endl;
}

int main()
{
    long long int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+5);
    MiniMax(arr);
    
    return 0;

}