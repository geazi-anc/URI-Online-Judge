#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aloca(char **p,int tamanho);
void recebe(char **p);

int main ()
{
char *ptr=NULL;

recebe(&ptr);//passando o endereço do ponteiro.
printf("%s\n",ptr);//apenas exibindo a string.

getch ();
return 0;
}	

void aloca(char **p,int tamanho)
{
	
	if((*p=(char*)realloc(*p,tamanho*sizeof(char)))==NULL)
	{
		system("cls");
	printf("\t\aERRO DE MEMORIA...");;
	exit(1);
	}
}

void recebe(char **p)
{
	int cont=0;
char aux[20];

	printf("\tDigite uma frase:");
	gets(aux);//primeiro pega a string num vetor auxiliar.
fflush(stdin)	;

tamanho=strlen(aux);

aloca(p,tamanho+1);//aqui não coloca o endereço do ponteiro, apenas o ponteiro.
strcpy(*p,aux);//copiando a string aux para o ponteiro que estará dentro da main.
}
