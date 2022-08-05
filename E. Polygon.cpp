#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<n; j++)
            {
                arr[i][j]=s[j]-48;
            }
        }

        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                /*
                if(i==n-1 && j!=n-1){
                if(arr[i][j]==1){
                if(arr[i][j+1]==0)
                    flag=1;
                }
                }
                */
                if(arr[i][j]==1)
                {
                    if(arr[i+1][j]==0 && arr[i][j+1]==0)
                    {
                        flag=1;
                        break;
                    }

                    //cout<<i<<" "<<j<<endl;

                }

            }
        }


        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


}


