#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        
        cout<<(n/x) * x +y<<endl;
    }
    return 0;
}