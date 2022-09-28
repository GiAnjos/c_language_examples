#include <stdio.h>

void bubble(char *v, int n)
{
	int i, continua, fim=n;
	char aux;
	do{
		continua=0;
		for(i=0;i<fim-1;i++)
		{
			if(v[i]>v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				continua=i;
			}
		}
		fim--;
	}while(continua !=0);
	
	for(i=0;i<n;i++)
	{
		printf("%c",v[i]);
	}
	
}

int main(){
	
	char palavra[4]={'a','g','u','a'};
	int i;
	
	printf("Palavra em sua forma original: ");
	for(i=0;i<4;i++)
	{
		printf("%c",palavra[i]);
	}
	
	printf("\nPalavra ordenada: ");
	bubble(palavra,4);
	
}
