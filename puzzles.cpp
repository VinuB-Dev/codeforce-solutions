#include <iostream>
using namespace std;
#include<algorithm> 
int main(int argc, char const *argv[])
{
  int n,m;
  cin>>n>>m;
  int p[m];
  for (size_t i = 0; i < m; ++i)
  {
    cin>>p[i];
  }
  
  int b;
  for (size_t i = 0; i < m; i++)
  {
    for (size_t j = 1; j < m-i; j++)
    {
      if(p[j-1]<p[j])
      {
        int temp = p[j];
        p[j]=p[j-1];
        p[j-1]=temp;
      }
    }
    
  }
  int min=p[0]-p[m-1];
  for (size_t k = 0; k <= m-n; k++)
  {
    if(p[k]-p[k+n-1]<min)
    {
      min = p[k]-p[k+n-1];
    }
  }
  cout<<min;
  return 0;
}