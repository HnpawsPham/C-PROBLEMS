#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TENGOI.INP");

int n;
string a[1000000];
int len[1000000];

int getlen(string str){
    int len=0, maxlen=0;

    for(int i=0; i<str.length(); i++){
        if(str[i] != 'W' && str[i] != 'A' && str[i] != 'R'){
            len++;
            maxlen = max(maxlen, len);
        }
        else{
            maxlen = max(maxlen, len);
            len=0;
        }
    }

    return maxlen;
}

int main(){
    fi>>n;

    int sl = 0, maxlen=0;

    for(int i=0; i<n; i++){
        fi>>a[i];
        len[i] = getlen(a[i]);

        maxlen = max(maxlen, len[i]);
    }

    for(int i=0; i<n; i++){
        if(len[i] == maxlen){
            sl++;
        }
    }

    cout<<maxlen<<" "<<sl<<endl;
}