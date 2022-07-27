#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    string guest, host, letter_pile;
    cin>>guest>>host>>letter_pile;
    string cnt = guest+host;
    int ghl = cnt.length();
    int lpl = letter_pile.length();
    map<char, int> mp;
    for(int i=0; i<ghl; i++)
    {
        mp[cnt[i]]++;
    }
    map<char, int> mp2;
    for(int i=0; i<lpl; i++)
    {
        mp2[letter_pile[i]]++;
    }
    if(mp == mp2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
