#include <stdio.h>
#include <math.h>

void modulo(int v[2][2], int n)
{
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if( v[i][j] < 0)
			{
				v[i][j] = v[i][j] * -1;
			}

			printf("\n %d ", v[i][j]);
		}
	}
}

int main()
{
	int matriz[2][2]={{1,-2},{-3,7}};
	int i,j;
	
	printf("\n Matriz Original: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n %d", matriz[i][j]);
		}
	}
	
	printf("\n Matrix with no negatives: ");
	modulo(matriz,2);
	
}
