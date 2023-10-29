#include<iostream>
#include<math.h>
    using namespace std;
        void firstlast(int num,int *p1, int *p2){
            *p2=num%10;
            while(num>9){
                *p1=num/10;
                num/=10; 
            }
        }  
    int main(){
        
        int num;
        cout<<"enter the number"<<endl;
        cin>>num;
        int first, last;
        int *ptr1=&first;
        int *ptr2=&last;
        firstlast(num, ptr1, ptr2);
        cout<<first<<" "<<last<<endl;
        return 0;
    }