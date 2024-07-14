#include <bits/stdc++.h>
using namespace std;

void createFile(){
    string name;
    cout<<"Nhap ten file moi(mac dinh .txt): ";
    cin>>name;

    ofstream fi(".\\txt\\"+name+".txt");
    cout<<"Nhap vao cac ki tu, ket thuc bang ki tu 0: "<<endl;

    char ch;
    while(true){
        cin>>ch;
        if(ch == '0'){
            fi.close();
            exit(false);
        }
        fi<<ch;
    }
}

void printFile(){
    string name;
    cout<<"Nhap ten file de hien thi noi dung: ";
    cin>>name;

    fstream fi(".\\txt\\"+name+".txt");
    while(!fi.eof()){
        string str;  
        fi>>str;
        cout<<str;
    }
    fi.close();
}

void addToFile(){
    string name;
    cout<<"Nhap ten file can noi them: ";
    cin>>name;

    ofstream fi(".\\txt\\"+name+".txt");
    cout<<"Nhap vao cac ki tu de noi vao file cho truoc ket thuc bang ki tu 0: "<<endl;
    while(true){
        char ch;
        cin>>ch;
        if(ch==0){
            exit (false);
        }
        fi<<ch;
    }
    fi.close();
}

void findDuplicate(){
    string name;
    cout<<"Nhap ten file de tim noi dung cua file: ";
    cin>>name;

    fstream fi(".\\txt\\"+name+".txt");
    cout<<"Nhap ki tu can tim: ";
    char ch;
    cin>>ch;

    int sum=0;
    while(!fi.eof()){
        char chr;
        fi>>chr;
        if(chr == ch){
            sum++;
        }
    }
    cout<<"so lan xuat hien cua ki tu "<<ch<<" trong file la: "<<sum;
}

int main(){
    int choice;

    cout<<"MENU"<<endl;
    cout<<"1. Tao file moi va nhap noi dung cho file do"<<endl;
    cout<<"2. Xuat noi dung mot file ra man hinh"<<endl;
    cout<<"3. Ghi noi them vao mot file"<<endl;
    cout<<"4. Tim so lan xuat hien cua mot ki tu trong 1 file \n"<<endl;
    cout<<"Ban chon tu 1-4: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        createFile();
        break;
    
    case 2:
        printFile();
        break;
    case 3:
        addToFile();
        break;
    case 4:
        findDuplicate();
        break;
    default:
        break;
    }
}