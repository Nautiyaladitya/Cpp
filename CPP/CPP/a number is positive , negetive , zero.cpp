#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\n enter number: ";
    cin>>a;
    if(a==0)
        cout<<"zero";
    else if (a>0)
        cout<<"positive number";
    else
        cout<<"negative number";
    return 0;
}
