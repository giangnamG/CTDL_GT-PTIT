#include<bits/stdc++.h>
using namespace std;

void process(){
    string a;
    cin >> a;
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='1'){
            a[i]='0';
        }else{
            a[i]='1';
            break;
        }
    }
    cout << a<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        process();
    }
}