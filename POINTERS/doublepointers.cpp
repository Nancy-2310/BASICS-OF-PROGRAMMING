#include<iostream>
#include<math.h>
    using namespace std; 
    int main(){
        int x=3;
        int *p=&x;
        *p=6;
        int **ptr=&p;
        int ***ptr2=&ptr;
        cout<<ptr2<<endl;
        cout<<&ptr<<endl;
        cout<<p<<endl;
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        cout<<**ptr<<endl;
        cout<<*p<<endl;
        return 0;
    }