/*print the longest string with out repeating characters */
#include<iostream>

int main()
{
	std::string str1;
	int i,j,flag=0;
	std::cout<<" ENTER THE ORIGINAL STRING: \n";
	std::cin>>str1;
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(str1[i]==str1[j])
			{
			flag=1;
			break;
			}
		}
	if(flag==1)
	{
		break;
	}
	}
	std::cout<<"\nLENGTH:"<<i<<std::endl;
	return 0;
}
