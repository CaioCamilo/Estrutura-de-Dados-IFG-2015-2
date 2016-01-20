
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int **aloca (int i, int j){
	int **p;
	int x;
	p=(int **) malloc(i*sizeof(int*));
	for(x=0; x<j; x++){
		p[x]= (int*) malloc (j*sizeof(int));
	}
	return(p);
}

void insere(int **p, int i, int j){
	int x, y;
	for(x=0; x<i; x++){
		for(y=0; y<j; y++){
			printf("\n Digite os Elementos da Matriz x [%d][%d]: ",x+1,y+1);
			scanf("%d", &p[x][y]);
		}
	}
}

void exibe (int **p, int i, int j) {
	int x,y;
	for(x=0; x<i; x++){
		for(y=0; y<j; y++){
			printf("\n p[%d][%d]=%d",x+1,y+1,p[x][y]);
		}
	}
}
void main (void) {
	int inserir, exibir;
	int a =5;
	int b =5
	;
	int c =100;
	int d =1000;
	int **x;
	x =aloca(a,b);
	insere (x,a,b);
	exibe(x,a,b);

	//y = aloca(c,d);
	//insere (y,c,d);
	//exibe (y,c,d);
	return 0;
}

