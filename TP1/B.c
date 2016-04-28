#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	int V, N, i, j, k, soma, aux;
	int flag;

	clock_t begin, end;
	double time_spent;

	N = atoi(argv[1]);
	V = atoi(argv[2]);

	begin = clock();

	int *sequencia = (int*) malloc(N*sizeof(int));

	for(i=1; i<N; i++) {
		soma = 0;
		for(j=i; j<N; j++) {
			soma += sequencia[j];
			/*if (soma == V) {	
				printf("SUBSEQUENCIA NA POSICAO %d\n", i+1);
				flag = 1;
				break;
			}*/
		}
	/* if (flag == 0)
		printf("SUBSEQUENCIA NAO ENCONTRADA\n");*/
	}

	end = clock();

	time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
	printf("%f\n", time_spent);
}