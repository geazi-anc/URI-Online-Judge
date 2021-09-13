#include <stdio.h>

int main ()
{
char exp[101], aux[101];
int quantidade=0,i=0, j=0,k=0;


	
scanf("%i",&quantidade);
fflush(stdin);


for(i=0;i<quantidade;i++){
	gets(exp);
	//fflush(stdin);
	
	strcpy(aux,exp);
	
for(j=0, k=strlen(exp)/2-1;j<strlen(exp)/2;j++, k--)
	exp[j]=aux[k];
	
	for(j=strlen(exp)/2, k=strlen(exp)-1;j<strlen(exp);j++, k--)
	exp[j]=aux[k];
	
	puts(exp);
}//for
return 0;
}	
