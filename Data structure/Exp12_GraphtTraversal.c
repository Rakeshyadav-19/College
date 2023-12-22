#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 100
struct node {
    int vertex;
    struct node * next;
};
struct graph {
    int num_vertices;
    struct node ** adj_list;
};
struct node * create_node(int v) {
    struct node * new_node = (struct node * ) malloc(sizeof(struct node));
    new_node -> vertex = v;
    new_node -> next = NULL;
    return new_node;
}
struct graph * create_graph(int vertices) {
    struct graph * new_graph = (struct graph * ) malloc(sizeof(struct graph));
    new_graph -> num_vertices = vertices;
    new_graph -> adj_list = (struct node ** ) malloc(vertices * sizeof(struct node * ));
    int i;
    for (i = 0; i < vertices; i++) {
        new_graph -> adj_list[i] = NULL;
    }
    return new_graph;
}
void add_edge(struct graph * g, int src, int dest) {
    struct node * new_node = create_node(dest);
    new_node -> next = g -> adj_list[src];
    g -> adj_list[src] = new_node;
    new_node = create_node(src);
    new_node -> next = g -> adj_list[dest];
    g -> adj_list[dest] = new_node;
}
void print_graph(struct graph * g) {
    int i;
    printf("\n");
    for (i = 0; i < g -> num_vertices; i++) {
        struct node * temp = g -> adj_list[i];
        printf("Vertex %d: ", i);
        while (temp) {
            printf("%d -> ", temp -> vertex);
            temp = temp -> next;
        }
        printf("NULL\n");
    }
}
int main() {
    int vertice, srcVertex, destVertex, i;
    printf("Name :Rakesh S. Yadav\n Roll no: 2029\n");
    printf("*=*=* Graph Traversal *=*=*\n\nEnter Number of Vertices: ");
    scanf("%d", & vertice);
    struct graph * g = create_graph(vertice);
    printf("\nEnter Data For Edges: \n");
    for (i = 0; i < vertice; i++) {
        printf("\nEnter Source Vertex: ");
        scanf("%d", & srcVertex);
        printf("Enter Destination Vertex: ");
        scanf("%d", & destVertex);
        add_edge(g, srcVertex, destVertex);
    }
    print_graph(g);
}