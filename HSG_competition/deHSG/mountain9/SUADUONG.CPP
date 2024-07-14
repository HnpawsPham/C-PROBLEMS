#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\SUADUONG.INP");

int main(){
    string str;
    int cnt=0;
    bool repairNeeded = false;

    while(!fi.eof()){
        fi>>str;
        cnt++;

        if(cnt == 2){
            repairNeeded = true;
            break;
        }
    }

    //1 la khong can sua, 0 la can sua
    if(repairNeeded){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }

}