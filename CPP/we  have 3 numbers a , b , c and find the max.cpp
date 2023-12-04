#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers";
    cin>>a>>b>> c;
    if((a>b) && (a>c))
        cout<<"\n max number: "<<a;
    else if((b>a) && (b>c))
        cout<<"\n max number: "<<b;
    else
        cout<<"\n max number: "<<c;
    return 0;

}
