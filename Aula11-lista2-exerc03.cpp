#include<stdio.h>  //biblioteca para fun��o printf() e scanf()
#include<stdlib.h> //biblioteca para fun��o system()
#include<locale.h> //biblioteca para fun��o set_locale()
main()
{  //ALGORITMO  DECLARE SAL_ATUAL, NOVO_SAL NUMERICO
   setlocale(LC_ALL,"Portuguese");
   system("color 8E");
   int a,b, maior, menor;
   printf ("informe o primeiro numero: ");
   scanf ("%d",&a);
   printf ("Informe o segundo numero: ");
   scanf ("%d",&b);
   if (a==b)
   printf ("numeros iguais ");
          else
          { 
              if (a > b)
             { 
                printf ("maior = %d\n",a);
                printf ("menor = %d\n",b);
             }
             else 
             { 
                printf ("maior = %d\n",b);
                printf ("menor = %d\n",a);
             }
          }
                 system("PAUSE"); //Fun��o para pausar o programa
}  //FIM_ALGORITMO
