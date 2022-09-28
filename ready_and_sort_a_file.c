//ready a file fixing all the spaces and order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//swap
void swap(int *a, int *b){     //receive the positions of the values to swap
    int troca;
    troca = *a;                //swap values
    *a = *b;
    *b = troca;
}

// selection sort - Lakra and Divya
void DeSelSort(int arr[],int n) {
    int smallIndex,largeIndex;      //index munimun and maximum
    int leftPass=0,rightPass=n-1;   //positions in loop
    int temp;

    while (leftPass<=rightPass) {
        smallIndex=leftPass;
        largeIndex=rightPass;
        //Loop from left to right
        for (int i=leftPass+1;i<rightPass;i++) {
            if (arr[i]<arr[smallIndex]){        //ascending/descending invert
                smallIndex=i;
            }
        }
        if (smallIndex!=leftPass) {
            swap(&arr[leftPass],&arr[smallIndex]);
        }
        //loop from right to left
        for (int j=rightPass-1;j>leftPass;j--){
            if(arr[j]>arr[largeIndex]) {        //ascending/descending invert
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
    char Linha[200];    //temporary vector ready the lines one by one
    char *result;       //marker to indicate success
    int vet[20000];     //vector that contains two values
    int t = 0, pos = 0;
    char *token;

    //Open a text to ready
    arq = fopen("vetor1.txt", "r");
    if (arq == NULL) { //If an error occur the program will end
        printf("Fail to open the file\n");
        return 0;
    }
    //Ready the lines of the file one by one
    while (!feof(arq)) {
        //ready a line with \n
        //each line contains 10 values with commas 
        result = fgets(Linha, 200, arq);

        //divide the string in words with values
        if (result) {
            token = strtok (Linha,","); //ready until the first comma
            vet[pos]=atoi(token);       //keep the first converted value 
            while (token != NULL) {
                pos++;
                token = strtok (NULL, ","); //ready the next line
                vet[pos] = atoi(token);     //keep the value converted in number
            }
            pos--; 
        }
    }
    fclose(arq);
    //end readying

    //print the original vector
    printf("Valores lidos: %d",pos);
    printf("\nVetor original:\n");
    for (int i=0; i< (sizeof(vet)/sizeof(int)); i++) {
        printf("%d\t", vet[i]);
    }

    //sort
    DeSelSort(vet, 20000);

    //print the ordered vector
    printf("\nVetor ordenado:\n");
    for (int i=0; i< (sizeof(vet)/sizeof(int)); i++) {
        printf("%d\t", vet[i]);
    }
    return 0;
}
