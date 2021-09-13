#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int anos=0,casos,x,a,b,populacaoa=0,populacaob=0;
float pa,pb;

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>a>>b>>pa>>pb;

populacaoa=a;
populacaob=b;
anos=0;

do
{
	populacaob=populacaob*(1+(pb/100));
	populacaoa=populacaoa*(1+(pa/100));
	anos++;
}
while(anos<=100&&populacaoa<populacaob&&populacaoa!=populacaob);

if(anos>100)
 cout<<"Mais de 1 seculo"<<endl;
 
else
 cout<<anos<<" anos"<<endl;
}

return 0;
}
