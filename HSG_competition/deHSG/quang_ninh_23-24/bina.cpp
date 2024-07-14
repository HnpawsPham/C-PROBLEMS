#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\bina.inp"),
        out(".\\txt\\bina.out");

int n,k;
string str;

int same[1000000];

void convert(){
    int num = 0;

    for(int i=n-1; i>=0; i--){
        num += int(str[n-i-1] - '0') * pow(2,i);
    }
    cout<<num<<endl;
}

int main(){
    fi>>n>>k;
    fi>>str;
    memset(same, false, sizeof(same));

    int cnt=0;

    for(int i=0; i<n; i+=k){
        if(str[i] == str[i-1]){
            if(str[i] == '0'){
                str[i] = '1';
            }
            else{
                str[i] = '0';
            }
            cnt++;
        }
    }

    cout<<cnt<<endl;
    cout<<str<<endl;

    fi.close();
    out.close();
}