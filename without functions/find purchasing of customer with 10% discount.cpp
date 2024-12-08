#include<iostream>
using namespace std;
int main(){
int amt,dis;
cout<<"\n enter purchasing amount= ";
cin>>amt;
dis=(amt*10)/100;
cout<<"\n purchasing amount= "<<amt;
cout<<"\n discount= "<<dis;
cout<<"\n net payable= "<<amt-dis;

return 0;

}

