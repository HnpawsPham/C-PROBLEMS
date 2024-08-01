#include <bits/stdc++.h>
using namespace std;

string str = "";
int cntt=0, cnte=0, cntn=0, sl=0;

fstream fi(".\\txt\\TEEN.INP"),
        out(".\\txt\\TEEN.OUT");


int main(){
    while(!fi.eof()){
        string t;
        fi>>t;
        str+=t;
    }

    for(int i=0; i<str.length(); i++){
        switch (str[i]){
            case 'T':
                cntt++;
                break;
            case 'E':
                cnte++;
                break;
            case 'N':
                cntn++;
                break;
            default:
                break;
        }
    }

    if(cntt >0 && cnte > 0 && cntn > 0){
        sl = (cnte - min(cntt, cntn));   
    }
    

    out<<"T = "<<cntt<<endl;
    out<<"E = "<<cnte<<endl;
    out<<"N = "<<cntn<<endl;
    out<<"TEEN = "<<sl<<endl;

    fi.close();
    out.close();
}