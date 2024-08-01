#include <bits/stdc++.h>
using namespace std;

int a,b,n;
string stra="",strb="";

void find(int num, string &res){
    for(int i=1;i<=9; i++){
        if((num-i)/10==0){
            res= to_string(num-i) + to_string(i);
        }
    }
    cout<<endl;
}

int main(){
    cin>>n;

    //tach hai so co 2 chu so so ra
    a=n/100;
    b=n%100;

    if(a>=10 && b >=10 && a<=18 && b<=18){
        // tim tong
        find(a,stra);
        find(b,strb);

        if(stoi(stra) > stoi(strb)){
            cout<<strb<<stra<<endl;
        }
        else{
            cout<<stra<<strb<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }


 
}