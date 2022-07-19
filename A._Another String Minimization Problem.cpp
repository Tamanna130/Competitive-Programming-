#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        string s="";
        vector<int> v;
        for(int i=0; i<m; i++)
        {
            s+='B';
        }
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            arr[i]--;
        }
        for(int i=0; i<n; i++)
        {
            int a = min(arr[i],(m-1-arr[i]));
            if(s[a]=='B')
            {
                s[a]='A';
            }
            else
            {
                int b = max(arr[i],(m-1-arr[i]));
                s[b]='A';
            }
        }
        cout<<s<<endl;


    }
}

