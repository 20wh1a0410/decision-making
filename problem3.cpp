#include<iostream>
using namespace std;
int main()
{int a,b,c;
cin>>a>>b>>c;
if(a==b&&b==c)
cout<<"equilateral triangle";
else if (a==b||b==c||c==a)
cout<<"isoscles triangle";
else
cout<<"scalene triangle";
return 0;
}
