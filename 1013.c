/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 29/04/2026
Objetivo    : Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
Aprendizado : Uso de bibliotecas, Scanf, % e &.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, x, Aux;
	int maior;

	scanf("%i %i %i", &a, &b, &x);
	Aux=(a+b+abs(a-b))/2;
	maior=(Aux+x+abs(Aux- x))/2;
	
	printf("%i eh o maior\n", maior);
	
	return 0;
}
