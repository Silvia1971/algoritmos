#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf ("Digite um n�mero: ");
	scanf ("%d", &num);
	if (num%2==0)
	printf ("O n�mero � par: ");
		else
		{
			printf ("O n�mero � �mpar: ");
		}
	system ("Pause");	
}

