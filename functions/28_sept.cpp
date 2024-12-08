

#include <iostream>
using namespace std;

// function   to print product of numbers !
int printMultiple(int x, int y, int z){
    int result = x*y*z;
    return result;
}

// print name 10 times !
void printName(){
    for(int i=1; i<=10; i++)
        cout<<i<< " "<<"hello aadi"<<endl;
}

// Even || Odd Function !
void isEvenOrOdd(int x){
    if(x % 2 == 0){
        cout<<x<<" "<<"is an even number"<<endl;
    }else{
        cout<<x<<" "<<"is an odd number"<<endl;
    }
}

int temp(int far){
int celcius = (far-32) * 5/9;
    return celcius;
}

void printTable(int x){
     cout<<x <<" multiples are: "<<endl;
    for(int i=1; i<=10; i++){
        cout<<x<<" * "<<i<<" = "<<x*i << endl;
    }
}


int main() {
// function call to print product of numbers !
    int value = printMultiple(3,4,5);
    std::cout<<"product of numbers are: " << value <<endl;

    // print name funcn call !
    printName();

    // Even , odd funcn call !
    isEvenOrOdd(3);

    int toCelcius = temp(100);
    cout<<"temp. is "<<toCelcius<< " degree celcius"<<endl;

    printTable(5);
    
    return 0;
}