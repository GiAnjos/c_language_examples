//Replace the pointers 
#include <stdio.h>
#include <stdlib.h>

//posicao do menor valor
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

//swap two values
void swap(int *a, int *b){     //receive the position os values to swap
    int troca;
    troca = *a;                //swap the values
    *a = *b;
    *b = troca;
}
//selection sort
int selection(int v[], int n){
    int i, j, menor, troca, t = 0;
    for (i=0; i < n-1; i++){
        //find the minimu value of the vector
        menor = indiceMenor(v, n, i);
        if (i != menor) {
            swap(&v[i], &v[menor]);
            t++;
        }
    }
    return t;
}


int main() {
    int vet[]={100, 2, 5, 7, 3, 150, 175, 42, 56, 71, 64, 82, 0, -220, 45, 30, 23, 11, 8};
    int tam = 19;
    int trocas;

    //print the current vector
    for (int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // sort
    trocas = selection(vet, tam);

    //print the ordered vector
    for (int i=0; i<tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\nTrocas: %d", trocas);
    printf("\n");
}
