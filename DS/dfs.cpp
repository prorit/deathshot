






































/*
#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

// Push to stack
void push(int vertex) {
    stack[++top] = vertex;
}

// Pop from stack
int pop() {
    return stack[top--];
}

// Check if stack is empty
int isEmpty() {
    return top == -1;
}

// DFS using a stack
void DFS(int graph[MAX][MAX], int start, int visited[MAX], int vertices) {
    push(start);
    visited[start] = 1;

    printf("DFS Traversal: ");

    while (!isEmpty()) {
        int current = pop();
        printf("%d ", current);

        // Visit all adjacent vertices
        for (int i = 0; i < vertices; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                push(i);
                visited[i] = 1;
            }
        }
    }

    printf("\n");
}

int main() {
    int graph[MAX][MAX], visited[MAX] = {0}, vertices, edges, v1, v2, start;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    // Initialize the graph
    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            graph[i][j] = 0;

    // Input edges
    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (v1 v2):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &v1, &v2);
        graph[v1][v2] = 1;
        graph[v2][v1] = 1; // for undirected graph
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // Perform DFS
    DFS(graph, start, visited, vertices);

    return 0;
}
*/
