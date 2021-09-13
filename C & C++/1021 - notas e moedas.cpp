#include <bits/stdc++.h>
		using namespace std;
			int main ()
					{
int nota100,nota50,nota20,nota10,nota5,nota2,moeda1,moeda50,moeda25,moeda10,moeda5,moeda01;
double recebe;

cin>>recebe;

nota100=recebe/100;
nota50=(recebe-(nota100*100))/50;
nota20=(recebe-(nota100*100+nota50*50))/20;
nota10=(recebe-(nota100*100+nota50*50+nota20*20))/10;
nota5=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10))/5;
nota2=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5))/2;
moeda1=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2));
moeda50=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2+moeda1))/0.50;
moeda25=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2+moeda1+moeda50*0.50))/0.25;
moeda10=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2+moeda1+moeda50*0.50+moeda25*0.25))/0.10;
moeda5=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2+moeda1+moeda50*0.50+moeda25*0.25+moeda10*0.10))/0.05;
moeda01=(recebe-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2+moeda1+moeda50*0.50+moeda25*0.25+moeda10*0.10+moeda5*0.05))/0.01;


cout<<"NOTAS:"<<endl;
cout<<nota100<<" nota(s) de R$ 100.00"<<endl;
cout<<nota50<<" nota(s) de R$ 50.00"<<endl;
cout<<nota20<<" nota(s) de R$ 20.00"<<endl;
cout<<nota10<<" nota(s) de R$ 10.00"<<endl;
cout<<nota5<<" nota(s) de R$ 5.00"<<endl;
cout<<nota2<<" nota(s) de R$ 2.00"<<endl;
cout<<"MOEDAS:"<<endl;
cout<<moeda1<<" moeda(s) de R$ 1.00"<<endl;
cout<<moeda50<<" moeda(s) de R$ 0.50"<<endl;
cout<<moeda25<<" moeda(s) de R$ 0.25"<<endl;
cout<<moeda10<<" moeda(s) de R$ 0.10"<<endl;
cout<<moeda5<<" moeda(s) de R$ 0.05"<<endl;
cout<<moeda01<<" moeda(s) de R$ 0.01"<<endl;

return 0;
}
