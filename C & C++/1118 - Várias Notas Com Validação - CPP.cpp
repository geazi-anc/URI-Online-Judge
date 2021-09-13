#include <bits/stdc++.h>
using namespace std;
int main ()
			{
int op;
	float a,b,media=0;

	do
	{
		do
		{
cin>>a;
cin>>b;
if(a<0||a>10||b<0||b>10)
cout<<"nota invalida"<<endl;
		}
while(a<0||a>10||b<0||b>10);
media=(a+b)/2;
cout<<fixed<<setprecision(2);
cout<<"media = "<<media<<endl;

do
{
cout<<"novo calculo (1-sim 2-nao)"<<endl;
cin>>op;
}
while(op<1||op>2);
	}
while(op!=2);
	return 0;
	}
