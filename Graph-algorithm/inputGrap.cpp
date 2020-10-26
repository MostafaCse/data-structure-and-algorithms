#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter how many nodes: ";
    int n;
    cin>>n;
    int gr[n][n];
    cout<<"enter the matirx: "<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>gr[i][j];
        }
    }
    cout<<"the graph is: "<<endl;
       for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<gr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
