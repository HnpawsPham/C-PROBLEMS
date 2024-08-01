#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream fi ,out;
    fi.open(".\\txtFiles\\in10.txt");
    out.open(".\\txtFiles\\out10.txt");
    int n=0, s1,s2,s3,i;
    s1=0;
    s2=1;
    s3=0;
    i=0;
    fi>>n;

    while(i<n-2){   //trừ 2 do 2 số đầu là s1 và s2
        s3=s1+s2;
        s1=s2;
        s2=s3;
        i++;
    }
    out<<s3;
}