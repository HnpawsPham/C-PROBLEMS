#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\GAME.INP");

string str;

int main(){
    fi>>str;

    int duc=0,nhi=0;
    for(int i=0; i<str.length(); i++){
        switch (str[i])
        {
        case 'D':
            duc++;
            break;
        case 'N':
            nhi++;
            break;
        default:
            break;
        }
    }

    cout<<duc<<" "<<nhi<<endl;
}
