	#include <stdio.h>
		#include <stdlib.h>
#include <string.h>
void conta(int sapo,char s[]);
		int main ()
		{
		int sapo,cano,r=0;

while(scanf("%i %i",&sapo,&cano)&&(sapo!=0||(cano!=0)))
{
fflush(stdin);
char qcano[(cano*3)+1];
gets(qcano);
conta(sapo,qcano);
}
		return 0;
		}
		void conta(int sapo,char s[])
{
int y=0,x,r=0;
for(x=0;x<strlen(s)-1;x+=2)
{
if(s[x+2]>s[x])
y=s[x+2]-s[x];
else if(s[x+2]<s[x])
y=s[x]-s[x+2];
if(y>sapo)
r++;
}
if(r==0)
printf("YOU WIN\n");
else
printf("GAME OVER\n");
}
