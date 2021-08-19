#include <bits/stdc++.h>
using namespace std;

long int find_number(vector<long int>& v)
{
    srand(time(NULL));
    long int index=(rand()) % v.size();
    long int num = v[index];
    long int x=v[index];
    v[index]=x;
    v[vec_length-1]=x;
    v.pop_back();
    return num;
}

vector<long int> get_random(long int n)
{
    vector<long int> v(n);
    for (long int i = 0; i < n; i++){
       v[i] = i + 1;}
    return v;

}
long int single_random(long int upper_bound)
{
    return (rand() %(upper_bound - 100 + 1)) + 100;
}
int main()
{
    int testcases=50000;
    vector<vector<long int>> final;
    for(int i=0;i<testcases;++i)
    {
        srand(time(0));
        long int n=single_random(1e10);
        cout<<n<<endl;
        final.push_back(get_random(n));
    }

    return 0;
}
