#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,m;
  cin>>n>>m;
  for (size_t i = 1; i <= n; i++)
  {
    if(i%2==1)
    {for (size_t j = 0; j < m; j++)
    {
      cout<<"#";
    }
    cout<<endl;
    }
    else if(i%2==0&&i%4==2){
      for (size_t j = 1; j < m; j++)
    {
      cout<<".";
    }
    cout<<"#"<<endl;
    }
    else{
      cout<<"#";
      for (size_t j = 1; j < m; j++)
    {
      cout<<".";
    }
      cout<<endl;
    }
    
  }
  
  return 0;
}