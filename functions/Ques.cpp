#include <iostream>
using namespace std;

// funcn to convert farenheit to celcius !
int convertTemp (int far){
    int celcius = (far-32)* 5/9;
    return celcius;
}

// funcn to get product of three numbers !
int printMultiple(int a , int b , int c){
    int result = a*b*c;
    return result;
}

// funcn to print table of a number !
int printTable (int num){
    for(int i=1; i<=10; i++){
      cout<<num<<" * "<<i<<" = "<<num*i<<endl; 
    }
      return 0;
}

int sum(int x, int y, int z){
    int total = x+y+z;
    return total;
}

// convert character to upperCase !
char toUpperCase(char ch){
    char answer = ch -'a' +'A';
    return answer;
}

// main function of the program !
int main() {
    
     // funcn call to print temp. to celcius !
    int value = convertTemp(100);
    cout <<"In Celcius : "<< value<<" degree" << endl;
    
    // funcn call to print product of numbers !
    int val = printMultiple(3,4,5);
    cout<<"product is : "<<val << endl;
    
    // funcn call to print table of a number !
    printTable(50);
    
    // funcn to print sum of numbers !
    int sumVal = sum(3,4,5);
    cout<<"Sum is: "<< sumVal  <<endl;
    
    // funcn call to convert character to upperCase !
    int ans = toUpperCase('a');
    cout<<ans;

    return 0;
}