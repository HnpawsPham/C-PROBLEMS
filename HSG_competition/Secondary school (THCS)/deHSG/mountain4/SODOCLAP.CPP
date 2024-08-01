#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\SODOCLAP.INP"),
        out(".\\txt\\SODOCLAP.OUT");

string x;

bool independent(int num){
    string x=to_string(num);
    for(int i=0; i<x.length(); i++){
        for(int j=i; j>=0; j--){
            if(i!=j && x[i] == x[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    fi>>x;

    int i=stoi(x);
    while(!independent(i)){
        i++;
        if(independent(i)){
            out<<i<<endl;
            break;
        }
    }

    fi.close();
    out.close();
}