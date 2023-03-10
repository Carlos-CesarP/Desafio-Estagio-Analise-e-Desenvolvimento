#include<stdio.h>
#include<locale.h>

main(){
	int N, I;
	int fib[100];
	
	setlocale(LC_ALL,"portuguese");
	printf("Informe um número inteiro: ");
	scanf("%d", &N);
	
	fib[0] = 0;
	fib[1] = 1;
	for (I = 2; fib[I-1] < N; I++) {
	fib[I] = fib[I-1] + fib[I-2]; 
	}
	
	if(fib[I-1]==N){
		printf("%d pertence à sequência de Fibonacci \n", N);
	}
		else{
			printf("%d não pertence à sequencia de Fibocacci \n",N);
		}
	return 0;
}
