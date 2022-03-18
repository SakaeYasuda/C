#include <stdio.h>

#include <ctype.h>

 

void Ler (int *n1, int *n2,int *n3);

void Ordenar (int *menor, int *meio, int *maior);

int    Par (int num);

 

int main (void) {

            int    num1, num2, num3, par;

            char opcao;

           

            do {   

                        Ler (&num1, &num2, &num3); 

                        Ordenar (&num1, &num2, &num3);

                        par = Par(num3);

 

                        if (par) {

                                    printf ("Os numeros ordenados sao: %d %d %d (par)\n", num1, num2, num3);

                        } else {

                                    printf ("Os numeros ordenados sao: %d %d %d (impar)\n", num1, num2, num3);         

                        }

                       

                        printf ("Deseja continuar S/N: \n");

                        fflush (stdin);

                        scanf ("%c", &opcao);

                        opcao = toupper(opcao);

            } while (opcao!='N');

 

            return 0;      

}

 

void Ler (int *n1, int *n2, int *n3)

{

            printf ("Digite tres numeros inteiros: ");

            scanf ("%d %d %d", n1, n2, n3);          

}

 

void Ordenar (int* menor, int* meio, int* maior)

{

            int n1 = *menor,

            n2 = *meio,

            n3 = *maior;    

 
//n1 sendo o maior.
            if (n1 >= n2 && n1 >= n3) {

                                    *maior = n1;

                                    if (n2 < n3) {

                                                *menor = n2;

                                                *meio = n3;

                                    } else {

                                                *menor = n3;

                                                *meio = n2;

                                    }

                       
//n2 sendo o maior.
            } else if (n2 >= n1 && n2 >= n3) {

                                    *maior = n2;

                                    if (n1 < n3) {

                                               *menor = n1;

                                               *meio = n3;

                                    } else {

                                               *menor = n3;

                                               *meio = n1;

                                    }


//n3 sendo o maior.
            } else if (n3 >= n1 && n3 >= n2) {

                                    *maior = n3;

                                    if (n2 < n1) {

                                                *menor = n2;

                                                *meio = n1;

                                    } else  {

                                                *menor = n1;

                                                *meio = n2;

                                    }

            }

}

 

int Par (int num) {

            int resposta;

 
 
            if (num % 2 == 0) {


                        resposta = 1;  // verdadeiro demonstra par.

            } else {


                        resposta = 0;  // falso demonstra impar.

            }

            return resposta;
}
