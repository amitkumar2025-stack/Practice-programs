#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,count = 0,count2,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    int original = n;
    
    while(n>0){
        n = n/10;
        count++;
    }

    n = original;

    
    while(n>0){
        count2 = n%10;
        sum = sum + std::round(std::pow(count2,count));
        n = n/10;
    }
    if(sum == original){
        cout<<sum<<" is Armstrong number ";
    }
    else
    cout<<"it is not Armstrong number ";

    return 0;
}