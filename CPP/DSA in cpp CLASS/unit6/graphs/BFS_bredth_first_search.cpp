#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int cost[10][10], i, j, k, n, queue[10], front = 0, rear = 0, v;
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

    return 0;
}
