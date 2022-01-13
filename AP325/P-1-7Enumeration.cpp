/*輸入 n 個正整數，請計算其中有多少組合的相乘積除以 P 的餘數為 1，每個數字可以
選取或不選取但不可重複選，輸入的數字可能重複。P=10009，0<n<26。
輸入第一行是 n，第二行是 n 個以空白間隔的正整數。
輸出有多少種組合。若輸入為{1, 1, 2}，則有三種組合，選第一個 1，選第 2 個
1，以及選兩個 1。
time limit = 1 sec。
*/

#include <bits/stdc++.h>

#define int long long
#define PI 3.1415926535897932384626433832795028841971

using namespace std;

signed main(){
    int n, ans = 0;
    int P = 10009, arr[26];
    cin>>n>>arr[0];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for (int s=1; s< (1<<n); s++) { // for each subset s
        int prod=1;
        for (int j=0;j<n;j++) { // check j-th bit
            if (s & (1<<j)) // if j-th bit is 1
                prod = (prod*arr[j])%P; // remember %
        }
    if (prod==1) ans++;
    }
cout<<ans<<endl;

return 0;
}