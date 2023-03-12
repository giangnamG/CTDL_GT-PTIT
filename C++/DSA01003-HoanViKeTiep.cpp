#include<bits/stdc++.h>
using namespace std;

int a[1000];
int n;
void in(){
    for(int i=0;i<n;i++)
        cout << a[i]<<" ";
    cout <<"\n";
}
void process(){

    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    int i = n-1;
    while(i>0&&a[i-1]>a[i])
        i--;
    if(i>0){
        for(int j=n-1;j>=i;j--)
            if(a[i-1]<a[j]){
                swap(a[i-1],a[j]);
                
                break;
            }
    sort(a+i,a+n);
    }else{
        for(int i=n-1;i>=0;i--)
            cout << a[i]<<" ";
        cout <<"\n";
    }
    
    in();
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        process();
    }
    
}