#include<iostream>
using namespace std;
int main(){
        int p,t,r,si;
        cout<<"Enter principle amount:";
        cin>>p;
        cout<<"Enter time:";
        cin>>t;
        cout<<"Enter rate:";
        cin>>r;
        si=(p*t*r)/100;
        cout<<"Simple Interset="<<si;
        return 0;
}

