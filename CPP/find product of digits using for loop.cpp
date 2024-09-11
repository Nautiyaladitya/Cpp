#include <iostream>
using namespace std;
int main()
{
  int n,pro=1;
  cout<<"\n enter number= ";
  cin>>n;
 for(; n>0; n=n/10)
 pro=pro*(n%10);
  cout<<"\n product of digits are= "<<pro;
  return 0;

}
