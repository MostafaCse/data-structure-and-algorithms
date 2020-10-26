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

void max_heapify(int heap[],int heap_size,int i)
{
    int l,r,largest,temp;
    l=left(i);
    r=right(i);

    if( l<=heap_size  && heap[l]>heap[i]) largest=l;
    else largest=i;

    if( r<=heap_size  && heap[r]>heap[largest]) largest=r;

    if(largest!=i)
    {
      temp=heap[i];
      heap[i]=heap[largest];
      heap[largest]=temp;
      max_heapify(heap,heap_size,largest);
    }
}
void build_max_heap(int heap[],int heap_size)
{
    for(int i=heap_size/2; i>=1; i--)
    {
        max_heapify(heap,heap_size,i);
    }
}
void print_heap(int heap[],int heap_size)
{
    for(int i=1; i<=9; i++)
        cout<<heap[i]<<" ";
}
int main()
{
    int heap_size=9;
int heap[10];
heap[1]=12;
heap[2]=7;
heap[3]=1;
heap[4]=3;
heap[5]=10;
heap[6]=17;
heap[7]=19;
heap[8]=2;
heap[9]=5;
print_heap(heap,heap_size);
cout<<endl<<"after max heap"<<endl;
build_max_heap(heap,heap_size);
print_heap(heap,heap_size);

}
