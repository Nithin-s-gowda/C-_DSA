#include <iostream>
using namespace std;

int main(){
    int a = 11, b = 5;
    double c = 2;

    cout <<"sum = "<< (a+b)<<"\n";
    cout <<"difference = "<< (a-b)<<"\n";
    cout <<"product = "<< (a*b)<<"\n";
    cout <<"division = "<< (a/b)<<"\n";
    cout <<"modulo = "<< (a%b)<<"\n";
    cout <<"float division = "<< (a/c)<<"\n";
    
    cout <<"float division = "<< (a/(double)b)<<"\n";
    cout <<(a>b)<<"\n";
    cout <<((3<1) || (3<1))<<"\n";
    return 0;
}