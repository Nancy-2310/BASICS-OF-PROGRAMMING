#include<iostream>
#include<math.h>
    using namespace std;
        // int swap(int x , int y){
        //         int temp=x;
        //         x=y;
        //         y=temp;
        //         cout<<x<<" "<<y<<endl;
        //         }  
    int main(){
        int x=3;
        int y=4;
        // swap(x,y);
        // int* p=&x;
        int *p=&x,*q=&y;
        *p=6;
        cout<<p<<endl;
        cout<<*p<<endl;
        cout<<q<<endl;
        cout<<*q<<endl;
        //cout<<x<<" "<<y<<endl;
        return 0;
    }