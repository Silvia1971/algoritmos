#include<stdio.h>  //biblioteca para fun��o printf() e scanf()
#include<stdlib.h> //biblioteca para fun��o system()
#include<locale.h> //biblioteca para fun��o set_locale()
main()
{  //ALGORITMO  DECLARE SAL_ATUAL, NOVO_SAL NUMERICO
   setlocale(LC_ALL,"Portuguese");
   system("color 8E");
   float vr,dolar,vr_dolar;
   printf ("digite um valor para ser convertido em dolar: ");
   scanf ("%f",&vr);
   printf ("digite o valor do dolar corrente: ");
   scanf ("%f",&dolar);
   if (vr<0 || dolar<0)
       printf ("imposs�vel calcular: ");
        else
        {
           vr_dolar = vr/dolar;
           printf ("o valor em dolar = %.2f\n\n", vr_dolar);
        }	
   system("PAUSE"); //Fun��o para pausar o programa
}
     
     
     
     
     
     
