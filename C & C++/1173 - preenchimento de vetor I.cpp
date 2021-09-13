#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int vetor[10],x,numero;

cin>>numero;
vetor[0]=numero;

for(x=1;x<10;x++)
vetor[x]=2*vetor[x-1];

for(x=0;x<10;x++)
cout<<"N["<<x<<"] = "<<vetor[x]<<endl;
cin>>x;



return 0;
}
