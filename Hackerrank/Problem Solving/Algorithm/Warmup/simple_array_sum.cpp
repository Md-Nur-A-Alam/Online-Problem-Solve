#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int num[1000],s;
    cin >>s;
    for (int i = 0; i < s; i++)
    {
        cin>>num[i];
    }
    cout<<simpleArraySum(num,s)<<endl;
    return 0;
}
