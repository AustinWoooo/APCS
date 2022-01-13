/*假設陣列 A[1..n]中存放著某些整數，另外給了一個整數 K，請計算哪一個連續區
段的和最接近 K 而不超過 K。
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;
    int A[20];
    int size;
    cin>>size;
    for(int i = 0 ; i < size ; i++){
        cin>>A[i];
    }
    int best = k;
    for(int i = 0 ; i <= size ; i++){
        int sum = 0;
        for(int j = i ; j <= size ; j++){
            sum += A[j];
            if(sum <= k && k-sum < best){
                best  = k-sum;
            }
        }
    }
    cout<<best<<endl;
}