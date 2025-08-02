#include<iostream>
using namespace std;

bool isPalindrome(char a[] , int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        if(a[start] != a[end])
        {
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

void reverseChar(char name[] , int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        swap(name[start++] , name[end--]);
    }
}

int getLength(char name[])
{
    int count = 0;

    for(int i=0 ; name[i] != '\0'; i++)
    {
        count ++;
    }
    return count;

}
int main()
{
    char ch[20];

    cout<<"Enter Your Name:";
    cin>>ch;

    cout<<"Your Name Is: "<<ch<<endl;

    int length = getLength(ch);
    cout<<"Length Of The Name Is :"<<length<<endl;

     reverseChar(ch , length);
    cout<<"Your Reverse Name Is:"<<ch<<endl;

    cout<<"Palindrome Or Not: "<<isPalindrome(ch , length);
   
}