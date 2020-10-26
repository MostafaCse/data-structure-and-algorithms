#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
 node *next;
 node *pre;
};

int main()
{
node *start,*ptr,*save;

start=(node*)malloc(sizeof(node));
ptr=start;

cout<<"how many data: ";
int n;
cin>>n;
start=(node*)malloc(sizeof(node));
ptr=start;
for(int i=0; i<n; i++)
{
    cout<<"enter the value: ";
    if(i==0)
    {
    cin>>ptr->data;
    ptr->pre=NULL;
    ptr->next=(node*)malloc(sizeof(node));
     save=ptr;
    ptr=ptr->next;
    }
    else if(i==n-1)
    {
    cin>>ptr->data;
    ptr->pre=save;
    ptr->next=NULL;
    }
    else
    {
    cin>>ptr->data;
    ptr->pre=save;
    ptr->next=(node*)malloc(sizeof(node));
    save=ptr;
    ptr=ptr->next;
    }
}


while(ptr!=NULL)
{
    cout<<ptr->data<<" ";
    ptr=ptr->pre;
}

}

