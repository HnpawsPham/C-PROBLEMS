#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\FINDPATH.INP"),
        out(".\\txt\\FINDPATH.OUT");

int m,n;
int a[1000][1000]; //,b[1000][1000];

int dx[4] = {-1, 0 , 0, 1},
    dy[4] = {0, -1, 1, 0};

// void print(){
//     for(int i=0; i<n; i++){
//         for(int j = 0; j<m; j++){
//             cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

bool availablePath(int &i, int &j){
    for(int z=0; z<4; z++){
        if(a[i+dy[z]][j+dx[z]] == a[i][j]+1){

            i+= dy[z];
            j+= dx[z];

            return true;
        }
    }

    return false;
}

int main(){
    fi>>n>>m;
    int r,c;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            fi>>a[i][j];
            // b[i][j] = a[i][j];

            if(a[i][j] == 1){
                r=i;
                c=j;
            }
        }
    }

    int cnt=0;

    while(a[r][c] != n*m){
        if(availablePath(r,c) == true){
            cnt++;
        }
        else{
            break;
        }
    }
        

    if(cnt == m*n -1){
        out<<"true"<<endl;
    }
    else{
        out<<"false"<<endl;
    }
}