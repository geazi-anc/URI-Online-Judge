#include <stdio.h>
	int main ()
	{
	int h1,m1,h2,m2,r;

while(scanf("%i %i %i %i",&h1,&m1,&h2,&m2)&&h1!=0||(m1!=0||(h2!=0||(m2!=0))))
{
if(h2>=h1&&(m2>=m1))
r=(h2-h1)*60+(m2-m1);
if(h2>=h1&&(m2<=m1))
r=((h2-h1)*60)-(m1-m2);
if(h2<=h1&&(m2<=m1))
r=1440-(h1-h2)*60+(m1-m2);
if(h2==h1&&(m2<=m1))
r=1440-(m1-m2);
if(h2<=h1&&(h2==0&&(m2<=m1)))
r=((24-h1)*60)-(m1-m2);
printf("%i\n",r);
}
		return 0;
	}
