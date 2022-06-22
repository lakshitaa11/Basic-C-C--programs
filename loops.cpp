//for LOOP(print hello world 10 times)
/*
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0; i <= 10; i++){
        cout<<"Hello World\n";
    }
    return 0;
}
*/
//print the sum of all numbers upto n
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    int i;
    for(i=0; i <= n; i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}

//while LOOP
//take input from user until the user inputs a negative number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n >= 0){
        cin>>n;
    }
    return 0;
}
//do while LOOP
//take input from user until the user inputs a negative numbe
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    do{
        cin>>n;
    }while(n >= 0);
    return 0;
}
*/