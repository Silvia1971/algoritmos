#include<stdio.h>  //biblioteca para usar a função printf() e scanf()
#include<stdlib.h> //biblioteca para usar a função system()
#include<locale.h> //biblioteca para função set_locale ()
#include<math.h>
main()
{  //ALGORITMO 
   setlocale(LC_ALL,"Portuguese");
   system ("color 1E");
   //DECLARE A,B, RESULT NUMERICO 
   float a,b,result;   
   //ESCREVA "DIGITE O PRIMEIRO NUMERO"            
   printf ("informe o 1º.numero: "); 
   //LEIA A
   scanf ("%f",&a);  
   //ESCREVA "Digite o segundo número"
   printf ("Informe o 2º.numero: ");
   //LEIA B
   scanf("%f",&b);
   result = a + b; // RESULT <- A + B
   //ESCREVA "Soma = ", RESULT
   printf("soma = %.2f\n",result);
   result = a - b; // RESULT <- A - B
   //ESCREVA "Subtração = ", RESULT
   printf("subtração = %.2f\n ",result);
   result = a * b;
   printf("Multiplicação = %.2f\n",result);
   if (b==0) //SE (B=0)
      //ENTÃO ESCREVA "Impossível dividir por zero"
      printf("Impossível dividir por zero!!!\n\n");
   else   //SENÃO
   {  //INÍCIO
        // RESULT <- A / B
        result = a / b;
        //ESCREVA "Divisão = ", RESULT
        printf("Divisão = %.2f\n",result);
   }  //FIM   
    result = pow(a,b);
    printf("Potenciação = %.2f\n",result);         
   system("PAUSE"); //Função para pausar o programa
}  //FIM_ALGORITMO
   
