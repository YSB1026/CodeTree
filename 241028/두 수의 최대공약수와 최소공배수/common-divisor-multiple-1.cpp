#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b){
    if(a < b){
        swap(a,b);
    }

    while(b){
        int tmp = a%b;
        a = b;
        b = tmp;
    }

    return a;
}
int LCM(int a, int b){
    return a*b/GCD(a,b);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    cout << GCD(a,b) << " " <<LCM(a,b);
    return 0;
}