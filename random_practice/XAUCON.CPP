#include <bits/stdc++.h>
using namespace std;

string str;

int main(){
    cin>>str;

    int maxx=0,cnt=0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '0'){
            cnt++;
            maxx=max(cnt,maxx);
        }
        else{
            cnt=0;
        }
    }

    cout<<maxx<<endl;
}