//Sort the elements in descending order using InsertionSort
#include <stdio.h>
#include <stdlib.h>


int insertion(int v[], int n){
    int i, j, atual, t = 0;
    for (i=1; i < n; i++){
        atual = v[i];
        for ( j=i; (j > 0) && (atual > v[j-1]); j--){ //'atual < v[j-1]' para ordenar crescente
            v[j] = v[j-1];
            t++;
        }
        v[j] = atual;
    }
    return t;
}


int main() {
    int vet[]={100, 2, 5, 7, 3, 150, 175, 42, 56, 71, 64, 82, 0, -220, 45, 30, 23, 11, 8};
    int tam = sizeof(vet)/sizeof(int);
    int trocas;

    //Print the current vector
    for (int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // sort
    trocas = insertion(vet, tam);

    //Print the ordered vector
    for (int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\nTrocas: %d", trocas);
    printf("\n");
}
