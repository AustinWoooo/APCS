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
    for(int i = 0 ; i < size ; i++){
        for(int j = i ; j <= 20 ; ){
            int sum = 0;
            for(int r = i ; r <=j ; r++){
                sum += A[r];
            }
            if(sum<=k && k-sum<best){
                best = k - sum;
            }
        }
    }
    cout <<  best;
    
}   