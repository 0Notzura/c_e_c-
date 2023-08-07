#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int k, c;
    double *notas;
} Vaga;

int compare(const void *a, const void *b) {
    double aa = *(double *)a;
    double bb = *(double *)b;
    if (aa < bb) {
        return 1;
    } else if (aa > bb) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n, i, j;
    scanf("%d", &n);
    Vaga vagas[n];
    for (i = 0; i < n; i++) {
        scanf("%d %d", &vagas[i].k, &vagas[i].c);
        vagas[i].notas = (double *)malloc(vagas[i].c * sizeof(double));
        for (j = 0; j < vagas[i].c; j++) {
            scanf("%lf", &vagas[i].notas[j]);
        }
        qsort(vagas[i].notas, vagas[i].c, sizeof(double), compare);
    }
    for (i = 0; i < n; i++) {
        printf("%.2lf\n", vagas[i].notas[vagas[i].k - 1]);
    }
    return 0;
}

