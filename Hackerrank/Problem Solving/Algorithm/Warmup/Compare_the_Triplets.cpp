#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void arra(int a[], int b[])
{
    int al=0,bo=0;
    for (int i = 0; i <3; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        
        else if (a[i]>b[i])
        {
            al++;
        }
        else
        {
            bo++;
        }
    }
    cout<<al<<" "<<bo<<endl;
}

int main()
{
    int a[3],b[3];
    cin >>a[0]>>a[1]>>a[2];
    cin >>b[0]>>b[1]>>b[2];
    arra(a,b);
    
    return 0;

}