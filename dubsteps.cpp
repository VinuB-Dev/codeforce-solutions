#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
  string sen;
  cin>>sen;
  string wub="WUB";
  size_t found = sen.find(wub);
  while(found!=-1){
  if(found==0){
		sen.erase(0,3);
	}
  else{
  sen.replace(found,1," ");
  sen.erase(found+1, 2);
  
  }
  found = sen.find(wub);
  }
  cout<<sen;
  return 0;
}