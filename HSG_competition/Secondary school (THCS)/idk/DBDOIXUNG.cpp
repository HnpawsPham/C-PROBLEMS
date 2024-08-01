#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream fi,out;
    in.open("./txtFiles/in.txt");
    out.open("./txtFiles/out.txt");
    int n;
    fi>>n;
    findbit(n);
    out<<n;
    fi.close()
    out.close()
}
int findbit(n){
    int d;
    string nhiphan;
    nhiphan="";
    while (n>0){
        d=n%2;
        n=n/2;
        d=n;
        nhiphan=d+nhiphan;
    }
    return nhiphan;
}
int isDoixung(nhiphan){
    string reverse;
    for (int i=0;i<nhiphan.length;i++)
}