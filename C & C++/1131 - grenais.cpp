#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int inter=0,gremio=0,a,b,op,grenais=0,empate=0;

do
{
cin>>a>>b;

if(a>b)
	inter++;
	
	else if(a<b)
	gremio++;
	
	else if(a==b)
	empate++;
	grenais++;
	
	cout<<"Novo grenal (1-sim 2-nao)"<<endl;
	cin>>op;
}
while(op==1);

cout<<grenais<<" grenais"<<endl;
cout<<"Inter:"<<inter<<endl;
cout<<"Gremio:"<<gremio<<endl;
cout<<"Empates:"<<empate<<endl;

if(inter>gremio)
cout<<"Inter venceu mais"<<endl;
else if(gremio>inter)
cout<<"Gremio venceu mais"<<endl;

return 0;
}
