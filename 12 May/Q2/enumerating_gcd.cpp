#include<bits/stdc++.h>
using namespace std;
gcd(int a,int b)
{
	if (a == b)
	   return a;
	else
	 return 1;   
}

int main(){
	
	int A = 12, B= 60;
	cout<<"the gcd is "<<gcd(A,B);
}
