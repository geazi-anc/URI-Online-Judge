#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int vetor[5],positivo=0,x,negativo=0,pares=0,impares=0;

for(x=0;x<5;x++)
{
cin>>vetor[x];
if(vetor[x]%2==0)
pares++;
if(vetor[x]%2!=0)
impares++;
if(vetor[x]>0)
positivo++;
if(vetor[x]<0)
negativo++;
}

cout<<pares<<" valor(es) par(es)"<<endl;
cout<<impares<<" valor(es) impar(es)"<<endl;
cout<<positivo<<" valor(es) positivo(s)"<<endl;
cout<<negativo<<" valor(es) negativo(s)"<<endl;

return 0;
}
