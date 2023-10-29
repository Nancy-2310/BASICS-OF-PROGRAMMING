#include<iostream>
#include<math.h>
    using namespace std;
        int swap(int *x , int *y){
                int temp=*x;
                *x=*y;
                *y=temp;
                cout<<x<<" "<<y<<endl;
                }  
    int main(){
        int x=3;
        int y=4;
        swap(&x,&y);
        int* p=&x;
        int *q=&y;
        *p=6;
        cout<<p<<endl;
        p=p+1;
        cout<<p<<endl;
        p=p+1;
        cout<<p<<endl;
        p=p+1;
        bool flag= true;
        bool *c=&flag;
        cout<<*c<<endl;
        cout<<c<<endl;
        c=c+1;
        cout<<c<<endl;
        c=c+1;
        cout<<c<<endl;
        cout<<p<<endl;
        cout<<x<<endl;
        cout<<*p<<endl;
        (*p)++;
        cout<<*p<<endl;
        cout<<q<<endl;
        cout<<y<<endl;
        cout<<x<<" "<<y<<endl;
        return 0;
    }