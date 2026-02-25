#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    long long result=0;
    if (n%2==0){
        result=n/2;
    }
    else
        result=-(n+1)/2;
        /* code */
    
    cout<<result;
    
    
    return 0;
}
