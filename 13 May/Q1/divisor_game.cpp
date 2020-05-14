#include<bits/stdc++.h>
using namespace std;
 int lcm(int a,int b)
 {
 	int large = max(a,b);
 	int small = min(a,b);
 	int i;
 	for(i=large;;i += large)
 	{
 		if (i % small ==0)
 		    return i;
	 }
 }

int main(){
 int A=12,B=3,C=2;
 int spec_int;
 spec_int = A/lcm(B,C);
 cout<<"the special integers "<<spec_int;
 
 	
	
}
