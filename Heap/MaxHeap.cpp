//Exit Maxheap

#include<bits/stdc++.h>
using namespace std;

int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i+1;
}
int parent(int i)
{
    return i/2;
}

int main()
{
    int a[10];
    a[1]=19;
    a[2]=7;
    a[3]=17;
    a[4]=3;
    a[5]=5;
    a[6]=12;
    a[7]=10;
    a[8]=1;
    a[9]=2;
  int is_h=0;
    for(int i=9; i>=1; i--)
    {
        int p=parent(i);

        if(a[p]<a[i])
            {
                is_h=1;
                break;
            }
    }
if(is_h==1)
    cout<<"not max heap"<<endl;
else
    cout<<"max heap"<<endl;

}
