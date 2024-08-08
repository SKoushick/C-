#include<iostream>
#include<string>
using namespace std;
class Number
{
	public:
	string num;
	int c=0;
	void palin()
	{
		for(int i=0;i<num.length();i++)
		{
			if(num[i]!=num[num.length()-1-i])
			{
				c=1;
			}
		}
		(c==0)?cout<<"Palindrome":cout<<"Not Palindrome";
	}
};

int main()
{
	Number no;
	cout<<"Enter string to check : ";
	cin>>no.num;
	no.palin();
}
