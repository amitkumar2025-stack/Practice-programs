#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"it is a lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"It is a uppercaser";
    }
    else if (ch>='0' && ch<='9'){
        cout<<"it is a number ";
    }
    else{
        cout<<"It is a special character ";
    }
    return 0;
}