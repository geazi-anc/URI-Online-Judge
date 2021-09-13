#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int a,b,x,soma=0,aux;

cin>>a;
cin>>b;

if(a>b)
{
aux=a;
a=b;
b=aux;
}

for(x=a;x<=b;x++)
 if(x%13!=0)
  soma+=x;

cout<<soma<<endl;

return 0;
}
