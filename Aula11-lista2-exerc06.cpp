#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
main ()
{
	setlocale (LC_ALL,"Portuguese");
	float hora, qtde, inss, sal_bruto, desc, sal_liq, result;
	printf ("Digite o valor da hora: ");
	scanf ("%f", &hora);
	printf ("Digite a qtde de aulas: ");
	scanf ("%f", &qtde);
	printf ("Digite o percentual do inss: ");
	scanf ("%f", &inss);
	result = sal_bruto = hora * qtde;
	printf ("sal_bruto= %.2f\n\n ", result);
	result = desc = sal_bruto * inss/100;
	printf ("desc= %.2f\n\n ", result);
	result = sal_liq = sal_bruto - desc;
	printf ("sal_liq= %.2f\n\n ", result);
	system ("Pause");
}

