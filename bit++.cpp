#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false);
    cin.tie(0) ;
    cout.tie(0) ;
    
    int n , count = 0 ; 
    cin>>n ;
    for (int i = 1 ; i < n + 1 ; i++)
    {
    	string s ;
    	cin>>s ;
    	if ((s[1] == '+') || (s[3] == '+'))
    	  count ++ ;
    	else
		  count -- ;  
	}
	cout<<count ;
	return 0 ;
}
