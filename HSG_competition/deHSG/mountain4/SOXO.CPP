#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\SOXO.INP"),
    out(".\\txt\\SOXO.OUT");

int n, k, index = 0,sum=0;
int a[1000000]={1,4,5,8,9,8}, r[1000000];
string save[1000000];

// tim doan con + tim max
void findSubArr()
{
    int pos,j=1;

	for(int i=0; i+k-1<n; i++){	
        cout<<i<<endl;
		pos=i;

		while(pos+k-1<n){
			save[index]+= to_string(a[i]);
			r[index]=a[i];

			while(j<k){
				save[index]+= to_string(a[pos+j]);
				r[index] = max(r[index], a[pos+j]);
				j++;
			}

            if(j==n){
                pos++;
                j=1;
            }
            
			index++;
		}
	}
}
int main()
{
    // nhap du lieu
    fi >> n >> k;
    // for (int i = 0; i < n; i++)
    // {
    //     fi >> a[i];
    // }

    findSubArr();

    // cong tat ca cac phan tu max cua doan con
    for (int i = 0; i < index; i++)
    {
        sum += r[i];
        cout << save[i] << endl;
    }
    out << sum << endl;

    fi.close();
    out.close();
}