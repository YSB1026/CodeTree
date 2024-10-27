#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    //BS처럼 생각하면 되지 않을까?
    //int second = 0, first = 1,third = 2;
    //처음엔 BST처럼 만들려했는데 굳이 그럴필요가 없을거같음.

    //왼쪽 끝에 있는 사람만 move
    int arr[3] = {a,b,c};
    int left,mid,right;
    int cnt = 0;
    while(1){
        left = arr[0]; mid = arr[1]; right = arr[2];
        if(left + right == 2*mid) break;
        int go = (mid + right)%2 ? (mid + right)/2 + 1 : (mid + right)/2;
        cnt++;
        arr[0] = mid;
        arr[1] = go;
    }
    cout << cnt << "\n";
    
    //오른쪽 끝에 있는 사람만 move
    arr[0] = a; arr[1]=b; arr[2]=c;
    cnt = 0;
    while(1){
        left = arr[0]; mid = arr[1], right = arr[2];
        if(left + right == 2*mid) break;
        int go = (left+mid)%2 ? (left+mid)/2 + 1 : (left+mid)/2;
        cnt++;
        arr[2] = mid;
        arr[1] = go;
    }
    cout << cnt;
    return 0;
}