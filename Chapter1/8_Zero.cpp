#include<iostream>

const int M = 3; 
const int N = 4;


void zero(int arr[M][N]);

int main()
{
   
    int arr[M][N];
    for(int i = 0; i<M ; ++i)
        for(int j = 0; j < N; ++j)
            std::cin>>arr[i][j];

   zero(arr);
}
void zero(int arr[M][N])
{    
    int row[M];
    int col[N];
    for(int i{}; i<M; ++i)
    {
        for(int j{}; j<N; ++j)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for(int i = 0; i<M; ++i)
        for(int j = 0; j<N; ++j)
            if(row[i] == 0 || col[j] == 0)
                arr[i][j] = 0;

    
    for(int i = 0; i<M; ++i)
    {
        for(int j = 0; j<N; ++j)
            std::cout<<arr[i][j]<<" ";
        std::cout<<std::endl;
    }
}
