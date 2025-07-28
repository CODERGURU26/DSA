#include<iostream>

using namespace std;

bool search(int num[] ,int size , int key ){
    for(int i=0; i<size; i++){
        if(num[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int num[10] = {1, 2 , 3 , 6 ,7  ,8 , 10 , 12 , 16 , 19 };
    

    int key;
    cout<<"Enter The Element To be Search";
    cin>>key;

    bool found = search(num , 10 , key );

    if(found){
        cout<<"Element Found At Position:"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
}