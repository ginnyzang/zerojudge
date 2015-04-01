#include<iostream>
using namespace std;
int main()
{
	int h;
	while(cin>>h)
	{
		h-=15;
		if(h<0)
			h+=24;
		cout<<h<<endl;
	}
} 
