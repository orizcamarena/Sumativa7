#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int numeros[10];

     printf("\n\t\tEvaluacion  Sumativa #7 (Dado 10 numeros cual es el mayor)");

	for (int i = 0; i < 10; ++i)
	{
		printf("\n  Introduzca el %d numero: ", i + 1);    
		scanf("%d", &numeros[i]);
        
	}

	int numeroMayor = numeros[0];

	for (int indice = 1; indice < 10; ++indice)
	{
		int numeroActual = numeros[indice];
		if (numeroActual > numeroMayor) {		
			
			numeroMayor = numeroActual;
		}
	}
	printf(" \n\n  De los 10 numeros que proporcionaste, el mayor es el %d\n", numeroMayor);
	return 0;
}