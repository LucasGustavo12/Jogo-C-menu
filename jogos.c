#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
	void estrelas (){
		int num,cont=0,res,verif=0,i,teste;
		srand (time (NULL));
		num = (rand() % 128)+32; //gerar numero aleatorio
		
	    while(verif == 0){
		cont++;
		printf("Digite um numero: ");
		scanf("%d",&res);
		teste = res-num;
		//printf("%d",teste);
		
		if(teste >= 64 || teste <= -64) {
		printf("*");
		for (i=0; i<1; i++)
			printf("\a");
		}
		else if(teste >= 32 || teste <= -32){
			printf("**");
			for(i=0; i<2; i++){
				printf("\a");
			}
		}
		else if(teste >= 16 || teste <= -16){
			printf("***");
			for (i=0; i<3; i++){
				printf("\a");
			}
		}
		else if (teste >= 8 || teste <= -8){
			printf("****");
			for (i=0; i<4; i++){
				printf("\a");
			}
		}
		else if (teste >=4 || teste <= -4){
			printf("*****");
			for (i=0; i<5; i++){
				printf ("\a");
			}
		}
		else if(teste >= 2 || teste <= -2){
			printf("******");
			for (i=0; i<6; i++){
				printf("\a");
			}
		}
		else if(teste == 1 || teste == -1){
			printf("*******");
			for (i=0; i<7; i++){
			printf("\a");
			}
		}
		else {
			printf("O jogador venceu com %d tentativas",cont);
			verif = 1;
		}
		}

	}
	
	void armadilha (){
	int a = 0;

 int b, inf, sup, n, ac = 0, cont = 0;

srand ( time(NULL) );

b = a + rand() % 100;

printf("Ja pensei no número, Agora e sua vez de adivinhar \n");

do{

printf("Digite o limite inferior \n");

scanf("%d", &inf);

printf("Digite o limite superior \n");

scanf("%d", &sup);

if(inf > sup)

{

 n = inf;

 inf = sup;

 sup = n;

}

cont = cont + 1;

if(b == (inf+1) & b == (sup-1))

{

printf("\nAcertou\n");

ac = ac + 1;

printf("\nO numero que escolhi foi %d", b);

printf("\nVoce precisou de %d tentativas para acertar", cont);

}else{

if(b > inf & b < sup)

{

printf("\nMeu numero esta entre os seus\n");

}

else

{

printf("\nMeu numero nao esta entre os seus\n");  

}
}

}	while (ac == 0);


}

void main()
{ int op=9; // forçar entrada no while
  while (op != 0)
  {
    printf ("\n\nMENU   \n1-Estrelas");
    printf ("\n2-Armadilha");
    printf ("\nDigite opcao ou <0 para sair>:");
    scanf ("%d",&op);
    switch (op)
    {
    	case 0: break;
    	case 1: estrelas(); break;
        case 2: armadilha(); break;
        default: printf ("Opcao Invalida");
    
	}
  }
  }
