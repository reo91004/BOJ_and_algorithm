/* 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열*/
#include <iostream>
#define ARRMAX 8
	
void loop(int n,int m,int& count,int arr[])
{
	if(count>m)
		return;
	for(int i=0;i<n;i++)
	{
		arr[count++]=i;
		loop(n,m,count,arr);
		arr[--count]=-1;
		
		if(count==m&&i==0)
			{
				for(int j=0;j<m;j++)
				{
					std::cout<<arr[j]+1<<' ';	
				}	
				std::cout<<'\n';
			}
		
	}	
}	
	



int main()
{
	int n,m;
	std::cin>>n>>m;
	
	//반복문을 n에 맞추어서 불러내는 방법은 없을까?
	int arr[ARRMAX];
	for(int i=0;i<ARRMAX;i++)
		arr[i]=-1;
	int count=0;
	
	loop(n,m,count,arr);
	return 0;
}