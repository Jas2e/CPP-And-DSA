#include<iostream>
using namespace std;

int main(){
     int a,b,swap;
     cout<<"Enter Two Number:"<<endl;
     cin>>a>>b;
     swap=a;
     a=b;
     b=swap;
     cout<<"swapping are:"<<a <<" "<<swap<<endl;

    return 0;
}