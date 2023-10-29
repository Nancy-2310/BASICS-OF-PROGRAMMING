#include<iostream>
#include<math.h>
int b=7;
    using namespace std;
        int gcd(int x , int y){
            int gcd=1;
            for(int i=min(x,y);i>0;i--){
                if(x%i==0 && y%i==0){
                gcd=i;
                break;
                }
            } 
            cout<<gcd<<endl;
            cout<<b<<endl;
                }  
    int main(){
        int x=6;
        int y=12;
        b=5;
        gcd(x,y);
        
        return 0;
    }