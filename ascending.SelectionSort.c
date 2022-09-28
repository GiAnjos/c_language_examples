//Count how many interations it has and order them in ascending order using SelectionSort
#include <stdio.h>
#include <stdlib.h>

//minimum value position
int indiceMenor(int v[], int n, int i){
    int j;
    int menor = i;

    for (j=i+1; j < n; j++){
        if (v[j] < v[menor]){
            menor = j;
        }
    }
    return menor;
}


//selection sort
int selection(int v[], int n){
    int i, menor, troca, t = 0;
    for (i=0; i < n-1; i++){
        menor = i;
        // encontra o menor valor no vetor
        menor = indiceMenor(v, n, i);
        if (i != menor) {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
            t++;
        }
    }
    return t;
}


int main() {
    int vet[]={100, 2, 5, 7, 3, 150, 175, 42, 56, 71, 64, 82, 0, -220, 45, 30, 23, 11, 8};
    int tam = 19;
    int trocas;

    //Print the current vector
    for (int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // sort
    trocas = selection(vet, tam);

    //Print the ordered vector
    for (int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\nTrocas: %d", trocas);
    printf("\n");
}
