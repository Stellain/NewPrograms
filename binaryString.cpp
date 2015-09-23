/*Program to display the indices of 3 equally spaced ones in the binary string */

#include<iostream>

int main()
{
	std::string binaryString;
	int indices[2],j=0;
	std::cout<<"\n ENTER THE BINARY STRING \n";
	std::cin>>binaryString;
	for(int i=0;binaryString[i]!='\0';i++)
	{
		if(binaryString[i]=='1')
		{
			indices[j++]=i;
		}
		if(j==3)
		{
			if((indices[0]-indices[1])==(indices[1]-indices[2]))
			{
				for(j=0;j<3;j++)
				{
					std::cout<<indices[j]<<std::endl;
				}
				std::cout<<std::endl;
			}
		j=0;
		i=indices[1]-1;
		}
	}
	std::cout<<"\nPROGRAM END\n";
	return 0;
}
