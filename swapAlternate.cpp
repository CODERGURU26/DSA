#include<iostream>

using namespace std;

void swapAlternate(int num[] , int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size)
        swap(num[i] , num[i+1]);
    }
}

int main(){
    int size;
    cout<<"Enter The Size Of The Array";
    cin>>size;

    int num[100];

    cout<<"Enter The Elements:"<<endl;
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    swapAlternate(num , size);
    cout<<"Printed Elements Are:"<<endl;
    for(int i=0; i<size; i++){
        cout<<num[i];
    }
}