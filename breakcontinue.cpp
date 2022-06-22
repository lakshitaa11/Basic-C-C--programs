//print no.s from 1 to 100 but skip the no.s in between which are divisible by 3
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i <= 100; i++){
        if(i%3 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

//take a no. n  from user and check if its prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(i = 2; i < n; i++){
        if(n%i == 0){
            cout<<"Non-Prime"<<endl;
            break;
        }
    }
    if(i == n){
        cout<<"Prime"<<endl;
    }
    return 0;
}
*/
//print all prime numbers between a and b
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int num;
    for(num = a; num <= b; num++){
        int i;
        for(i = 2; i < num; i++){
            if(num%i == 0){
                break;
            }
        }
        if(num == i){
            cout<<num<<endl;
        }
    }
    return 0;
}