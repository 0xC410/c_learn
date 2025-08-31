#include<stdio.h>

/*
 * Type Name (Parm) {
 * 	...
 * 	return [val];
 * }
 *
 * Declaração vs Definição
 * - Declaração: Informa a existência da função no início do arquivo ou em
 *   um header (.h); Ex: int soma(int, int);
 * - Definição: Implementação do comportamento da função;
 * - Funções devem ser declaradas antes de seu uso ou a definição deve
 *   preceder a chamada no arquivo executado;
 *
 * Particularidades do C:
 * - Não existe high order function;
 * - Parâmetros são passados "by value"; alterações nos parâmetros dentro
 *   da função não afetam as variáveis originais de fora dela (exceto
 *   usando ponteiros);
 * - Todo programa C começa sua execução na função "main";
 */


int soma(int, int);

int main() {
	int num1 = 5;
	int num2 = 3;
	int resultado = soma(num1, num2);

	printf("%d + %d = %d\n", num1, num2, resultado);
	return 0;
}

int soma(int a, int b) {
	return a + b;
}
