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

    for(int i=0; i<n; i++)
    {
        int in=0;
        for(int j=0; j<n; j++)
        {
            if(gr[i][j]==1)
                in++;
        }
        cout<<i+1<<" element degree is :"<<in<<endl;
    }
    return 0;
}
