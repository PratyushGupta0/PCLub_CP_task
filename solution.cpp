#include <bits/stdc++.h>
using namespace std;
#include <vector>
#define ar array
#define ll long long
#define input(n) long int n; cin >> n;
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

long int find_minima(long int n,long int l,long int r)
{
    long int center=(l+r)/2,next,prev,curr;
    cout<<"? "<<center;
    cin>>curr;
    if(center==n-1) next=n+1;
    else {  
        cout<<"? "<<center+1;
    cin>>next;}
    if(center==0) prev=n+1;
    else {  
        cout<<"? "<<center-1;
    cin>>prev;}

    if ((center == 0 || prev > curr))           
        return center;
    else if ((center == n-1 || next > curr))
        return center;
    else if (center > 0 && prev < next)
        return find_minima(n, l, (center -1)); 
    return find_minima(n, (center + 1), r);
}
long int find_maxima(long int n,long int l,long int r)
{
    long int center=(l+r)/2,next,prev,curr;
    cout<<"? "<<center;
    cin>>curr;
    if(center==n-1) next=-1;
    else {  
        cout<<"? "<<center+1;
    cin>>next;}
    if(center==0) prev=-1;
    else {  
        cout<<"? "<<center-1;
    cin>>prev;}

    if ((center == 0 || prev < curr))           
        return center;
    else if ((center == n-1 || next < curr))
        return center;
    else if (center > 0 && cprev > next)
        return find_maxima(v,n, l, (center -1)); 
    return find_maxima(v,n, (center + 1), r);
}


int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
        input(n);
        while(n--)
        {
            //Minima
            long int length;
            cin>>length;
            cout<<"A "<<find_minima(length,0,length-1);
            cout<<"B "<<find_maxima(length,0,length-1);
        }
}
