#include<iostream>
using namespace std;
int sum(int n){
    if(n>0){
        return sum(n-1)+n;
    }
    else
    return 0;
}
int main(){
    int a;
    cout<<"a :";
    cin>>a;
    cout<<"the sum of number is "<<sum(a)<<endl;
}