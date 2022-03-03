#include <stdio.h>

	void Ler(int*n1,int*n2,int*n3);
	void Par(int num);

	int main(){
   	 	int n1,n2,n3;
   	 	char opcao;

    		do{
	
    			printf("\nDigite tres numeros inteiros: ");
   	 			 scanf("%d %d %d", &n1, &n2, &n3);
   	 			 
   	 			
				 if (n1 <= n2 && n2 <= n3)
    				{
      					printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
    				}
				  		else if (n1 <= n3 && n3 <= n2)
				    {
				      printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
				    }
				  		else if (n2 <= n1 && n1 <= n3)
				    {
				      printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
				    }
				  		else if (n2 <= n3 && n3 <= n1) 
				    {
				      printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
				    }
				  		else if (n3 <= n1 && n1 <= n2) 
				    {
				      printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
				    }
				  		else  
				    {
				      printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
					}
					printf("Deseja continuar s/n: \n");
					fflush(stdin);
        			scanf(" %c", &opcao);
    				}while(opcao=='s','S');		
	
		
	}



