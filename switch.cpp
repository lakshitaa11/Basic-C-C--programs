//simple calculator
#include<iostream>
using namespace std;
int main(){
    int n1, n2, a;
    cout<<"Input two numbers:";
    cin>>n1>>n2;

    char op;
    cout<<"Enter operator:";
    cin>>op;
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 <<endl;
        break;    
    default:
        cout << "Invalid input!";
        break;
    }
    return 0;
}