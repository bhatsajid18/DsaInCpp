#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> m; //first: key   and   second: value

    m[8]=2; //value 2 is stored at key 8
    cout<<m[8]<<endl;
    return 0;
}