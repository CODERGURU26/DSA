#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;

    for(int i=3; i<n; i++){

        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter An Number:"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"It Is an prime number"<<endl;
    }
    else{
        cout<<"It is not an prime number"<<endl;
    }
}