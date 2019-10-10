#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf ("Digite um número: ");
	scanf ("%d", &num);
	if (num%2==0)
	printf ("O número é par: ");
		else
		{
			printf ("O número é ímpar: ");
		}
	system ("Pause");	
}

