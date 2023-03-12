#include<bits/stdc++.h>
using namespace std;
int n,k,bin[100],dem = 0,a[100];
void process(){
    int sum = 0;
    for(int i=1;i<=n;i++)
        if(bin[i])
            sum+=a[i];
    if(sum==k){
        dem ++;
        for(int i=1;i<=n;i++)
            if(bin[i])
                cout << a[i]<<" ";
        cout << "\n";
    }
}
void Try(int i){
    for(int j=0;j<2;j++){
        bin[i]=j;
        if(i==n)
            process();
        else
            Try(i+1);
    }
}
int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    Try(1);
    cout << dem;
}