#include <stdio.h>

int main(){
	double valor;
	double juros;
	double meses;
	printf("Digite o valor  R$");
	scanf("%lf", &valor);
	printf("Digite o juros a ser aplicado em porcentagem ");
	scanf("%lf", &juros);
	printf("Digite o tempo em meses ");
	scanf("%lf", &meses);

	double resultado;
	resultado = valor+(valor * (juros/100) * meses);
	printf("O valor final para ser devolvido e R$%lf", resultado);

	return 0;
}
