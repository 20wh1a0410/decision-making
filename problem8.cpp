#include<iostream>
using namespace std;
int main()
{
	string s;
	int n;
	cin>>s>>n;
	if((s=="december"&&n>=22)||(s=="january"&&n<=19))
	cout<<"capricon";
	else if((s=="january"&&n>=20)||(s=="february"&&n<=18))
	cout<<"aquarius";
	else if((s=="february"&&n>=19)||(s=="march"&&n<=20))
	cout<<"pisces";
	else if((s=="march"&&n>=21)||(s=="april"&&n<=19))
	cout<<"aries";
	else if((s=="april"&&n>=20)||(s=="may"&&n<=20))
	cout<<"taurus";
	else if((s=="may"&&n>=21)||(s=="june"&&n<=20))
	cout<<"gemini";
	else if((s=="june"&&n>=21)||(s=="july"&&n<=22))
	cout<<"cancer";
	else if((s=="july"&&n>=23)||(s=="august"&&n<=22))
	cout<<"leo";
	else if((s=="august"&&n>=23)||(s=="september"&&n<=22))
	cout<<"virgo";
	else if((s=="september"&&n>=23)||(s=="october"&&n<=22))
	cout<<"libra";
	else if((s=="october"&&n>=23)||(s=="november"&&n<=21))
	cout<<"scorpio";
	else if((s=="november"&&n>=22)||(s=="december"&&n<=21))
	cout<<"siggatarius";
}
