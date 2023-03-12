#include<bits/stdc++.h>
using namespace std;

int a[100],n;
void in(){
	for(int i=0;i<n;i++)
		cout << a[i]<<" ";
	cout << "\n";
}
void Try(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i==n-1)
			in();
		else
			Try(i+1);
	}
}
void process(){
	cin >> n;
	Try(0);
}
int main(){
	int t;
	cin >> t;
	while(t--)
		process();
}
