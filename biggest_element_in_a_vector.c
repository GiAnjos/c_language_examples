#include <stdio.h>
//Find the biggest element in a vector
int main()
{
	int vet[]={1,2,3,4,5};
	int i, maior=vet[0], menor=vet[0];
	
	for(i=0;i<5;i++)
	{
		if(maior<vet[i])
		{
			maior=vet[i];
		}
	}
	
	printf("Maior numero: %d\n",maior);
	
	for(i=0;i<5;i++)
	{
		if(menor>vet[i])
		{
			menor=vet[i];
		}
	}

	printf("Menor numero: %d\n",menor);
}
