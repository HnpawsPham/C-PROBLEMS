#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\num.inp"),
        out(".\\txt\\num.out");

string str;
int pos[10000000];

int main(){
    fi>>str;
    int cnt=0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'T'){
            pos[cnt] = i + 1;
            cnt++;
        }
    }

    sort(pos, pos+cnt, greater<int>());

    for(int i=0; i<cnt; i++){
        out<<pos[i];
    }

    fi.close();
    out.close();
}