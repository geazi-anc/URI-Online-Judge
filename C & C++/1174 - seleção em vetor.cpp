#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
				int x;
float vetor[100];

for(x=0;x<100;x++)
cin>>vetor[x];

cout<<fixed<<setprecision(1);

for(x=0;x<100;x++)
 if(vetor[x]<=10)
cout<<"A["<<x<<"] = "<<vetor[x]<<endl;


return 0;
}
