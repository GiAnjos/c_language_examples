#include <stdio.h>

int particiona(char *v, int inicio, int final )
{
	
	int esq,dir,pivo;
	char aux;
	esq=inicio;
	dir=final;
	pivo=v[inicio];
	
	while(esq<dir){
		while(v[esq]<=pivo)
		{
			esq++;
		}
		while(v[dir]>pivo)
		{
			dir--;
		}
		if(esq<dir)
		{
			aux=v[esq];
			v[esq]=v[dir];
			v[dir]=aux;
		}
	}
	
	v[inicio]=v[dir];
	v[dir]=pivo;
	return dir;
}

void quicksort(char *v, int inicio, int fim)
{
	int i;
	int pivo;
	if(fim>inicio)
	{
		pivo = particiona(v,inicio,fim);
		quicksort(v,inicio,pivo-1);
		quicksort(v,pivo+1,fim);
	}
	

}

int main()
{
	
	char palavra[4]={'a','g','u','a'};
	int i;
	
	printf("Palavra em sua forma original: ");
	for(i=0;i<4;i++)
	{
		printf("%c",palavra[i]);
	}
	quicksort(palavra, 0, 3);
		
	printf("\nPalavra ordenada: ");
	for(i=0;i<4;i++)
	{
		printf("%c",palavra[i]);
	}

	
}
