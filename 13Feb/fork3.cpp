#include<bits/stdc++.h>
#include<unistd.h>
#include<iostream>
using namespace std;
int main()
{
	int pid = fork();
	if(pid<0)
	{
		cout<<"fork has failed"<<endl;
		return 0;
	}
	else if(pid==0)
	{
		int pid1 = getpid();
		cout<<"child:"<<endl;
		cout<<pid<<endl;
		cout<<pid1<<endl;
	}
	else
	{
		int pid1 = getpid();
		cout<<"parent:"<<endl;
		cout<<pid<<endl<<pid1<<endl;
	}
	return 0;
}



