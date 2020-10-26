#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999

void printSolution(int dist[][V])
{
    cout<<"The following matrix shows the shortest distances"
            " between every pair of vertices \n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                cout<<"INF"<<"     ";
            else
                cout<<dist[i][j]<<"     ";
        }
        cout<<endl;
    }
}
void floydWarshall (int graph[][V])
{
    int i, j, k;
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (graph[i][k] + graph[k][j] < graph[i][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }

    printSolution(graph);
}
int main()
{
    int graph[V][V] = { {0, 3, INF, INF},
                        {2, 0, 2, INF},
                        {INF, 5, 0, INF},
                        {20, INF, 8, 0}
                    };

    floydWarshall(graph);
    return 0;
}
