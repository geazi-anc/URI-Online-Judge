#include <stdio.h>

void primeira(char *exp);
void segunda(char *exp);
void terceira(char *exp);

int main ()
{
	int quantidade=0,i=0;
char exp[1001];

scanf("%i",&quantidade);
fflush(stdin);

for(i=0;i<quantidade;i++){
gets(exp);
fflush(stdin);
primeira(exp);
segunda(exp);
terceira(exp);
puts(exp);
}//for

return 0;

}	

void primeira(char *exp){
	int i;
	
	for(i=0;i<strlen(exp);i++){
if(*(exp+i)>=65 && *(exp+i)<=122)
		*(exp+i)+=3;
		
	}//for
	

}//primeira


void segunda(char *exp){
	int i,j;
	char aux[1001];
	
	strcpy(aux,exp);
	
	for(j=0, i=strlen(exp)-1;i>=0;j++, i--)
*(exp+j)=aux[i];
}//segunda

void terceira(char *exp){
	int i;

	for(i=strlen(exp)/2;i<strlen(exp);i++)
	*(exp+i)-=1;
	
}//terceira
