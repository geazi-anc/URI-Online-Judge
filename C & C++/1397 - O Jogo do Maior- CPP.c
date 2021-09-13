	#include <stdio.h>
		#include <stdlib.h>
		int main ()
		{
		int rog=0,rf=0,x,n,og,f;
while(scanf("%i",&n)&&(n!=0))
{
for(x=0;x<n;x++)
{
scanf("%i %i",&og,&f);
if(og>f)
rog++;
else if(f>og)
rf++;
}
printf("%i %i\n",rog,rf);
rog=0;
rf=0;
}
		return 0;
		}
