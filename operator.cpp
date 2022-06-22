//logical operator
//WAP to output whether a number is divisible by both 2 and 3 or just one of them
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2 == 0 && n%3 == 0 ){
        cout<<"Number is divisible by both 2 and 3"<<endl;
    }
    else if(n%2 == 0 || n%3 ==0){
        cout<<"Number is divisible by one of them"<<endl;
    }
    else{
        cout<<"Divisible by none"<<endl;
    }
    return 0;
}
*/
//conditional opertaor(condition?x:y)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    (n>10)? cout<<"n is greater than 10": cout<<"n is smaller than 10";
    return 0;
}
