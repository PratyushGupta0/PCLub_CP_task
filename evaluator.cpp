
#include <bits/stdc++.h>
using namespace std;

long int n;
vector<long int> v(n);

bool check_minima(vector<long int> v, long int index)
{
	if(index==1){
		if 	(v[0]<v[1]) return true;
		else return false;}
	if(index==n-1){
		if (v[n-1]<v[n-2]) return true;
		else return false;}

	if((v[index-1]<v[index]) &&(v[index-1]<v[index-2])) return true;
	else return false;

}
bool check_maxima(vector<long int> v, long int index)
{
	if(index==1){
		if (v[0]>v[1]) return true;
		else return false;}
	if(index==n-1){
		if (v[n-1]>v[n-2]) return true;
		else return false;
		}
	if((v[index-1]>v[index]) &&(v[index-1]>v[index-2])) return true;
	else return false;

}
int main()
{
	int count=0;
	int flag=1;
	while(count<300)
	{
	char c;
	cin>>c;
	if(c=='?')
	{
		long int query;
		cin>>query;
		cout<<v[query]<<endl;
	}
	else if(c=="A")
	{
		long int query;
		cin>>query;
		if(check_minima(v,n)) flag=1;
		else flag=0;
	}
	else if(c=='B')
	{
		long int query;
		cin>>query;
		if(check_maxima(v,n)) flag=1;
		else flag=0;
		break;
	}
}
if(flag==1) cout<<"OK"<<endl;
return 0;
}