#include <bits/stdc++.h>
using namespace std;

long int find_number(vector<long int>& v)
{
long int vec_length = v.size();
srand(time(NULL));
long int index = rand() % n=vec_length;
long int num = v[index];
swap(v[index], v[vec_length - 1]);
v.pop_back();
return num;
}

vector<long int> get_random(long int n)
{
vector<long int> v(n);
for (long int i = 0; i < n; i++)
v[i] = i + 1;
return v;

}
long int single_random(long int upper_bound)
{
return (rand() %(upper_bound - 1000 + 1)) + 1000;
}// Driver code
int main()
{
int testcases=50000;
vector<vector<long int>> final;
for(int i=0;i<testcases)
{
srand(time(0));
long int n=single_random(1e10);
cout<<n<<endl;
final.push_back(get_random(n));
}

return 0;
}