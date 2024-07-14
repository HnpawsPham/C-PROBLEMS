#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CAU1.INP");

int n,m,sl=0;
string a,b;
int cnta[255],cntb[255];

bool check(string sub){
    memset(cntb,0,sizeof(cntb));

    for(int i=0; i<sub.length(); i++){
        cntb[int(sub[i])]++;
    }

    // kiem tra so luong
    for(int i=97; i<=122; i++){
        if(cnta[i] != 0){
            if(cnta[i] != cntb[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    fi>>n>>m;
    fi>>a;
    fi>>b;

    for(int j=0; j<a.length(); j++){
        a[j] = tolower(a[j]);
        cnta[int(a[j])]++;
    }

    //xoa bot ki tu thua
    for(int i=0; i<b.length(); i++){
        b[i] = tolower(b[i]);
        int cnt=0;

        for(int j=0; j<a.length(); j++){
            if(b[i] == a[j]){
                cnt++;
            }
        }

        if(cnt == 0){
            b.erase(remove(b.begin(), b.end(), b[i]), b.end());
        }
    }

    for(int i=0; i<b.length()-3; i++){
        if(check(b.substr(i,4))){
            sl++;
        }
    }

    cout<<sl<<endl;
}