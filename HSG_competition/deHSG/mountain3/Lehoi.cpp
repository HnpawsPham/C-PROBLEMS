#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\LEHOI.INP"),
        out(".\\txt\\LEHOI.OUT");


int n,total;
int t1[10000],t2[10000];
string str,t;

int main(){
    fi>>str;

    for(int i=2; i<str.length(); i++){
        t=t+str[i];
    }
    n=stoi(t);
    total=n;

    for(int i=0; i<n; i++){
        fi>>t1[i]>>t2[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<i; j++){
            if(t1[i]<= t2[j] && t1[i]>=t1[j] && t1[i]!=0){
                total--;
                t1[i]=0;
                t2[i]=0;
            }
        }
    }

    out<<total<<endl;

    fi.close();
    out.close();
}