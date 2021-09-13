#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
float a,b,media;

do
{
	cin>>a;
	
	if(a<0||a>10)
	cout<<"nota invalida"<<endl;
}
while(a<0||a>10);

do
{
	cin>>b;
	
	if(b<0||b>10)
	cout<<"nota invalida"<<endl;
}
while(b<0||b>10);

media=(a+b)/2;
cout<<fixed<<setprecision(2);
cout<<"media = "<<media<<endl;

return 0;
}
