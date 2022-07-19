#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int vertex;
    cin>>vertex;
    int arr[vertex+1];
    arr[0]=0;
    vector<int> parents;
    for(int i=1; i<=vertex; i++)
    {
        cin>>arr[i];
        if(arr[i]==-1)
            parents.push_back(i);
    }
    vector<int> adj[vertex+1];

    vector<int> visited(vertex+1,0);

    for(int i=1; i<=vertex; i++)
    {

        adj[i].push_back(arr[i]);
        if(arr[i]!=-1)
            adj[arr[i]].push_back(i);
    }

    /*
    for(int i=0;i<=vertex;i++){
            for(int j=0;j<adj[i].size();j++)
                cout<<i<<"->"<<adj[i][j]<<endl;
    }
    */

    //int startnode=1;
    stack<int> st;
    vector<int> maxlength(vertex+1);
    //st.push(startnode);
    for(int it:parents)
    {
        if(visited[it]!=1)
        {
            st.push(it);
            maxlength[it]=1;
            //cout<<it<<" "<<maxlength[it]<<endl;
            while(!st.empty())
            {
                int top = st.top();
                st.pop();
                if(visited[top] !=1)
                {
                    visited[top] =1;
                    for(auto i : adj[top])
                    {
                        if(i != -1 && visited[i] !=1)
                        {
                            st.push(i);
                            maxlength[i]=maxlength[top]+1;
                            //cout<<i<<" "<<maxlength[i]<<endl;
                        }

                    }
                    //cout<<top<<endl;
                }
            }
        }

    }


    cout<<*max_element(maxlength.begin(),maxlength.end())<<endl;;

}
