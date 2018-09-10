#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int d;
void menu();
void funcoes_do_menu();
void primo();
void varios_primos();
void fatorial();
void potencia();
void raiz();
void bissexto();
void media();
void media_ponderada();
void hexadecimal();
int main(){
	menu();
	return 0;
}
void menu(){
	int a;
	do{
		funcoes_do_menu();
		scanf("%d", &a);
		if(a==1){
			printf("numero digitado %d\n", a);
			fatorial();
			}
		else if(a==2){
			printf("numero digitado %d\n", a);
			primo();
			}
		else if(a==3){
			printf("numero digitado %d\n", a);
			varios_primos();
			}
		else if(a==4){
			printf("numero digitado %d\n", a);
			potencia();
			}
		else if(a==5){
			printf("numero digitado %d\n", a);
			raiz();
			}
		else if(a==6){
			printf("numero digitado %d\n", a);
			bissexto();
			}
		else if(a==7){
			printf("numero digitado %d\n", a);
			media();
			}
		else if(a==8){
			printf("numero digitado %d\n", a);
			media_ponderada();
			}
		else if(a==9){
			printf("numero digitado %d\n", a);
			hexadecimal();
			}						
		else if(a==0){
			printf("numero digitado %d\n", a);
			printf("Menu finalizado, obrigado.");
			return;
			}
		else{
			printf("numero digitado %d\n", a);
			printf("numero invalido,tente novamente\n");
			}		
	}while(a != 0);	
}
void fatorial(){
	int b, c = 1;
	printf("informe um numero inteiro positivo maior que 0 para ser informado o fatorial dele:\n");
	scanf("%d", &b);
	if(b > 0){
		for(;b >= 2;b--){
			c*=b;
		}
		printf("o resultado e: %d\n", c);
		}
	else{
		printf("o numero digitado deve ser positivo maior que 0\n");
	}	
}
void primo(){
	int e, cont= 0;
	printf("informe um numero inteiro positivo para saber se ele e primo:\n");
	scanf("%d", &d);
	if(d>0){
		for(e=1;e<=d;e++){
			if(d%e==0){
				cont++;
			}
		}
		if(cont==2){
			printf("e primo\n");
		}
		else{
			printf("nao e primo\n");
			}
	}
	else if(d==0){
		printf("nao e primo\n");
		}
	else{
		printf("o numero digitado deve ser positivo\n");
	}
}
void varios_primos(){
	printf("informe numeros inteiros positivos para saber se sao primos(digite um numero negativo para voltar ao menu)\n");
	do{
		primo();
	}while(d>=0);
}
void potencia(){
	float f;
	int g;
	puts("informe a base e o expoente respectivamente:");
	scanf("%f%d", &f, &g);
	printf("resultado:%e\n", pow(f,g));
	
}
void raiz(){
	float h;
	int i;
	puts("informe o radicando e o indice respectivamente:");
	scanf("%f%d",&h,&i);
	printf("resultado:%e\n",pow(h,(float)1/i));
}
void bissexto(){
	int j;
	puts("informe um ano para saber se ele e bissexto");
	scanf("%d", &j);
	if (j%4==0){
		puts("e bissexto");
	}
	else{
		puts("nao e bissexto");
	}
}
void media(){
	float k,l;
	puts("infome o valor de duas notas(de 0 a 10):");
	scanf("%f%f", &k, &l);
	if((k>=0&&k<=10)&&(l>=0&&l<=10)){
		printf("media:%f\n",(k+l)/2);
	}
	else{
		puts("valor da nota invalido");
	}
}
void media_ponderada(){
	int m,n,o;
	float p;
	puts("informe o valor de 3 notas(de 0 a 100):");
	scanf("%d%d%d", &m, &n, &o);
	p=(m+n+2*o)/(float)4;
	if((m>=0&&m<=100)&&(n>=0&&n<=100)&&(o>=0&&o<=100)){
		printf("media ponderada:%f\n",p);
		if(p>=60){
			puts("aprovado");
		}
		else{
			puts("reprovado");
		}
	}
	else{
		puts("valor da nota invalido");
	}	
}
void hexadecimal(){
	int q;
	puts("informe o numero de sua matricula para ela ser mostrada em hexadecimal:");
	scanf("%d",&q);
	printf("Valor em hexadecimal:%X\n", q);
}
void funcoes_do_menu(){
	printf("\nEsse e o menu,digite de 1 a 9 para escolher a funcao,digite 0 para sair:\n1-Fatorial\n2-Primo\n3-Varios primos\n4-Potenciacao\n5-Radiciacao\n6-Bissexto\n7-Media\n8-Media ponderada\n9-Hexadecimal\n");
}
