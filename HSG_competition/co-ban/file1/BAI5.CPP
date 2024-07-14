#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI5.INP");

int n,sl=0;
pair<int,int> point[100000000];
int squared[100000000];

void sum(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x = point[i].first - point[j].first;
            int y = point[i].second - point[j].second;
            
            squared[x*x + y*y]++;
        }
    }
}

void count(){
    for(int i : squared){
        sl+= (i*(i-1))/2;  //cong thuc
    }
}

int main(){
    fi>>n;

    memset(squared, false, sizeof(squared));

    for(int i=0; i<n; i++){
        fi>>point[i].first>>point[i].second;
    }

    sum();
    count();

    cout<<sl<<endl;
}