#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\FINDDIFF.INP"),
        out(".\\txt\\FINDDIFF.OUT");

string str;
int cnt[128];

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    getline(fi, str);

    int maxx = 0, diff=0;
    string sub = "", res;

    for(int i=0; i<str.length(); i++){
        if(str[i] != ' ' && str[i] != '.'){
            if(cnt[int(str[i] - '0')] == 0){
                cnt[int(str[i] - '0')]=1;
                diff++;
            }

            sub+=str[i];
        }
        else{
            memset(cnt, false, sizeof(cnt));
            
            if(diff>maxx){
                maxx = diff;
                res = sub;
            }

            diff=0;
            sub="";
        }
    }

    out<<res<<endl;
}