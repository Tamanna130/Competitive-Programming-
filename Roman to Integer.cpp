#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    char arr[7]= {'I','V','X','L','C','D','M'};
    int val[7]= {1,5,10,50,100,500,1000};
    vector<int> vec(26,0);
    for(int i=0; i<7; i++)
    {
        vec[arr[i]-65]=val[i];
    }
    reverse(s.begin(),s.end());
    int v=0;
    long long int sum=0;
    for(int i=0; i<s.length(); i++)
    {
        if((vec[s[i]-65])>=v)
        {
            sum+=vec[s[i]-65];

        }
        else
        {
            sum-=vec[s[i]-65];
        }
        v=vec[s[i]-65];
    }
    return sum;
}

int main()
{

    // MCMXCIV

    string s;
    cin>>s;
    cout<<romanToInt(s);
}

