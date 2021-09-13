#include <bits/stdc++.h>
using namespace std;

	int main ()
			{
int maior=0,posicao=0,vetor[100],x;

for(x=0;x<100;x++)
{
cin>>vetor[x];

if(vetor[x]>=maior)
{
maior=vetor[x];
posicao=x;
}
}

cout<<maior<<endl;
cout<<posicao+1<<endl;

return 0;
}
