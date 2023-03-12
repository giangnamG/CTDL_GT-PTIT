#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
	for(int i=0;i<n;i++){
		int min_index =i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min_index])
				min_index=j;
		if(min_index!=i)
			swap(a[min_index],a[i]);
	}
}
int main(){
	int a[10]={6,2,7,3,1,5,9,8,4,10};
	int n =sizeof(a)/sizeof(a[0]);
	selection_sort(a,n);
	for(int i=0;i<n;i++)
		cout << a[i]<<" ";
}
