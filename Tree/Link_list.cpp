#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
 node *next;
};

int main()
{
node *start,*ptr;
start=(node*)malloc(sizeof(node));
ptr=start;

while(1)
{
    cout<<"enter the number: ";
    cin>>ptr->data;
    cout<<"enter the again? 1/0 "<<endl;
    int ch;
    cin>>ch;
    if(ch==0)
    {
        ptr->next=NULL;
        break;
    }
    ptr->next=(node*)malloc(sizeof(node));
    ptr=ptr->next;
}
cout<<"enter the insert item: ";
int item;
cin>>item;

ptr=start;
node *insert_item,*avail,*save;
insert_item=(node*)malloc(sizeof(node));
insert_item->data=item;

while(ptr!=NULL)
{
    if(ptr->data>item)
    {
        avail=ptr;
        break;
    }
  else
  {
      save=ptr;
       ptr=ptr->next;
  }

}
//save->next=avail->next;
save->next=insert_item;
insert_item->next=avail;



ptr=start;
while(ptr!=NULL)
{
    cout<<ptr->data<<" ";
    ptr=ptr->next;
}

}
