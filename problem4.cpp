#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m;
	cin>>m;
	if(m=="january"||"march"||"may"||"july"||"august"||"october"||"december")
	cout<<"31 days";
	else if(m=="february")
	cout<<"29 or 28 days";
	else
	cout<<"30 days";
	return 0;
}
