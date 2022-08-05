#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        string s="";
        for(int i=0; i<n; i++)
        {
            if(i==n-1 || i==n-2)
                s+='b';
            else
                s+='a';
        }

        if(k==1)
            cout<<s<<endl;
        else
        {

            long long int i=1,j=1,p=n-2;

            while(i<k)
            {
                i= i+j;
                j++;
                p--;
            }
            if(i==k)
            {
                swap(s[p],s[n-2]);
                cout<<s<<endl;
            }
            else
            {
                p++;
                swap(s[p],s[n-2]);
                while(true)
                {
                    p++;
                    i--;
                    if(i==k)
                    {
                        swap(s[p],s[n-1]);
                        break;
                    }

                }

                cout<<s<<endl;
            }

        }


    }

}

