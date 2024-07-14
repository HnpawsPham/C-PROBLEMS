#include <bits/stdc++.h>
using namespace std;


fstream fi(".\\txt\\TINHDIEM.INP"),
        out(".\\txt\\TINHDIEM.OUT");

string str;
int sum=0;


int main(){
    fi>>str;
    int i=0,cnt=0;

    while(i<str.length()){
        if(str[i] == 'Y'){
            cnt++;
            sum+=cnt;
        }
        else{
            cnt=0;
        }

        i++;
    }
    cout<<endl;
    cout<<sum<<endl;
    
}