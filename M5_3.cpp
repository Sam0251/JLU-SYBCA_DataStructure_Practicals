//Write a program to perform BFS traversal on a graph.
#include <stdio.h>
int main() {
    int n, e, u, v, front = 0, rear = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n], visited[n], queue[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++)
            graph[i][j] = 0;
    }

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for (int i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    queue[rear++] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");
    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);
        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    return 0;
}

