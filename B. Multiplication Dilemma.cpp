#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sp,nsp;
        cin>>n>>m;
        if(n/10 == 0 || n%10==0)
        {
            sp=n;
            nsp=m;
        }
        else
        {
            sp=m;
            nsp=n;
        }
        int a= nsp/10;
        cout<<a*10<<" x "<<sp<<" + "<<nsp%10<<" x "<<sp<<endl;

    }

}

