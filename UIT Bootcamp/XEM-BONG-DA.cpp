#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

struct team{
    ll point, minus, win, fairplay;
    team(int point1, int minus1, int win1, int fairplay1) : point(point1), minus(minus1), win(win1), fairplay(fairplay1) {};
};

void inp(team& t){
    ll lose = 0;

    for(int i = 0;i<3;i++){
        ll a, b, c;
        cin>>a>>b>>c;

        if(a == b) t.point++;
        if(a > b) t.point += 3;
        lose += b;

        t.fairplay += c;
        t.win += a;
    }
    t.minus = t.win - lose;

    return;
}

team res(team t1, team t2){
    if(t1.point != t2.point)
        if(t1.point > t2.point) return t1; else return t2;
    if(t1.minus != t2.minus)
        if(t1.minus > t2.minus) return t1; else return t2;
    if(t1.win != t2.win)
        if(t1.win > t2.win) return t1; else return t2;
    if(t1.fairplay < t2.fairplay) return t1;

    return t2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    team t1(0, 0, 0, 0), t2(0, 0, 0, 0);
    inp(t1);
    inp(t2);

    team winner = res(t1, t2);
    cout<<winner.point<<" "<<winner.minus<<" "<<winner.win<<" "<<winner.fairplay<<el;

    return 0;
}