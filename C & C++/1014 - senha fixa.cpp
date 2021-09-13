#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int senhacerta=2002,senha;	

do
{
	cin>>senha;
	
	if(senha!=senhacerta)
	cout<<"Senha Invalida"<<endl;
	else
	cout<<"Acesso Permitido"<<endl;
}
while(senhacerta!=senha);

return 0;
}
