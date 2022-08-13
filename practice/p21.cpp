// C++ program to check if a given number is perfect
// or not
/*
#include<iostream>
using namespace std;

// Returns true if n is perfect
bool isPerfect(long long int n)
{
	// To store sum of divisors
	long long int sum = 1;

	// Find all divisors and add them
	for (long long int i=2; i*i<=n; i++)
	{
		if (n%i==0)
		{
			if(i*i!=n)
				sum = sum + i + n/i;
			else
				sum=sum+i;
		}
	}
	// If sum of divisors is equal to
	// n, then n is a perfect number
	if (sum == n && n != 1)
		return true;

	return false;
}

// Driver program
int main()
{
	int a; cin>>a;
    int c=0;
    int arr[a];
    for(int i=0;i<a;i++) cin>>arr[i];
	for (int n =0; n<a; n++)
		if (isPerfect(arr[n])) c++;
	cout<<c;		

	return 0;
}


#include <bits/stdc++.h>
using namespace std;

// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{
	stack<char> s;
	char x;

	// Traversing the Expression
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '['
			|| expr[i] == '{')
		{
			// Push the element in the stack
			s.push(expr[i]);
			continue;
		}

		// IF current current character is not opening
		// bracket, then it must be closing. So stack
		// cannot be empty at this point.
		if (s.empty())
			return false;

		switch (expr[i]) {
		case ')':
			
			// Store the top element in a
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			// Store the top element in b
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			// Store the top element in c
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	// Check Empty Stack
	return (s.empty());
}

// Driver code
int main()
{
	string expr = "{()}[]";

	// Function call
	if (areBracketsBalanced(expr))
		cout << "True";
	else
		cout << "False";
	return 0;
}

#include<iostream>
using namespace std;
int main(){
    cout<<(~5);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

unsigned int onesComplement(unsigned int n)
{
// Find number of bits in the given integer
int number_of_bits = floor(log2(n))+1;


return ((1 << number_of_bits) - 1) ^ n;
}

int main()
{
unsigned int n;
cin>>n; 
cout << onesComplement(n);
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std; 
int minatt(int x,int k)
{
	int p=1,c=0,t=x;
	while(t<=k)
	{
		cout<<t<<" ";
		x=x+2;
		t+=x;
		c++;
		
	}
	if(t==k) return c;
	else return c+1;

}
int  main() 
{  
	int x,k; cin>>x>>k;
   
   
   cout<<minatt(x,k);
   return 0; 
}