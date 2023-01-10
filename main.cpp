#include <iostream>
#include <string>

using namespace std;

int main()
{
int k, x;
string asd;
cin>>asd;
cin >> k;
for(int y=0;y<k;y++){
    x=asd.size();
char retek=asd[x-1];
for(int y=x-1;y>0;y--){
    asd[y]=asd[y-1];}
asd[0]=retek;}
cout<<asd<<endl;
return 0;
}
