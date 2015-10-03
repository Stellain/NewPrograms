#include<iostream>

int main()
{
	int num[10]={1,13,20,12,9,2,5,15,18,8};
	int sum;
	std::cout<<"ENTER THE SUM VALUE:\n";
	std::cin>>sum;
	for(int i=0;i<8;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(num[i]+num[j]==sum)
			{
				std::cout<<"\n THE INDICES ARE:\t"<<i<<"\t"<<j<<std::endl;
			}
		}
	}
	return 0;
}
