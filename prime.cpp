#include <iostream>
using namespace std;

int main(){
    int n =10;
    int count = 0
    for(int j =3 ; j<=n; j++ ){
        for(int i = 2; i<=j;i++){
            if(j%i == 0){
                continue;
            }else{
                count += 1
            }
        }
    }

    cout << count << "\n"
}