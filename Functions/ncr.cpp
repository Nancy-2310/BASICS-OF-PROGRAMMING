#include<iostream>
#include<math.h>
    using namespace std; 
        int fact(int n){
            int fact =1;
            for(int i=2;i<=n;i++){
                fact=fact*i;
            }
            return fact;
        }
        int combination(int n , int r){
            int ncr=fact(n)/(fact(r)*fact(n-r));
            return ncr;
        }
    int main(){

            int n,r;
            cin>>n>>r;
            int ncr=combination(n,r);
            cout<<ncr<<endl;
        return 0;
    }