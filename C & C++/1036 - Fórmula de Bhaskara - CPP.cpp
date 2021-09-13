#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
double r1=0,r2=0,delta=0,a=0,b=0,c=0;
cin>>a>>b>>c;
	delta=pow(b,2)-(4*a*c);
	if(delta<=0)
cout<<"Impossivel calcular"<<endl;
	else if(2*a==0)
cout<<"Impossivel calcular"<<endl;
	else if(delta>0&&(2*a!=0))
	{
r1=((b*-1)+sqrt(delta))/(2*a);
	r2=((b*-1)-sqrt(delta))/(2*a);
cout<<fixed<<setprecision(5);
cout<<"R = "<<r1<<endl;
cout<<"R2 = "<<r2<<endl;
cin>>a;
	}
	return 0;
	}

