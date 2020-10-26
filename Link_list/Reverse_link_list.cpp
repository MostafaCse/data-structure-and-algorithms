#include<bits/stdc++.h>
using namespace std;

struct Link_list
{
    int number;
    struct Link_list *next;
      struct Link_list *previous;
};
typedef Link_list node;

int main()
{
node *start,*ptr,*pre;
start=(node*)malloc(sizeof(node));
ptr=start;


cout<<"how many nodes: ";
int n;
cin>>n;
cout<<"enter the numbers :"<<endl;

for(int i=0; i<n; i++)
{
    if(i==0)
    {
       cin>>ptr->number;
       ptr->next=(node*)malloc(sizeof(node));
         ptr->previous=NULL;
       pre=ptr;
       ptr=ptr->next;

    }
cin>>ptr->number;
 ptr->next=(node*)malloc(sizeof(node));
 ptr->previous=(node*)malloc(sizeof(node));
   ptr=ptr->next;
   ptr->previous=pre;
   pre=ptr->previous;

}



while(pre!=NULL)
{
    cout<<pre->number<<endl;
    pre->previous;
}


return 0;
}

