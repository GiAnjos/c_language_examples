#include <stdio.h>

//transpose of a matrix
void transposta(int v[3][3], int n)
{
	int i,j;
	int a[3][3];
	
	printf("\n transpose of a matrix: ");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=v[j][i];
			printf("\n %d \n",a[i][j]);
		}
	}
}

int main()
{
	int j,i;
	int lucky[3][3]={
					{1,2,8},
					{3,4,2},
					{5,6,8},
					};
					
	transposta(lucky,3);
	
	printf(" Original matrix: ");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n %d \n",lucky[i][j]);	
		}	
	}				
}
