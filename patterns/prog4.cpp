#include <iostream>
using namespace std;

int main(){

    int n = 5;
    char alp = 'a';

    for(int i = 0 ; i< n;i++){
        for(int j=0; j<i+1;j++){
            cout << alp;
        }
        alp+=1;
        cout<< endl;
    }
}