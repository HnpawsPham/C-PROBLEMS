#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BDS.INP"),
        out(".\\txt\\BDS.OUT");

int n;
int a[1000000];

void findSqrt(){
    int sum=0;
    int firstNum = static_cast<int>(sqrt(n));
    sum += firstNum*firstNum;

    out<<firstNum<<" ";
    cout<<firstNum<<endl;

    while(firstNum > 1){
        firstNum/=2;
        
        out<<firstNum<<" ";
        cout<<firstNum<<endl; 

        sum += firstNum*firstNum;
    }

    if(sum < n){
        out<<firstNum<<" ";
        cout<<firstNum<<endl; 
    }
}

int main(){
    fi>>n;

    findSqrt();

    fi.close();
    out.close();
}