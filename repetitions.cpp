#include<iostream>


using namespace std;
int main(){

	string s;
	cin>>s;
	
	int max=0;
	int cou;
	
	for(int i=0;i<(int)s.length();++i)
	{	
		cou=0;
		for(int j=i;j<(int)s.length();++j)
		{
			if(s[i]==s[j])
			{	
				i=j;
				cou++;
			}else
			{	
				break;
			}
		}
		// cout<<cou;
		if(cou>max)
		{
			max=cou;
		}
		



	}
	cout<<max;


	return 0;
}