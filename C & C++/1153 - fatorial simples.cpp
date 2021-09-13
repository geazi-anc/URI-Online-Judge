#include <bits/stdc++.h>
	using namespace std;
	
		int main ()
				{
	int n,x;
double fatorial;
	
	cin>>n;
	fatorial=n;
	
	do
	{
		fatorial=fatorial*(n-1);
		n--;
	}
while(n!=1);
	
	cout<<fixed<<setprecision(0);
	cout<<fatorial<<endl;

return 0;	
}
