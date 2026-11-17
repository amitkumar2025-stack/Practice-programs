#include<iostream>
using namespace std;
int main(){
    int n , count , rev=0 , original;
    cout<<"Enter a number : ";
    cin>>n;
    original=n;
    while(n>0){
        count=n%10;
        rev=rev*10+count;
        n=n/10;
    }
    cout<<"Reverse Number is : "<<rev<<endl;
    if(rev==original){
        cout<<"It is a palindrome ";
    }

    else
    cout<<"It is  not a palindrome ";
}