#include<iostream>
#include<string>
int main()
{
	using namespace std;
	int N,count=0;
	string text1,text2;
	cout<<"Enter the first text1: ";
	cin>>text1;
	cout<<"Enter the first text2: ";
	cin>>text2;
	cout<<"Enter N: ";
	cin>>N;
	while(count<N)
	{
		if(count%2==0)
		{
			cout<<text1<<" ";
		}
		else
		{
			cout<<text2<<" ";
		}
		count=count+1;
	}
	
	return 0;
}

