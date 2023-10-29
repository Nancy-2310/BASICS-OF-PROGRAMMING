#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the no. of pattern"<<endl;
        cin>>n;
        int nsp=n+1;
        for (int i=1;i<=n;i++){

            for (int j=1;j<=i;j++){
                cout<<(n-j+1); 
            }

            for (int j=1;j<=nsp;j++){
                cout<<(n-i+1);
    
            }
            if(i==n){
                for (int j=(i-1);j>0;j--){
                cout<<(n-j+1);
            }
            }
            else{
                for (int j=i;j>0;j--){
                cout<<(n-j+1);
            }
            }
            nsp-=2;
                cout<<endl;
            }
            nsp=1;
            for (int i=n-1;i>=1;i--){
            for (int j=1;j<=i;j++){
                cout<<(n-j+1); 
            }

            for (int j=1;j<=nsp;j++){
                cout<<(n-i+1);
    
            }
        
            for (int j=i;j>0;j--){
                cout<<(n-j+1);
            }
                nsp+=2;
                cout<<endl;
            }
            return 0;
        }
        
        