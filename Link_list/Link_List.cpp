#include<bits/stdc++.h>
using namespace std;

struct Link_list
{
    int number;
    struct Link_list *next;
};
typedef Link_list node;

int main()
{
node *start,*ptr;
start=(node*)malloc(sizeof(node));
ptr=start;

while(1)
{
    cout<<"enter the number: ";
    cin>>ptr->number;
    cout<<"do u again enter the number"<<endl<<" press 1 for yes and 0 for no"<<endl;
   int temp;
    cin>>temp;
    if(temp==1)
    {
        ptr->next=(node*)malloc(sizeof(node));
        ptr=ptr->next;
    }
    else
    {

        ptr->next=NULL;
        break;
    }

}

ptr=start;
while(ptr!=NULL)
{
    cout<<ptr->number<<endl;
    ptr=ptr->next;
}


return 0;
}
