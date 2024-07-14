#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"first number: ";
    cin>>a;
    cout<<"second number: ";
    cin>>b;
    cout<<"third number: ";
    cin>>c;
    // find max number
    if (a<b>c || (a==b && b>c)){
        cout<<"The largest number is: "<<b;
    }
    else if(b<a>c || (b==c && c<a)){
        cout<<"The largest number is: "<<a;
    }
    else if(a<c>b || (a==b && b<c)){
        cout<<"The largest number is: "<<c;
    }
    else{
        cout<<"The largest number is: "<<c;
    }
}