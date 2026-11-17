#include<iostream>
using namespace std;
int main(){
    int n,sum=0,count;
    cout<<"enter a number : ";
    cin>>n;
    while(n>0){
        count=n%10;
        sum=sum+count;
        n=n/10;

        
    }
    cout<<sum;
}
    
    
    