#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1000000;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1, 9);

    vector<int> A(n);
    for (int& num : A) {
        num = distribution(gen);
    }

    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }


    return 0;
}