#include<stdio.h>  //biblioteca para usar a fun��o printf() e scanf()
#include<stdlib.h> //biblioteca para usar a fun��o system()
#include<locale.h> //biblioteca para fun��o set_locale ()
#include<math.h>
main()
{  //ALGORITMO 
   setlocale(LC_ALL,"Portuguese");
   system ("color 1E");
   //DECLARE A,B, RESULT NUMERICO 
   float a,b,result;   
   //ESCREVA "DIGITE O PRIMEIRO NUMERO"            
   printf ("informe o 1�.numero: "); 
   //LEIA A
   scanf ("%f",&a);  
   //ESCREVA "Digite o segundo n�mero"
   printf ("Informe o 2�.numero: ");
   //LEIA B
   scanf("%f",&b);
   result = a + b; // RESULT <- A + B
   //ESCREVA "Soma = ", RESULT
   printf("soma = %.2f\n",result);
   result = a - b; // RESULT <- A - B
   //ESCREVA "Subtra��o = ", RESULT
   printf("subtra��o = %.2f\n ",result);
   result = a * b;
   printf("Multiplica��o = %.2f\n",result);
   if (b==0) //SE (B=0)
      //ENT�O ESCREVA "Imposs�vel dividir por zero"
      printf("Imposs�vel dividir por zero!!!\n\n");
   else   //SEN�O
   {  //IN�CIO
        // RESULT <- A / B
        result = a / b;
        //ESCREVA "Divis�o = ", RESULT
        printf("Divis�o = %.2f\n",result);
   }  //FIM   
    result = pow(a,b);
    printf("Potencia��o = %.2f\n",result);         
   system("PAUSE"); //Fun��o para pausar o programa
}  //FIM_ALGORITMO
   
