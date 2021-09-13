#include <stdio.h>
	#include <stdlib.h>
	int main ()
	{
	int r=0,x,x1,y1,x2,y2;

while(scanf("%i %i %i %i",&x1,&y1,&x2,&y2)&&(x1!=0&&(y1!=0&&(x2!=0&&(y2!=0)))))
{

if(r==0)
{
if(x1==x2&&(y1==y2))
{
printf("0\n");
x1=30;
y2=50;
r=1;
}
for(x=0;x<8;x++)
{
if(x1+x==x2&&(y1+x==y2))
{
printf("1\n");
r=1;
}
else if(x1+x==x2&&(y1-x==y2))
{
printf("1\n");
r=1;
}
else if(x1-x==x2&&(y1-x==y2))
{
printf("1\n");
r=1;
}
else if(x1-x==x2&&(y1+x==y2))
{
printf("1\n");
r=1;
}
}
if(y1==y2)
{
printf("1\n");
r=1;
}
else if(x1==x2)
{
printf("1\n");
r=3;
}
}
if(r==0)
{
printf("2\n");
}
r=0;
}
	return 0;
	}
