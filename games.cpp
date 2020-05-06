#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int a[n][2];
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < 2; j++)
    {
      cin>>a[i][j];
    }
  }
  int count=0;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n; j++){
    if(a[i][0]==a[j][1])
      count++;
  }
  
  }
  cout<<count;
  return 0;
}