#include<iostream>
using namespace std ;
int main()
{
string chuoi ;
cout<<" nhap chuoi : ";
getline(cin,chuoi);
for(int i = 0 ;i<chuoi.size();i++)
{
if((int)chuoi[i] %2 == 1)
cout <<chuoi[i]<<endl;
}
return 0 ;
}