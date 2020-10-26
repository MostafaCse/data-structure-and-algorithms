#include<bits/stdc++.h>
using namespace std;
int grid[100][100],n,vis[7];

void dfs(int s)
{

    if(vis[s]==true) return ;
    else
        vis[s]=true;

    for(int i=0; i<n; i++)
    {
        if(grid[s][i]==1)
        {
            dfs(i);
        }
    }
cout<<s<<" ";
}

int main()
{
cout<<"how many nodes: ";
cin>>n;
for(int i=0; i<n; i++)
    vis[i]=false;

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
dfs(s);
return 0;
}

