#include <bits/stdc++.h>
using namespace std;
int main(){
    fstream fi,out;
    fi.open("./txtFiles/input12.txt");
    out.open("./txtFiles/output12.txt");
    string name;
    fi>>name;
    int j;
    name[0]=toupper(name[0]);
    for(int i=1;i<name.length();i++){
        j=i-1;
        if (name[j]==" "){
            name[i]=toupper(name[i]);
        }
    }
    cout<<name;
}