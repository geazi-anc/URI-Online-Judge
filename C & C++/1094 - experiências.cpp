#include <bits/stdc++.h>
using namespace std;
    int main ()
            {
int casos,totalcobaias=0,recebe,x;
float ratos=0,coelhos=0,sapos=0;
char op;
cin>>casos;
for(x=0;x<casos;x++)
{
cin>>recebe>>op;
if(toupper(op)=='S')
sapos+=recebe;
else if(toupper(op)=='R')
ratos+=recebe;
else if(toupper(op)=='C')
coelhos+=recebe;
}
totalcobaias=sapos+ratos+coelhos;
cout<<fixed<<setprecision(0);
cout<<"Total: "<<totalcobaias<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<coelhos<<endl;
cout<<"Total de ratos: "<<ratos<<endl;
cout<<"Total de sapos: "<<sapos<<endl;

return 0;
}
