#include<bits/stdc++.h>
using namespace std;
class edge{
public:
    int source;
    int dest;
    int weight;

};
bool compare(edge e1, edge e2)
{
    return (e1.weight<e2.weight);
}
void kurshal(edge input ,int n, int e)
{
    sort(input, input+e, compare());
    {

    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    edge *input=new edge[e];

    for(int i=0; i<e; i++)
    {
        int s,d,w;
        cin>>s>>d>>w;
        input.source=s;
        input.dest=d;
        input.weight=w;
    }

  kurshal(edge, n, e);

}
