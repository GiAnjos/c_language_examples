#include <stdio.h>

//Show the original form of a vector and its inverse
int main()
{
	int i,j,aux;
	int vet[]={1,2,3,4,5};
	
	printf(" Vetor original: ");
	for (i=0;i<5;i++)
	{
		printf("\n %d",vet[i]);
	}
	
	j=5-1;
	i=0;
	
	while(i<j)
	{
		aux=vet[i];
		vet[i]=vet[j];
		vet[j]=aux;
		j--;
		i++;
	}
	
	printf("\n Vetor invertido: ");
	for (i=0;i<5;i++)
		{
		printf("\n %d",vet[i]);
		}

}
