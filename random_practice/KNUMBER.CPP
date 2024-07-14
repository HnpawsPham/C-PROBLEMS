#include <bits/stdc++.h>
using namespace std;

long long int k;

string toBin(int num){
    string str;
    while(num>0){
        str=to_string(num%2*5)+str;     //n%2 sẽ ra 1 hoặc 0, nhân với 5 nhận được 5 hoặc 0
        num/=2;
    }

    return str;
}

int main(){
    cin>>k;
    
    cout<<toBin(k-1)<<endl;
}