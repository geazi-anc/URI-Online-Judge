#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int vetor[5],cont=0,x;

for(x=0;x<5;x++)
{
cin>>vetor[x];
if(vetor[x]%2==0)
cont++;
}

cout<<cont<<" valores pares"<<endl;

return 0;
}
