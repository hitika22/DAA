// recursive solution

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll  fun(ll m, ll n) 
{ 
    if (m < n) 
        return 0; 
    if (n == 0) 
        return 1; 
    return fun(m-1, n) + fun(m/2, n-1); 
} 
int main() 
{ 
    ll m,n;
    cout<<"Input numbers m and n:";
    cin>>m>>n;
   
   cout<<"The total number of possible sequences that we get are:"<<fun(m,n);
    return 0; 
}
