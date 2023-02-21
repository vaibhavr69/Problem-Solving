//1793B. Fedya and Array
//Problem Link: https://codeforces.com/contest/1793/problem/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;

bool prime(int n)
{
    vector<int> prime(n+1,true);
    prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<=n;j+=i) prime[j]=false;
        }
    }
    if(prime[n]==true) return true;
    else return false;
}

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int x,y;
        cin>>x>>y;

        cout<<(x-y)*2<<endl;

        for(int i=x;i>=y;i--) cout<<i<<" ";

	    for(int i=y+1;i<=x-1;i++) cout<<i<<" ";
    }

    return 0;
}

