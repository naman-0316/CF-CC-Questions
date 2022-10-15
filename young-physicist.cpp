#include <iostream>
using namespace std;
 
int main() {
	int t;
 
	cin >>t;
	int arr[3] ={0};
	int a[3]={0};
	while(t--){
      for(int i=0; i<3; i++){
      	cin>>a[i];
      	a[i] = a[i]+arr[i];
      	arr[i]= a[i];
      }
	}
	
	if (a[0] ==0 && a[1]==0 && a[2]==0)
 
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}
