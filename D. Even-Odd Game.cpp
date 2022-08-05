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
        int arr[n];
        priority_queue<int> a;
        priority_queue<int> b;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                //e
                a.push(arr[i]);
            }
            else
            {
                b.push(arr[i]);
            }
        }
        long long int asum=0;
        long long int bsum=0;
        int i=1;
        while(!a.empty() || !b.empty())
        {
            if(i%2!=0)
            {
                //alice
                if(a.size()==0)
                {
                    b.pop();
                }
                else
                {
                    if(!b.empty() && a.top()<b.top())
                    {
                        b.pop();
                    }
                    else
                    {
                        asum+=a.top();
                        a.pop();
                    }

                }

            }
            else
            {
                //bob
                if(b.size()==0)
                {
                    a.pop();
                }
                else
                {
                    if(!a.empty() && b.top()<a.top())
                    {
                        a.pop();
                    }
                    else
                    {
                        bsum+=b.top();
                        b.pop();
                    }

                }

            }

            i++;
        }
        if(asum>bsum)
            cout<<"Alice"<<endl;
        else if(asum<bsum)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;

    }

}

