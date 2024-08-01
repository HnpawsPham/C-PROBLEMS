#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DELETESTR.INP");

string str;

int main(){
    fi>>str;

    bool deleleEven = true;
    while(str.length() != 1){

        for(int i=0; i<str.length(); i++){
            if(deleleEven == true){
                if((i+1)%2 == 0){
                    str.erase(i,1);
                }
            }
            else{
                if((i+1)%2 != 0){
                    str.erase(i,1);
                }
            }
        }
        
        if(deleleEven == true){
            deleleEven = false;
        }
        else{
            deleleEven = true;
        }
    }
    cout<<str<<endl;
}