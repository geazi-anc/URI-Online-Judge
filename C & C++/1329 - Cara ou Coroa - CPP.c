	#include <stdio.h>
		#include <stdlib.h>
#include <string.h>
void conta(char s[]);
		int main ()
		{
		int time;
while(scanf("%i",&time)&&(time!=0))
{
fflush(stdin);
char s[(time*2)+1];
gets(s);
conta(s);
}
		return 0;
		}
void conta(char s[])
{
int x,m=0,j=0;
for(x=0;x<strlen(s);x++)
{
if(s[x]=='0')
m++;
else if(s[x]=='1')
j++;
}
printf("Mary won %i times and John won %i times\n",m,j);
}
