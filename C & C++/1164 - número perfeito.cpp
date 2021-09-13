#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int casos,numero,x,y,soma=0;

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>numero;
soma=0;

for(y=1;y<numero;y++)
if(numero%y==0)
soma+=y;
if(soma==numero)
cout<<numero<<" eh perfeito"<<endl;

else
cout<<numero<<" nao eh perfeito"<<endl;
}

return 0;
}
