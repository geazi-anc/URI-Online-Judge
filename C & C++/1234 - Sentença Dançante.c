#include <stdio.h>

int main ()
{
	int i,verifica=1;
char exp[51];



while(gets(exp)&&exp!=EOF){

fflush(stdin);
verifica=1;

for(i=0;i<strlen(exp);i++){
exp[i]=tolower(exp[i]);
	
if(exp[i] >=97 && exp[i] <=122 && verifica==1){
	exp[i]-=32;
	verifica=0;
}//if

else if(exp[i] >=97 && exp[i] <=122 && verifica==0)
verifica=1;
}//for
puts(exp);
}//while
return 0;
}	
