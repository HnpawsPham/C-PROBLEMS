#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fi;
    fi.open("./txtFiles/b2.txt");
    int days,y,w,change;
    change=4;
    y=0;
    w=0;
    fi>>days;
    fi<<"\n";
    while (days>=365){
        if (y!=change){
            days-=365;
            y+=1;
        }
        else{
            days-=366;
            y+=1;
            change+=4;
        }
    }
    w=(y*48);
    if (y==1){
        if(days<=1){
            fi<<y<<" year "<<w<<" weeks"<<(w/7)<<" day";
        }
        else{
             fi<<y<<" year "<<w<<" week "<<(w/7)<<" days";
        }
    }
    else{
         if(days<=1){
            fi<<y<<" years "<<w<<" week "<<(w/7)<<"day";
        }
        else{
             fi<<y<<" years "<<w<<" week "<<(w/7)<<"days";
        }
   }
}