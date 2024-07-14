#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream inp,out;
    inp.open("input.txt");
    out.open("output.txt");
    string n;
    inp>>n;
    out<<n;
    out.close();
}