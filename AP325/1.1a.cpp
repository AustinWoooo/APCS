#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int eval(){
    int val, x, y, z ;
    char token[7];
    cin>>token;
    if(token[0]=='f'){
        x = eval();
        return 2*x-1;
    }
    else if(token[0]=='g'){
        x = eval();
        y = eval();
        return x + 2*y -3;
    }
    else{
        return atoi(token);
    }
}

int main(){
    cout<<eval()<<endl;
    return 0;
}