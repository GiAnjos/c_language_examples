#include <stdio.h>
#include <math.h>

//Find the previous fibonacci number 
int previousFibonacci(int n){
    double a = n / ((1 + sqrt(5)) / 2.0);
    return round(a);
}

//check if the number typed is fibonacci, if not it returns the closest number
int findFibonacci(int n){
	int x;
	while(sqrt(5 * (n * n) + 4) != (int)sqrt(5 * (n * n) + 4)){
		n--;
	}
	return n;
}

int main(){
	int range_i, range_f;
	int fibonacci_i, fibonacci_f;
	int n, aux, f, sum = 0;
	
	printf("Insira o valor inicial: ");
	scanf("%d", &range_i);

	printf("Insira o valor final: ");
	scanf("%d", &range_f);
	
	printf("Sequencia Fibonacci entre %d e %d:\n", range_i, range_f);
		
	fibonacci_i = findFibonacci(range_i);
	fibonacci_f = previousFibonacci(fibonacci_i);
	
	if(fibonacci_i == range_i)
		n = fibonacci_i; 
	else
	n = fibonacci_i + fibonacci_f; //find to closest fibonacci
	
	while(n <= range_f){
		if(n <= range_f && n >= range_i){
			if (n == 1)
				printf("%d\n%d\n", n, n);
			else
				printf("%d\n", n);
		}	
		n = n + previousFibonacci(n);
	}
}
