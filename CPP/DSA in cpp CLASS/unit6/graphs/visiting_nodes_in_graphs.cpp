#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int cost[10][10], i, j, k, n, stack[10], top = 0, v;
int visit[10], visited[10];

int main()
{
    int m;

    cout << "Enter No of vertices: ";
    cin >> n;

    cout << "Enter No of edges: ";
    cin >> m;

    cout << "\nEdges: \n";

    for (int k = 1; k <= m; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }

    cout << "enter initial vertex: ";
    cin >> v;

    cout << "Visited vertices\n";
    cout << v << endl;

    visited[v] = 1;

    k = 1;

    while (k < n)
    {
        for (int j = 1; j <= n; j++)
        {
            if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
            {
                visit[j] = 1;
                stack[top++] = j;
            }
        }
        v = stack[top++];
        cout << v << " ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }

    return 0;
}