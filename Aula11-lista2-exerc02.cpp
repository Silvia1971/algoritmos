#include<stdio.h>  //biblioteca para usar a função printf() e scanf()
#include<stdlib.h> //biblioteca para usar a função system()
#include<locale.h> //biblioteca para função set_locale ()
main()
{  //ALGORITMO 
   setlocale(LC_ALL,"Portuguese");
   system ("color 1E");
   int a, num, quadrado;
   printf ("informe o número: ");
   scanf ("%d",&a);
   quadrado = a * a;
   printf ("a ao quadrado= %d\n\n", quadrado);
    system("PAUSE"); //Função para pausar o programa
}  //FIM_ALGORITMO
