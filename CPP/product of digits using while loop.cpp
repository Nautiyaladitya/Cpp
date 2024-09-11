#include <iostream>
using namespace std;
int main()
{
  int n,pro=1;
  cout<<"\n enter number= ";
  cin>>n;
  while(n>0)
  {
    pro=pro*(n%10);
    n=n/10;
      }
  cout<<"\n product of digitd are= "<<pro;
  return 0;

}
