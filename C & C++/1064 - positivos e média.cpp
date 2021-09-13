#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
float vetor[6],media=0;
int x,cont=0;

for(x=0;x<6;x++)
{
cin>>vetor[x];
if(vetor[x]>0)
{
cont++;
media+=vetor[x];
}
}

media/=cont;
cout<<fixed<<setprecision(1);
cout<<cont<<" valores positivos"<<endl;
cout<<media<<endl;


return 0;
}
