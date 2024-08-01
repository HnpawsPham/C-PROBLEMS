#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\REWARD.INP"),
        out(".\\txt\\REWARD.OUT");

int n,x,y;
long long board[10000][10000];

int dirx[4] = {-1,0,0,1};
int diry[4] = {0,-1,1,0};

string ins;

void makeBoard(){
    board[0][0] = 1;
    long long cnt= 1;
    int j=1,i=0, endpoint_i=1, endpoint_j = 0, temp=1;

    while(i<n-1 || j<n){     
        if(i != endpoint_i && j!= endpoint_j){
            if(i<n && j<n) cnt++;
            board[i][j] = cnt;  

            if(endpoint_i == 0){
                i--;
                j++;
            }
            else{
                i++;
                j--;
            } 
        }
        else{
            if(temp<n){
                temp++;
                cnt++;
            }
            board[i][j] = cnt;

            if(i == 0 && j < n-1){
                j++;
            }
            else if(j == 0 && i < n-1){
                i++;
            }
            else if(j >= 0 && i < n){
                j++;
            }
            else if(i >= 0 && j < n){
                i++;
            }

            if(endpoint_i == 0){
                endpoint_i = temp;
                endpoint_j = 0;
            }
            else{
                endpoint_i = 0;
                endpoint_j = temp;
            } 
        }
    }
}

void printBoard(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            out<<board[i][j]<<" ";
        }
    out<<endl;
    }
}


int step(char ch){
    switch (ch)
    {
    case 'S':
        return 3;
        break;
    case 'N':
        return 0;
        break;
    case 'W':
        return 1;
        break;
    case 'E':
        return 2;
        break;
    default:
        break;
    }
}


int main(){
    fi>>n>>x>>y;
    fi>>ins;

    makeBoard();
    
    // pick rewards
    long long sum=0;
    for(int i=0; i<ins.length(); i++){
            sum+=board[x-1][y-1];
            board[x-1][y-1]=0;

            x+=dirx[step(ins[i])];
            y+=diry[step(ins[i])];
    }

    out<<sum<<endl;
}