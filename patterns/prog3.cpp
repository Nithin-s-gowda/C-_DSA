#include <iostream>
using namespace std;

int main(){
    int n =3;
    char alp = 'A';

    for(int i = 0; i < n;i++){
        for(int j = 0; j<n;j++){
            cout << alp;
            alp+=1;
        }cout<< endl;
    }
}