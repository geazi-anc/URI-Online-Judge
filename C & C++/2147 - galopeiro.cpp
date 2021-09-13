#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
				int casos,x;
char palavra[10000];
float conta,tempo;

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>palavra;

conta=strlen(palavra);
tempo=conta/100;

cout<<fixed<<setprecision(2);
cout<<tempo<<endl;
}

return 0;
}
