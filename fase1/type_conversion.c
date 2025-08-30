#include<stdio.h>

int main() {
	float f1 = 9.5;
	int i; 

	// Conversão implícita de tipo (perda de informação)
	i = f1;

	// Conversão explícita de tipo
	float f2 = (int)i; 
	
	printf("f1 : %f\n", f1);
	printf("i  : %d\n", i);
	printf("f2 : %f\n", f2);
	return 0;
}

/*
 * Conversão implícita (Automática):
 * 	- Quando atribui o valor de um tipo a uma variável de outro tipo;
 * 	- Quando operadores são aplicados a tipos diferentes;
 * 	- Quando argumentos são passados para funções;
 *
 * Conversão explícita (Type casting):
 * 	- Realizada pelo programador;
 *
 * Hierarquia de conversões automáticas:
 * 	- [ char -> int -> long -> float -> double ]
 * 	- Quando operações envolvem tipos diferentes os valores são promovidos
 * 	  para o tipo de maior procedência.
 */
