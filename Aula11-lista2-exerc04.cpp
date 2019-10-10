#include<stdio.h>  //biblioteca para função printf() e scanf()
#include<stdlib.h> //biblioteca para função system()
#include<locale.h> //biblioteca para função set_locale()
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
       printf ("impossível calcular: ");
        else
        {
           vr_dolar = vr/dolar;
           printf ("o valor em dolar = %.2f\n\n", vr_dolar);
        }	
   system("PAUSE"); //Função para pausar o programa
}
     
     
     
     
     
     
