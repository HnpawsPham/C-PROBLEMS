#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CHONQUA.INP"),
    out(".\\txt\\CHONQUA.OUT");

int d, r, k, sl = 0;
char a[10000][10000];

// neu la * thi cong so luong cho 1
int checkChar(int col,int start)
{
    int res=0;
    for (int i = col+1; i <= k/2 + col; i++)
    {
        for (int j = start+1; j <= k/2 + start; j++)
        {
                if (a[i][j] == '*')
                {
                    res++;
                }
            }
    }
    return res;
}

void runthrough(){
    for(int i=0; i<d; i++){
        for(int j=0; j<r; j++){
            if(i+k-1 <= d && j+k-1 <= r){
                sl=max(checkChar(i,j),sl);
            }
        }
    }
}

int main()
{
    fi >> d >> r >> k;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < r; j++)
        {
            fi >> a[i][j];
        }
    }

    // khung vot = k*k;
    runthrough();
    out << sl << endl;

    fi.close();
    out.close();
}