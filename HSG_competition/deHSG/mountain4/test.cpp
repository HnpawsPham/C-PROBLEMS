#include <bits/stdc++.h>
using namespace std;


int n = 4, k = 3, index=0;
int a[1000] = { 6, 7, 6, 5 },
r[10000]={0}; 
string save[10000] = {""};

void findSubArr(){
	int pos,j=1;

	for(int i=0; i+k-1<n; i++){	
		pos=i;

		while(pos+k-1<n){
			save[index]+= to_string(a[i]);
			r[index]=a[i];

			while(j<k){
				save[index]+= to_string(a[pos+j]);
				r[index] = max(r[index], a[pos+j]);
				j++;
			}

			pos++;
			index++;
			j=1;
		}
	}
}

int main ()
{

	findSubArr();

	int sum=0;


	for(int i=0; i<index; i++){
		cout<<save[i]<<endl;
		sum+=r[i];
	}

	cout<<"sum: "<<sum<<endl;
}