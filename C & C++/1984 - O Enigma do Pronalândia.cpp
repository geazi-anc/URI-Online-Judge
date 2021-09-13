#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
				int x,tamanho;
char numero[15];

cin>>numero;

tamanho=strlen(numero);

for(x=tamanho-1;x>=0;x--)
cout<<numero[x];
cout<<endl;

return 0;
}
