/*��J n �ӥ���ơA�Эp��䤤���h�ֲզX���ۭ��n���H P ���l�Ƭ� 1�A�C�ӼƦr�i�H
����Τ���������i���ƿ�A��J���Ʀr�i�୫�ơCP=10009�A0<n<26�C
��J�Ĥ@��O n�A�ĤG��O n �ӥH�ťն��j������ơC
��X���h�ֺزզX�C�Y��J��{1, 1, 2}�A�h���T�زզX�A��Ĥ@�� 1�A��� 2 ��
1�A�H�ο��� 1�C
time limit = 1 sec�C
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