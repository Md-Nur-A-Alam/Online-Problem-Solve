#include <bits/stdc++.h>
using namespace std;

int diff(vector<vector<int>> vect, int n)
{
    int l=0,r=0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>> vect[i][j];
            if (i==j)
            {
                l+=vect[i][j];
            }
            if (i+j+1==n)
            {
                r+=vect[i][j];
            }
        }
    }
    return abs(l-r);
}

int main()
{
    int s, dif;
    cin >> s;
    vector<vector<int>> vec(s, vector<int>(s, 0));
    dif = diff(vec, s);
    cout << dif << endl;
    return 0;
}
