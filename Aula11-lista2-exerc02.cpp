#include<stdio.h>  //biblioteca para usar a fun��o printf() e scanf()
#include<stdlib.h> //biblioteca para usar a fun��o system()
#include<locale.h> //biblioteca para fun��o set_locale ()
main()
{  //ALGORITMO 
   setlocale(LC_ALL,"Portuguese");
   system ("color 1E");
   int a, num, quadrado;
   printf ("informe o n�mero: ");
   scanf ("%d",&a);
   quadrado = a * a;
   printf ("a ao quadrado= %d\n\n", quadrado);
    system("PAUSE"); //Fun��o para pausar o programa
}  //FIM_ALGORITMO
