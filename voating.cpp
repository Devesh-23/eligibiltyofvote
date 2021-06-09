#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age: "<<endl;
    cin>>age;
    if(age>18){
        cout<<"You are eligible to give vote "<<endl;
    }
    else if(age<18){
        cout<<"You are not elegible to give vote "<<endl;
    }
    else{
        cout<<"You are just 18, voting first time "<<endl;
    }
    return 0;
}