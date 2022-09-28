#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//swap (troca valores de duas posições)
void swap(int *a, int *b){     //recebe as posições dos valores a trocar
    int troca;
    troca = *a;                //troca os valores (derreferecia o endereço)
    *a = *b;
    *b = troca;
}

// selection sort duplo sentido de Lakra e Divya
void DeSelSort(int arr[],int n) {
    int smallIndex,largeIndex;      //indices minimo e maximo
    int leftPass=0,rightPass=n-1;   //posições no loop
    int temp;

    while (leftPass<=rightPass) {
        smallIndex=leftPass;
        largeIndex=rightPass;
        //Loop da esquerda para a direita
        for (int i=leftPass+1;i<rightPass;i++) {
            if (arr[i]<arr[smallIndex]){        //sinal crescente/decrescente-inverter
                smallIndex=i;
            }
        }
        if (smallIndex!=leftPass) {
            swap(&arr[leftPass],&arr[smallIndex]);
        }
        //loop da direita para esquerda
        for (int j=rightPass-1;j>leftPass;j--){
            if(arr[j]>arr[largeIndex]) {        //sinal crescente/decrescente-inverter
                largeIndex=j;
            }
        }
        if(largeIndex!=rightPass){
            swap(&arr[rightPass],&arr[largeIndex]);
        }
        leftPass++;
        rightPass--;
    }
}

int main() {
    FILE *arq;
    char Linha[200];    //vetor tempórario para ler uma linha por vez
    char *result;       //marcador para indicar o sucesso da leitura da linha
    int vet[20000];     //vetor para conter os numeros lidos
    int t = 0, pos = 0;
    char *token;

    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("vetor1.txt", "r");
    if (arq == NULL) { // Se houve erro na abertura, sai do programa.
        printf("Problemas na abertura do arquivo\n");
        return 0;
    }
    // lê uma linha do arquivo até o final, uma linha por vez
    while (!feof(arq)) {
        //Lê uma linha (inclusive com o '\n')
        //cada linha contém 10 valores separados por virgula
        result = fgets(Linha, 200, arq);

        // separa a string lida em palavras com os valores
        if (result) {
            token = strtok (Linha,","); //lê até a primeira virgula
            vet[pos]=atoi(token);       //guarda o primeiro valor convertido no vetor
            while (token != NULL) {
                pos++;
                token = strtok (NULL, ","); //lê até a próxima virgula a partir de onde terminou
                vet[pos] = atoi(token);     //guarda o valor convertido em numero no vetor
            }
            pos--; //por conta do '/n' lido no final da linha
        }
    }
    fclose(arq);
    //fim da leitura do arquivo

    //imprime o vetor original
    printf("Valores lidos: %d",pos);
    printf("\nVetor original:\n");
    for (int i=0; i< (sizeof(vet)/sizeof(int)); i++) {
        printf("%d\t", vet[i]);
    }

    //ordenação
    DeSelSort(vet, 20000);

    //imprime o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (int i=0; i< (sizeof(vet)/sizeof(int)); i++) {
        printf("%d\t", vet[i]);
    }
    return 0;
}
