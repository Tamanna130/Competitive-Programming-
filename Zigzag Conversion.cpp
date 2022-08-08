#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;
    vector<int> v[numRows];
    int sz=0;
    int f=0;
    int i=0;
    while(sz != s.length())
    {
        if(f==0)
        {
            v[i].push_back(sz);
            i++;
            sz++;
        }
        else
        {

            i--;
            v[i].push_back(sz);
            sz++;
        }
        if(i==numRows)
        {
            f=1;
            i--;
        }

        else if(i==0)
        {
            f=0;
            i++;
        }


    }
    string st="";
    for(vector<int> i:v)
    {
        for(int j=0; j<i.size(); j++)
        {
            st+=s[i[j]];
        }
    }
    return st;
}

int main()
{
    string s;
    cin>>s;
    int r;
    cin>>r;
    cout<<convert(s,r);
}
