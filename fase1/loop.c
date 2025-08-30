#include<stdio.h>

/*
 * for (inicialização; condição; incremento) {
 * 	...
 * }
 *
 * while (condição) {
 * 	...
 * }
 *
 * do {
 * 	...
 * } while (condição);
 */

int main() {
	for (int i = 0; i < 5; i++) {
		printf("For: %d\n", i);
	}

	int contador = 0;

	while (contador < 5) {
		printf("While: %d\n", contador);
		contador++;
	}

	contador = 0;

	do {
		printf("Do While: %d\n", contador);
		contador++;
	} while (contador < 5);

	return 0;
}
