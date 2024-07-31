#include <iostream>
using namespace std;

int cal(int n){
    int rem;
    int num = 0;

 while(n!=0){
        rem=n%2;
        num = num*10 + rem;
        n = n / 2;
    }
    return num;
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    cout<<cal(n);
}
