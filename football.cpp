#include<bits/stdc++.h>

using namespace std ;

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,R,L) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int solve (int testcase)
{
	int i , j , k ;
	string s ;
	cin >> s ;
    if (s.length() <= 7)
        cout<< "NO" ;
	else
	{
	    Fi(i , 0 , s.length() - 7)
	    {
		    k = 1 ;
		    Fi(j , i+1 , i+6)
		    {
			    if (s[i] == s[j])
			       k++ ;
		    }
		    if (k == 7)
	        {
	    	    cout << "YES" ;
	    	    return 0 ;
		    }
	    }       
	    cout<< "NO" ;
    }
}

int main()
{
	fast 
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
