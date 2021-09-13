#include <bits/stdc++.h>
using namespace std;
	int main ()
			{
int x,casos;
float forca;
char pessoa[50];

cin>>casos;

for(x=0;x<casos;x++)
{
cin>>pessoa>>forca;

if(pessoa[0]=='T'&&pessoa[1]=='h'&&pessoa[2]=='o'&&pessoa[3]=='r')
cout<<"Y"<<endl;

else
cout<<"N"<<endl;
}


return 0;
}
