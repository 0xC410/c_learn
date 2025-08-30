#include<stdio.h>

/*
 * if (condição1) {
 * ...
 * } else if (condição2) {
 * ...
 * } else {
 * ...
 * }
 *
 *
 * switch (variavel) {
 * 	case valor1:
 *      	Código para o valor1;
 *      	break;
 *	case valor2:
 *		Código para o valor2;
 *		break;
 *	default:
 *		Código padrão;
 *		break;
 * }
 *
 * resultado = (condição) ? valor_se_verdadeiro : valor_se_falso;
 */

int main() {
	int val1 = 1;
	int val2 = 0;
	int val3 = 8;

	if (val1 == 1) {
		printf("O valor de val1 é igual a 1.\n");
	} else if (val1 == 0) {
		printf("O valor de val1 é igual a 0.\n");
	} else {
		printf("O valor de val1 não é 1 ou 0.\n");
	}

	switch (val3) {
		case 1:
			printf("O valor de val3 é igual a 1.\n");
			break;
		case 0:
		       	printf("O valor de val3 é igual a 0.\n");
			break;
		case 8:
			printf("O valor de val3 é igual a 8.\n");
			break;
		default:
			printf("Não foi determinado o valor de val3.\n");
	}
	return 0;
}
