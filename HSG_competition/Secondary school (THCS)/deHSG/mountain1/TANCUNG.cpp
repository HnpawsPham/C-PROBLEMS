#include <bits/stdc++.h>
using namespace std;

int A,N;

fstream fi(".\\txt\\TANCUNG.INP"),
        out(".\\txt\\TANCUNG.OUT");


int main(){
    fi>>A;
    fi>>N;
    A=pow(A,N);
    A%=10;
    out<<A;

    fi.close();
    out.close();
}