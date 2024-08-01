#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI3.INP"),
        out(".\\txt\\BAI3.OUT");

int n;
int ngto[9000000];
bool exist = false;

void sieve(){
    for(int i=0; i<=9000000; i++){
        ngto[i] = 1;
    }

    ngto[0] = 0;
    ngto[1] = 0;

    for(int i=2; i<sqrt(9000000); i++){
        if(ngto[i] == 1){
            for(int j=i*i; j<=9000000; j+=i){
                ngto[j] = 0; 
            }
        }
    }
}

int tongbp(string str){
    int sum=0;

    if(str.length() == 1){
        return pow(stoi(str),2);
    }

    for(int i=0; i<str.length(); i++){
        sum+=int(str[i] - '0') * int(str[i] - '0');
    }

    return sum;
}

int main(){
    sieve();

    fi>>n;

    for(int i=0; i<n; i++){
        string str;
        fi>>str;

        int sum = tongbp(str);

        if(ngto[sum] == 1){
            exist = true;
            out<<str<<" "<<sum<<endl;
        }
    }

    if(!exist){
        out<<0<<endl;
    }

    fi.close();
    out.close();
}