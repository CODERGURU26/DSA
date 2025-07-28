#include<iostream>

using namespace std;

void reverse(int arr[] , int n){
  
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"Enter The Size Of The Array"<<endl;
    cin>>size;

    int num[100];
    cout<<"Enter The Elements Of The Array";
    for(int i=0; i<size; i++){
        
        cin >> num[i];
    }

    reverse(num , size);
    cout<<"Reversed Array is:";
    for(int i=0; i<size; i++){
        cout<<num[i]<<endl;
    }
}