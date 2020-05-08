#include <iostream>
#include<set>
using namespace std;
int main() {
	 int n;
	 cin>>n;
	 set<int> myset;
	  int q,y;
	  cin>>q;
	  for(int i=0;i<q;i++){
		  int x;
		  cin>>x;
		  myset.insert(x);
	  }
	  cin>>y;
	  for(int i=0;i<y;i++){
		  int x;
		  cin>>x;
		  myset.insert(x);
	  }
	  if(myset.size()==n)
		  cout<<"I become the guy.";
	  else
		  cout<<"Oh, my keyboard!";
	return 0;
}