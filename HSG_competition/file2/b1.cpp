#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;

void lowerCase(){
    char ch;
    cout<<"Nhap mot ky tu: "<<endl;
    cin>>ch;

    cout<<"Ky tu sau khi chuyen sang chu thuong: "<< char(tolower(ch));
}

void pt1an(){           //ax + b =0
    int a,b;
    cout<<"Nhap lan luot hai so a va b: "<<endl;
    cin>>a;
    if(a ==0){
        cout<<"So a khong hop le!";
        return;
    }
    cin>>b;
    cout<<"Phuong trinh "<<a<<"x + "<<b<<" = 0 co nghiem la x ="<<(float)-b/a;
}

void ptbac2(){  //ax2+bx+c=0
    int a,b,c,delta;

    cout<<"Nhap so a: "<<endl;
    cin>>a;
    cout<<"Nhap so b:"<<endl;
    cin>>b;
    cout<<"Nhap so c:"<<endl;
    cin>>c;

    delta = pow(b,2) - 4*a*c;
    if(delta < 0){
        cout<<"Phuong trinh da cho vo nghiem";
    }
    else if(delta > 0){
        cout<<"Phuong trinh da cho co 2 nghiem phan biet la : x1 = "<<(float)(-b+sqrt(delta))/2*a<<"; x2 = "<<(float)(-b-sqrt(delta))/2*a;
    }
    else{
        cout<<"Phuong trinh da cho co 2 nghiem kep la x1 = x2 ="<<(float)(-b)/2*a;
    }

}

void replace(){
    int a,b,t;
    cout<<"Nhap lan luot hai so a va b: "<<endl;
    cin>>a;
    cin>> b;

    t=a;
    a=b;
    b=t;
    cout<<"Gia tri cua a va b sau khi da hoan vi lan luot la: "<<a<<" va "<<b;
}
void findMin(){
    int arr[4], min;
    cout<<"Nhap lan luot 4 so nguyen: "<< endl;
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];

    min = arr[0];
    for(int i=1; i< sizeof(arr) / sizeof(int); i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"Gia tri nho nhat trong 4 so nguyen tren la: "<<min;

}

void sort(){
    int arr[4],t;
    cout<<"Nhap lan luot 4 so nguyen: "<< endl;
    for(int i=0; i< sizeof(arr) / sizeof(int); i++){
        cin>>arr[i];
    }

    for(int i=0; i< sizeof(arr)/sizeof(int); i++){
        for(int j = 0; j<sizeof(arr)/sizeof(int); j++){
            if(arr[j] < arr[i]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    cout<<"Sau khi sap xep 4 so tren tang dan: "<<endl;
     for(int i=0; i< sizeof(arr) / sizeof(int); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    char choice;
    cout<<"a). Ham doi mot ky tu hoa sang ky tu thuong;"<<endl;
    cout<<"b). Thu tuc giai phuong trinh bac nhat;"<<endl;
    cout<<"c). Thu tuc giai phuong trinh bac hai;"<<endl;
    cout<<"d). Ham xac dinh gia tri nho nhat cua 4 so nguyen;"<<endl;
    cout<<"e). Thu tuc hoan vi hai so nguyen;"<<endl;
    cout<<"f). Thu tuc sap xep 4 so nguyen tang dan."<<endl;
    cout<<"Chon mot trong cac lua chon tren: "<<endl;
    cin>>choice;

   if(tolower(choice) == 'a'){
        lowerCase();
   }
   else if(tolower(choice) == 'b'){
        pt1an();
   }
   else if(tolower(choice) == 'c'){
        ptbac2();
   }
   else if(tolower(choice) == 'd'){
        findMin();
   }
   else if(tolower(choice) == 'e'){
        replace();
   }
   else if(tolower(choice) == 'f'){
        sort();
   }
   else{
    cout<<"Khong co lua chon nao nhu vay";
   }
}