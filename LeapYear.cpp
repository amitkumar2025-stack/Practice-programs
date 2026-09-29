#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Year : ";
    cin >> n;
    if(n%400==0 && n%4==0 && n%100!=0){
        cout<<"It is a leap year";
    }
    else{
        cout<<"It is not a leap year ";
    }
}