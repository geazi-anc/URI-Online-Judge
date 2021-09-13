#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int vetor[10],x;

for(x=0;x<10;x++)
cin>>vetor[x];

for(x=0;x<10;x++)
if(vetor[x]<=0)
vetor[x]=1;

for(x=0;x<10;x++)
cout<<"X["<<x<<"] = "<<vetor[x]<<endl;

return 0;
}
