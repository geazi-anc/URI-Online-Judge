#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int casos,numero,primo=0,x,y;

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>numero;
primo=0;

for(y=1;y<=numero;y++)
if(numero%y==0)
primo++;

if(primo==2)
cout<<numero<<" eh primo"<<endl;

else
cout<<numero<<" nao eh primo"<<endl;
}

return 0;
}
