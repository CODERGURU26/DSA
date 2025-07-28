#include<iostream>
using namespace std;

void sort01(int nums[] , int size){
    int left = 0 , right = size-1;

    while(left < right)
    {
        while(nums[left]==0 && left<right) left++;
        while(nums[right]==1 && left<right) right--;

        if(left < right)
        {
            swap(nums[left] , nums[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int size;
    cout<<"Enter The Size Of The Array";
    cin>>size;

    int nums[100];
    cout<<"Enter The Elements Of The Array";
    for(int i=0; i<size; i++){
        cin>>nums[i];
    }
     sort01(nums , size);
    cout<<"Printed Elements Are:";
    for(int i=0; i<size; i++){
        cout<<nums[i];
    }
}