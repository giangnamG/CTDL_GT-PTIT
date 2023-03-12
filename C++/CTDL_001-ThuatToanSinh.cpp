#include<bits/stdc++.h>

using namespace std;
int a[100],n;
int dx(){
    for(int i=1;i<=n/2;i++)
        if(a[i]!=a[n-i+1])
            return 0;
    return 1;
}
void in (){
    for(int i=1;i<=n;i++)
        cout << a[i] <<" ";
    cout << endl;
}

void Try(int i){
    for(int j=0;j<2;j++){
        a[i]=j;
        if(i==n){
            if(dx())
                in();
        }else 
            Try(i+1);
    }
}
int main(){
    cin >> n;
    Try(1);
}