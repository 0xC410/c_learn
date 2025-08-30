#include<stdio.h>

const int num1 = 10;
const int num2 = 2;

int soma  = num1 + num2;
int sub   = num1 - num2;
int mult  = num1 * num2;
int mod   = num1 % num2;
float div = (float)num1 / (float)num2;

int eq = num1 == num2;
int ne = num1 != num2;
int gt = num1 >  num2;
int lt = num1 <  num2;
int ge = num1 >= num2;
int le = num1 <= num2;

int main() {
	// Operadores Aritméticos
	printf("=== Operadores Aritméticos ===\n");
	printf("Soma............:%d + %d = %d\n", num1, num2, soma);
	printf("Subtração.......: %d - %d = %d\n", num1, num2, sub);
	printf("Multiplicação...: %d * %d = %d\n", num1, num2, mult);
	printf("Divisão.........:%d / %d = %f\n", num1, num2, div);
	printf("Modulo..........: %d %% %d = %d\n", num1, num2, mod);
	printf("\n");

	// Operadores Relacionais
	printf("=== Operadores Relacionais ===\n");
	printf("Igual...........: %d =  %d (%d)\n", num1, num2, eq);
	printf("Diferente.......: %d != %d (%d)\n", num1, num2, ne);
	printf("Maior que.......: %d >  %d (%d)\n", num1, num2, gt);
	printf("Menor que.......: %d <  %d (%d)\n", num1, num2, lt);
	printf("Maior ou igual..: %d >= %d (%d)\n", num1, num2, ge);
	printf("Menor ou igual..: %d <= %d (%d)\n", num1, num2, le);
	printf("\n");

	// Operadores Lógicos
	printf("=== Operadores Lógicos ===\n");
	printf("| x | y | x && y | x || y | !x | !y |\n");
	printf("=====================================\n");
	printf("| 1 | 1 |   1    |   1    | 0  | 0  |\n");
	printf("| 1 | 0 |   0    |   1    | 0  | 1  |\n");
	printf("| 0 | 1 |   0    |   1    | 1  | 0  |\n");
	printf("| 0 | 0 |   0    |   0    | 1  | 1  |\n");
	printf("=====================================\n");
	printf("\n");
	return 0;
}
