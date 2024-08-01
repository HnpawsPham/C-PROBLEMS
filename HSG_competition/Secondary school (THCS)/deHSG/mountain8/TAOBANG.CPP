#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TAOBANG.INP"),
        out(".\\txt\\TAOBANG.OUT");

int n;
int a[1000][1000] = {
    {1,2,3,4,5},
    {2,4,6,8,10},
    {3,6,9,2,4},
    {4,8,2,4,6},
    {5,10,4,6,8}
};

void Incremental(int j, int i, int start){
    for(int z=j; z<n; z++){
        a[i][z]=start;
        start+=2;
    }
}

void modifyBoard(){
    for(int j=4; j<n; j++){
        a[0][j]=a[0][j-1]+1;
        a[1][j]=a[0][j]*2; //12


        for(int b=2; b<n-4; b++){
            a[b][j-b] = a[1][j];
        }

        a[j][0]=a[0][j-1]+1;

        for(int c=2; c<n; c++){
            Incremental(j-(c-1),c,2);
        }
    }

    for(int e=n-4; e<n; e++){       
        a[e][1] = a[e][0]*2;

        if(e<n-1){
            Incremental(2,e,2);
        }
        else{
            Incremental(2,e,4);
        }
        
    }
}

void print(){
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                out<<a[i][j]<<" ";
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
            out<<endl;
    }
}

int main(){
    fi>>n;

    if(n==5){
        print();
    }
    else{
        modifyBoard();
        print();
    }

    fi.close();
    out.close();
    
}