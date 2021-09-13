#include <bits/stdc++.h>
	using namespace std;
	
		int main ()
				{
	int recebe,cont=0;
	float media=0;
	
	while(cin>>recebe&&recebe>0)
	{

		media+=recebe;
		cont++;
	}

	media/=cont;
	
	cout<<fixed<<setprecision(2);
	cout<<media<<endl;
	
return 0;	
}
