#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool display(){
    char cal;
    float num1,num2;
    cout<<"Enter an arithmetic operation (+,-,*,/) : ";
    cin>>cal;
    cout<<"Enter the first numbers: ";
    cin>>num1;
    cout<<"Enter the second numbers: ";
    cin>>num2;
    switch(cal){
        case '+':
        cout<<"Addition result is : "<<num1+num2<<endl;
        break;
        case '-':
        cout<<"Subtraction result is : "<<num1-num2<<endl;
        break;
        case '*':
        cout<<"Multiplication result is : "<<num1*num2<<endl;
        break;
        case '/':
        if(num2!=0){
            cout<<"Division result is : "<<num1/num2<<endl;
        }else{
            cout<<"Error! Division by Zero. "<<endl;
        }
        break;
        default:
        cout<<"Invalid Operation!"<<endl;
        break;
    }
}
signed main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}
