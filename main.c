#include <stdio.h>
#include <stdlib.h>

const int N=3;

int main(int argc, char** argv) {
    int a[N][N];
    int b[N][N];
    int c[N][N];
    int d[N][N];
    int y, x;
    
    printf("Inserisci i valori della matrice A: \n");
    for (y=0; y<N; y++) {
        for (x=0; x<N; x++) {
            printf("Coordinate (y|x): %d|%d: ", y, x);
            scanf("%d", &a[y][x]);
        }
    }
    printf("\n");
    printf("Inserisci i valori della matrice B: \n");
    for (y=0; y<N; y++) {
        for (x=0; x<N; x++) {
            printf("Coordinate (y|x): %d|%d: ", y, x);
            scanf("%d", &b[y][x]);
        }
    }
    
    for (y=0; y<N; y++) {
        for (x=0; x<N; x++) {
            c[y][x]=a[y][x]+b[y][x];
            d[y][x]=a[y][x]*b[y][x];
        }
    }
    printf("\n");
    printf("Matrice somma C: \n");
    for (y=0; y<N; y++) {
        for (x=0; x<N; x++) {
            printf("%d ", c[y][x]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice prodotto D: \n");
    for (y=0; y<N; y++) {
        for (x=0; x<N; x++) {
            printf("%d ", d[y][x]);
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

