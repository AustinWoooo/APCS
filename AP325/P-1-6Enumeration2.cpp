/*���]�}�C A[1..n]���s��۬Y�Ǿ�ơA�t�~���F�@�Ӿ�� K�A�Эp����@�ӳs���
�q���M�̱��� K �Ӥ��W�L K�C
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