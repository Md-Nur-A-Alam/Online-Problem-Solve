#include <bits/stdc++.h>

using namespace std;

void timeConversion(string s)
{
    // string str= s.substr(0, s.length() - 3),st;
    // cout<<str<<endl;
    // st='PM';
    // int i;
    // i=(int)st;
    // cout<<i<<endl;
    string str;
    if (s[8] == 'P')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            str = s.substr(0, s.length() - 2);
            cout<<str<<endl;
        }
        else
        {
            string temp;
            int a;
            temp = s.substr(0, s.length() - 8);
            stringstream nur(temp);
            nur >> a;
            cout<<a+12;
            for (int i = 2; i < 8; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }

    else
    {
        if (s[0] != '1' && s[1] != '2')
        {
            str = s.substr(0, s.length() - 2);
            cout<< str<<endl;
        }
        else
        {
            string temp;
            cout<<"00";
            for (int i = 2; i < 8; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    timeConversion(s);
    return 0;
}
