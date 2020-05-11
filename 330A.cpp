#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,m,count=0,count1=0,cells=0,row=0;
  cin>>n>>m;
  char a[n][m];
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < m; j++)
    {
      cin>>a[i][j];
    }
    
  }
   for (size_t i = 0; i < n; i++)
  {count=0;
    for (size_t j = 0; j < m; j++)
    {
      if(a[i][j]=='S')
      {
        count++;
      }
      if(count==0 && j==m-1)
      {
        cells+=m;
        row++;
      }
    }
    
  }
  for (size_t i = 0; i < m; i++)
  {count=0;
    for (size_t j = 0; j < n; j++)
    {
      if(a[j][i]=='S')
      {
        count++;
      }
      //cout<<count<<" "<<j<<endl;
      if(count==0 && j==n-1)
      {
        cells+=n-row;
      }
    }
    
  }
  cout<<cells;
  return 0;
}