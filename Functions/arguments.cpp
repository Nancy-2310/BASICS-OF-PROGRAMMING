#include<iostream>
#include<math.h>
    using namespace std;
        int sum(int x , int y){
                cout<<x+y<<endl;
                cout<<&x<<endl;
                }  
    int main(){
        int x=3;
        int y=4;
        sum(x,y);
        cout<<&x<<endl;
        return 0;
    }