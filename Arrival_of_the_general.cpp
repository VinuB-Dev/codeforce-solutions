#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
  int n=0,max=0,min=100,max_index,min_index;
  cin>>n;
  int a[100];//put n here was showing some shit error.
  for (size_t i = 0; i < n; i++)
  {
    cin>>a[i];
    if(a[i]>max)
    {
    max=a[i];
    max_index=i;
    }
    if(a[i]<=min)
    {
    min=a[i];
    min_index=i;
    }
  }
  int steps=0;
  if(min_index==n-1 && max_index==0){
    steps=0;
  }
  else if(min_index==n-1){
    steps=max_index;
  }
  else if(max_index==0){
    steps=n-min_index-1;
  }
  else if(max_index>min_index){
    steps=max_index+n-1-min_index-1;
  }
  else{
    steps=max_index+n-1-min_index;
  }
  cout<<steps<<endl;
  
  
  return 0;
}
