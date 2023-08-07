//Nome:Gabriel Mansano Pires RA:790951

#include <stdio.h>
#include <stdlib.h>
#define MAX_M 100
#define MAX_N 20

typedef struct {
    int to;
    float d;
    
} no;

no g[MAX_M][MAX_M + MAX_N];
no g2[MAX_M][MAX_M + MAX_N];


float d[MAX_M];
int visitado[MAX_M];

float dijkstra(int inicio, int fim, int M, no g[][MAX_M + MAX_N]) {
    int predecessor[MAX_M];

    // Inicializar as distâncias, flags de visitados e vetor predecessor
    for (int i = 0; i < M; i++) {
        d[i] = 2147483647;
        visitado[i] = 0;
        predecessor[i] = -1;
    }
    d[inicio] = 0;

    // Executar o algoritmo de Dijkstra
    for (int i = 0; i < M; i++) {
        int u = -1;
        float min_d = 2147483647;
        for (int j = 0; j < M; j++) {
            if (!visitado[j] && d[j] < min_d) {
                u = j;
                min_d = d[j];
            }
        }
        if (u == -1) break;
        visitado[u] = 1;

        for (int v = 0; v < M + MAX_N; v++) {
            if (g[u][v].d > 0 && d[u] + g[u][v].d < d[v]) {
                d[v] = d[u] + g[u][v].d;
                predecessor[v] = u;
            }
        }
    }

    // Imprimir o caminho mínimo
    printf("%d", fim);
    int p = predecessor[fim];
    while (p != -1) {
        printf(" -> %d", p);
        p = predecessor[p];
    }
    printf("\n");

    // Retornar o resultado da consulta
    return (d[fim]);
}
int main() {
    int M, E, N, C;
    
    scanf("%d %d %d %d", &M, &E, &N, &C);
    // Le as informações sobre as arestas do grafo

    //Add tubulações normais nas duas direções pro jogador e pro impostor
    for (int i = 0; i < E; i++) {
        int U, V;
        float D;
        scanf("%d %d %f", &U, &V, &D);

        g[U][V].to = V;
        g[U][V].d = D;
        g[V][U].to = U;
        g[V][U].d = D;
        //grafo do jogador
        g2[U][V].to = V;
        g2[U][V].d = D;
        g2[V][U].to = U;
        g2[V][U].d = D;
        E=E;
    }

    // Add as tubulações nas duas direções só pro impostor
    for (int i = 0; i < N; i++) {
        int U, V;
        scanf("%d %d", &U, &V);
        g[U][V].to = V;
        g[U][V].d = 1.0;
        g[V][U].to = U;
        g[V][U].d = 1.0;
        N=N;
    }

    // Le as consultas
    for (int i = 0; i < C; i++) {
        int inicio;
        C=C;
        scanf("%d", &inicio);
        M=M;
        float impostor = dijkstra(inicio, 0, M,g);//calcula a distancia do impostor 
        float jogador = dijkstra(inicio, 0, M,g2);//calcula a distancia do jogador
        
        if(impostor>=jogador)
            printf("victory\n");
        else{
            printf("defeat\n");
        }
    }
    return 0;
}

