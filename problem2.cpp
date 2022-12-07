#include<iostream>
using namespace std;
int main()
{
char ch;
cin>>ch;
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
cout<<"vowel";
else if(ch=='y')
cout<<"sometimes y is a vowel, and sometimes y is a consonant";
else
cout<<"consonant";
return 0;
}
