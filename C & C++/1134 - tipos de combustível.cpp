#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int op,alcool=0,gasolina=0,diesel=0;

do
{
	cin>>op;
	
	if(op==1)
alcool++;
	
	else if(op==2)
	gasolina++;
	
	else if(op==3)
	diesel++;
}
while(op!=4);

cout<<"MUITO OBRIGADO"<<endl;
cout<<"Alcool: "<<alcool<<endl;
cout<<"Gasolina: "<<gasolina<<endl;
cout<<"Diesel: "<<diesel<<endl;

return 0;
}
