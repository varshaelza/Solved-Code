#include <iostream>

using namespace std;

int r1,r2,c1,c2;

int main() {
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2&&c1==c2){
        cout<<0<<endl;
    }else if((r1+c1)%2!=(r2+c2)%2){
        cout<<-1<<endl;
    }else if(abs(r2-r1)==abs(c2-c1)){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
    return 0;
}
