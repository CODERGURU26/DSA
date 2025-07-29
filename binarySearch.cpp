#include<iostream>

using namespace std;

int binarySerach(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;



    while(start <= end)
    {
        int mid = (start+end)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;

}

int main(){

    int size;
    cout<<"Enter The Size Of The Array:";
    cin>>size;

    int arr[100];
    cout<<"Enter The Elements Of The Array:";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter The Key Element To Be Found:";
    cin>>key;

   int index =  binarySerach(arr , size , key);

   if(index != -1)
   {
    cout<<"Elements "<<key<<"Found at index:"<<index<<endl;
   }
   else
   {
    cout<<"Element Not Found";
   }
}