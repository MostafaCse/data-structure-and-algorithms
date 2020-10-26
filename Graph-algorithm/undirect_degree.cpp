#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node;
    cout<<"How many node: ";
    cin>>node;
    int graph[node][node];

   cout<<"enter the graph "<<node<<"*"<<node<<" matrix"<<endl;
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
            cin>>graph[i][j];
    }

        for(int i=0; i<node; i++)
    {
        int degree=0;
        for(int j=0; j<node; j++)
        {
            if(graph[i][j]==1)
                degree++;
        }
        cout<<i+1<<" node degree is: "<<degree<<endl;
    }
return 0;
}
