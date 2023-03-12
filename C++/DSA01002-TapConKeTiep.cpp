#include<bits/stdc++.h>
using namespace std;

void process(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<k;i++)
        cin >> a[i];
    int i = k-1;
    while(a[i]==n-k+i+1)
        i--;
    if(i>=0){
        a[i]++;
        for(int j=i+1;j<k;j++)
            a[j] = a[j-1]+1;
    }else{
        a[0]=1;
        for(int j=1;j<k;j++)
            a[j] = a[j-1]+1;
    }
    for(int i=0;i<k;i++)
        cout << a[i]<<" ";
    cout <<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        process();
    }
}