#include<iostream>

using namespace std;

int getPivot(int arr[] , int size)
{
    int start = 0 , end = size - 1;
    while(start < end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main()
{
    int size;
    cout<<"Enter The Size Of The Array";
    cin>>size;

    int arr[100];
    cout<<"Enter The Elements Of The Array";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int pivot = getPivot(arr , size);

    cout<<"Pivot Element Is:"<<pivot<<endl;
}