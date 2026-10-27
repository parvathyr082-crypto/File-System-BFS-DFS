#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int n, target;
int queue[MAX];

void DFS(int node, int *found)
{
int i;

visited[node] = 1;
printf("%d ", node);

if (node == target)
    *found = 1;

for (i = 0; i < n; i++)
{
    if (graph[node][i] == 1 && !visited[i])
        DFS(i, found);
}

}

void BFS(int start)
{
int front = 0, rear = 0;
int i, node, found = 0;

for (i = 0; i < n; i++)
    visited[i] = 0;

visited[start] = 1;
queue[rear++] = start;

printf("\nBFS Traversal: ");

while (front < rear)
{
    node = queue[front++];
    printf("%d ", node);

    if (node == target)
        found = 1;

    for (i = 0; i < n; i++)
    {
        if (graph[node][i] == 1 && !visited[i])
        {
            visited[i] = 1;
            queue[rear++] = i;
        }
    }
}

if (found)
    printf("\nFile found using BFS.\n");
else
    printf("\nFile not found using BFS.\n");

}

int main()
{
int i, j, start, found = 0;

printf("Enter number of nodes (1-20): ");
scanf("%d", &n);

if (n < 1 || n > MAX)
{
    printf("Invalid number of nodes.\n");
    return 1;
}

printf("Enter adjacency matrix:\n");

for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
        scanf("%d", &graph[i][j]);

printf("Enter starting node (0 to %d): ", n - 1);
scanf("%d", &start);

printf("Enter target file node (0 to %d): ", n - 1);
scanf("%d", &target);

if (start < 0 || start >= n || target < 0 || target >= n)
{
    printf("Invalid node number.\n");
    return 1;
}

for (i = 0; i < n; i++)
    visited[i] = 0;

printf("\nDFS Traversal: ");
DFS(start, &found);

if (found)
    printf("\nFile found using DFS.\n");
else
    printf("\nFile not found using DFS.\n");

BFS(start);

return 0;

}
