//CHECK IF THE NUMBER IS PRIME OR NOT
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     bool flag = 0;

//     for(int i = 2; i <= sqrt(n); i++){
//         if(n%i == 0){
//             cout << "Non-Prime" << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0){
//         cout << "Prime" << endl;
//     }
//     return 0;
// }

//REVERSE A NUMBER N(PALINDROME)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
    
//     int reverse = 0;
//     while(n > 0){
//         int lastdigit = n % 10;
//         reverse = reverse*10 + lastdigit;
//         n = n/10;
//     }

//     cout << reverse << endl;
//     return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int sum = 0;
    int originaln = n;
    while(n>0){
        int lastdigit = n % 10;
        sum+= lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(sum == originaln){
        cout << "Armstrong Number" << endl;
    }
    else{
        cout << "Not an Armstrong Number" << endl;
    }
    return 0;
}