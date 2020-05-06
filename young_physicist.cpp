#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int a[n][3],count=0;
  int col_sum=0;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < 3; j++)
    {
      cin>>a[i][j];
    }
  }
  for (size_t i = 0; i < 3; i++)
  {col_sum=0;
    for (size_t j = 0; j < n; j++)
    {
      col_sum += a[j][i];
    }
    if(col_sum==0){count++;}
  }
  if(count==3){
    cout<<"YES";
  }
  else cout<<"NO";
  return 0;
}