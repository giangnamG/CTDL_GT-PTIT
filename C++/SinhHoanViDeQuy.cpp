#include<bits/stdc++.h>
using namespace std;

int a[100],checked[100]={0},n;
void in(){
	for(int i=1;i<=n;i++)
		cout << a[i]<<" ";
	cout <<"\n";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!checked[j]){
			a[i]=j;
			checked[j]=1;
			if(i==n)
				in();
			else
				Try(i+1);
			checked[j]=0;
		}
	}
}
void process(){
	cin >> n;
	Try(1);
}
int main(){
	int t;
	cin >> t;
	while(t--)
		process();
}
