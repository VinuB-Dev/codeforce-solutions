#include <iostream>
using namespace std;
#include <string>
#include <math.h>
int count(long long num)
{
  long long count=0;
  do {
     ++count; 
     num /= 10;
}while (num);
return count;
}
int main(int argc, char const *argv[])
{
  long long a,cou=0;
  cin>>a;
  long long num=a;
  if(a>0)
  cout<<a;
  else{  
  if(a/10>a / 100 * 10 + a % 10){
    cout<<a/10;
  }
  else{
    cout<<a / 100 * 10 + a % 10;
  }
  }
  return 0;
}
