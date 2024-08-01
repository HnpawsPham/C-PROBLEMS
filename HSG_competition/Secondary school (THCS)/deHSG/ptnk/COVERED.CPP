#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\COVERED.INP");

int xx1,yy1,xx2,yy2,xx3,yy3,xx4,yy4;
int minn=1000001;

long long min(long long a, long long b){
    if(a<b){
        return a;
    }
    return b;
}

void findMinLength(int xx1, int yy1, int xx2, int yy2){
    minn = min(minn, sqrt( pow((xx2-xx1),2) + pow((yy2-yy1),2) ));
}

int main(){
    fi>>xx1>>yy1>>xx2>>yy2>>xx3>>yy3>>xx4>>yy4;

    // xét tất cả trường hợp (16)
    findMinLength(xx1,yy2,xx4,yy4);
    findMinLength(xx1,yy2,xx4,yy3);
    findMinLength(xx1,yy2,xx3,yy3);
    findMinLength(xx1,yy2,xx3,yy4);

    findMinLength(xx2,yy2,xx3,yy4);
    findMinLength(xx2,yy2,xx3,yy3);
    findMinLength(xx2,yy2,xx4,yy3);
    findMinLength(xx2,yy2,xx4,yy4);

    findMinLength(xx1,yy1,xx3,yy3);
    findMinLength(xx1,yy1,xx4,yy3);
    findMinLength(xx1,yy1,xx3,yy4);
    findMinLength(xx1,yy1,xx4,yy4);

    findMinLength(xx2,yy1,xx3,yy3);
    findMinLength(xx2,yy1,xx4,yy3);
    findMinLength(xx2,yy1,xx3,yy4);
    findMinLength(xx2,yy1,xx4,yy4);

    cout<<minn*minn<<endl;
}