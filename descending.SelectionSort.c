//Sort the elements in descending order using SelectionSort
#include <stdio.h>
#include <stdlib.h>

//maximum value position
int indiceMaior(int v[], int n, int i){
    int j;
    int maior = i;

    for (j=i+1; j < n; j++){
        if (v[j] > v[maior]){ // troca sinal para maior/menor
            maior = j;
        }
    }
    return maior;
}


//selection sort
int selection(int v[], int n){
    int i, maior, troca, t = 0;
    for (i=0; i < n-1; i++){
        maior = i;
        // encontra o maior valor no vetor
        maior = indiceMaior(v, n, i);
        if (i != maior) {
            troca = v[i];
            v[i] = v[maior];
            v[maior] = troca;
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
