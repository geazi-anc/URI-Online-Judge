#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
double a,b,c,quadrado,triangulo,trapezio,retangulo,circulo,pi=3.14159;

cin>>a>>b>>c;

triangulo=(a*c)/2;
circulo=pi*pow(c,2);
trapezio=((a+b)*c)/2;
quadrado=pow(b,2);
retangulo=a*b;

cout<<fixed<<setprecision(3);

cout<<"TRIANGULO: "<<triangulo<<endl;
cout<<"CIRCULO: "<<circulo<<endl;
cout<<"TRAPEZIO: "<<trapezio<<endl;
cout<<"QUADRADO: "<<quadrado<<endl;
cout<<"RETANGULO: "<<retangulo<<endl;

return 0;
}
