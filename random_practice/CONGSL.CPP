#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CONGSL.INP"),
        out(".\\txt\\CONGSL.OUT");

string a,b,res="";

void calculate(string a, string b){
    int i=a.length()-1;
    int cnt;


    while(a.length()>0){
        if(b.length()>0){
            if(a[i]>=b[i]){
                cnt = int(a[i]+1) + int(b[i]-'0');
                cout<<int(b[i])<<endl;
            }
            else{
                cnt=0;
            }

            

            a.erase(a.end()-1, a.end());
            b.erase(b.end()-1, b.end());
        }
    }
}

int main(){
    fi>>a;
    fi>>b;

    // cong duoc hai so co do dai khac nhau

    if(max(a,b) == a){
        calculate(a,b);
    }
    else{
        calculate(b,a);
    }

}