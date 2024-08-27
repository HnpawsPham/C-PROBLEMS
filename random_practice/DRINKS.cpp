#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    double sum = 0.0;
    for(int i = 0;i<n;i++){
        double x;
        cin>>x;
        sum+=x;
    }

    cout<<fixed<<setprecision(11)<<(double)sum/n<<endl;

    return 0;
}