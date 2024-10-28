#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> line(3);
    for(int i=0; i<3; i++){
        cin>>line[i];
    }
    sort(line.begin(),line.end());

    int a = line[0],b=line[1],c=line[2];
    int mmin,mmax;
    if(2*b == a+c){
        mmin = 0; mmax = 0;
    }
    else{
        if (c - b == 2 || b - a == 2) 
            mmin = 1;
        else 
            mmin = 2;
        mmax = max(c - b, b - a) - 1;
    }

    cout << mmin << "\n" << mmax;
    return 0;
}