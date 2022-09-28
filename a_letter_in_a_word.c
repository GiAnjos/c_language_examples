#include <stdio.h>
#include <string.h>

//Print a letter of a word in the position you want
void printLetra(char palavra[], int index){
	int i;
	
	for(i = 0; i < strlen(palavra); i++){
		if(i == (index - 1))
			printf("The letter in the position you typed is: %c", palavra[i]);
	}
}

int main(){

	char palavra[100];
	int index;
	
	printf("Type a word: ");
	gets(palavra);
	
	printf("Type a value between 1 and %d: ", strlen(palavra));
	scanf("%d", &index);
	
	printLetra(palavra, index);
}
