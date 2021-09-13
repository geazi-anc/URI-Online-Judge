#include <bits/stdc++.h>
using namespace std;

int main ()
			{
	int a,b,c;
cin>>a>>b;
	if(a>=b)
	c=a%b;
	else if(b>=a)
	c=b%a;
	if(c==0)
cout<<"Sao Multiplos"<<endl;
	else
cout<<"Nao sao Multiplos"<<endl;
cin>>a;
	return 0;
	}
