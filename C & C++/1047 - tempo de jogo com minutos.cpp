#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int minuto,inicio,fim,tempo,iniciominuto,fimminuto;

cin>>inicio>>iniciominuto>>fim>>fimminuto;

if(fim<=inicio)
{
tempo=(24-inicio)+fim;
minuto=abs(fimminuto-iniciominuto);
cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<" E "<<minuto<<" MINUTO(S)"<<endl;
}

else if(fim>=inicio)
{
tempo=fim-inicio;
cout<<"O JOGO DUROU "<<tempo<<" HORA(S)"<<endl;
}
cin>>tempo;
return 0;
}
