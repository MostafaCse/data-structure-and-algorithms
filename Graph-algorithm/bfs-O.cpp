#include<bits/stdc++.h>
using namespace std;
int grid[100][100],n;

void bfs(int s)
{
    bool vis[n];
    for(int i=0; i<n; i++)
        vis[i]=false;

    queue <int> q;
    q.push(s);
    vis[s]=true;

    while(!q.empty())
    {
        int t=q.front();
        cout<<t<<" ";
        q.pop();
        for(int i=0; i<n; i++)
        {
            if(grid[t][i]==1 && vis[i]==false)
            {
                q.push(i);
                vis[i]=true;
            }
        }

    }

}

int main()
{
cout<<"how many nodes: ";
cin>>n;
cout<<"enter the matrix: "<<endl;
for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        cin>>grid[i][j];
    }
}
int s;
cout<<"enter the source node: ";
cin>>s;
bfs(s);
return 0;
}
