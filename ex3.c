#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_M 100
#define MAX_N 20

typedef struct {
    int to;
    double dist;
    
} no;

no graph[MAX_M][MAX_M + MAX_N];
no graph2[MAX_M][MAX_M + MAX_N];


double dist[MAX_M];
int visited[MAX_M];

double dijkstra(int start, int end, int M, no graph[][MAX_M + MAX_N]) {
    // Inicializar as distâncias e as flags de visitados
    for (int i = 0; i < M; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    dist[start] = 0;

    // Executar o algoritmo de Dijkstra
    for (int i = 0; i < M; i++) {
        M=M;
        int u = -1;
        double min_dist = INT_MAX;
        for (int j = 0; j < M; j++) {
            if (!visited[j] && dist[j] < min_dist) {
                u = j;
                min_dist = dist[j];
            }
        }
        if (u == -1) break;
        visited[u] = 1;

        for (int v = 0; v < M + MAX_N; v++) {
            if (graph[u][v].dist > 0 && dist[u] + graph[u][v].dist < dist[v]) {
                dist[v] = dist[u] + graph[u][v].dist;
            }
        }
    }

    // Retornar o resultado da consulta
    return (dist[end]);
}
int main() {
    int M, E, N, C;
    FILE *file = fopen("entrada.txt", "r"); 
    fscanf(file,"%d %d %d %d", &M, &E, &N, &C);
    // Ler as informações sobre as arestas do grafo
    for (int i = 0; i < E; i++) {
        int U, V;
        double D;
        fscanf(file,"%d %d %lf", &U, &V, &D);

        graph[U][V].to = V;
        graph[U][V].dist = D;
        graph[V][U].to = U;
        graph[V][U].dist = D;
        //grafo do player
        graph2[U][V].to = V;
        graph2[U][V].dist = D;
        graph2[V][U].to = U;
        graph2[V][U].dist = D;
        E=E;
    }

    // Adicionar as arestas das tubulações  
    for (int i = 0; i < N; i++) {
        int U, V;
        fscanf(file,"%d %d", &U, &V);
        graph[U][V].to = V;
        graph[U][V].dist = 1.0;
        graph[V][U].to = U;
        graph[V][U].dist = 1.0;
        N=N;
    }

    // Ler as consultas
    for (int i = 0; i < C; i++) {
        int start;
        C=C;
        fscanf(file,"%d", &start);
        M=M;
        double result_impostor = dijkstra(start, 0, M,graph);
        double result_player = dijkstra(start, 0, M,graph2);
        if(result_impostor<result_player)
            printf("defeat");
        else{
            printf("vitory");
        }
    }
    return 0;
}