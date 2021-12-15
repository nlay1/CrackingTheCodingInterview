#include<iostream>

const std::size_t size = 3;

void rotate(int arr[size][size]);

int main()
{
	int arr[size][size];
	for(int i = 0; i<size; ++i)
		for(int j = 0; j<size; ++j)
			std::cin>>arr[i][j];
	rotate(arr);

	return 0;
}

void rotate(int arr[size][size])
{
	for(int j = 0; j<size; ++j)
	{
		for(int i = size-1; i>=0; --i)
			std::cout<<arr[i][j]<<" ";
		std::cout<<std::endl;
	}
}
