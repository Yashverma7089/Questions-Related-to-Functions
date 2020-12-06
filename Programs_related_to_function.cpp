// write a C++ program to print all the prime numbers between two given numbers 

/*#include<iostream>
#include<cmath>

using namespace std;

int isprime(int num)
{
	for(int i=2; i<=sqrt(num); i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
  int num1, num2;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter the second number: ";
  cin>>num2;
  
  for(int i = num1 + 1; i < num2; i++)
  {
  	if(isprime(i))
  	{
  		cout<<i<<endl;
	  }
  }
 return 0;
}*/

//. Write a program to print Fibonacci sequence.

/*#include<iostream>

using namespace std;

void fibo(int num)
{
	int t1=0, t2=1, nextTerm;
	for(int i=1; i<=num; i++)
	{
		cout<<t1<<",";
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
}

int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
 
 fibo(num);
 return 0;
}*/

// Write a program to find the factorial of a given number

/*#include<iostream>

using namespace std;

long factorial(int num)
{
	int i;
	long fact=1;
	for(i=num; i>1; i--)
	{
		fact *=i;
	}
	return fact;
}
int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;
  
 return 0;
}*/

//. Write a program to find the binary coefficient (nCr)

/*#include<iostream>

using namespace std;

long factorial(int num)
{
	int i;
	long fact=1;
	for(i=num; i>1; i--)
	{
		fact *=i;
	}
	return fact;
}
int main()
{
  int n,r,nCr;
  
  cin>>n>>r;
  
  nCr = factorial(n)/(factorial(r)*factorial(n-r));
  
  cout<<nCr<<endl;
  
 return 0;
}*/

// Write a program to print the Pascal triangle.

/*#include<iostream>

using namespace std;

long factorial(int num)
{
	int i;
	long fact=1;
	for(i=num; i>1; i--)
	{
		fact *=i;
	}
	return fact;
}
int main()
{
  int n,nCr;  
  
  cout<<"Enter the value of n:";
  cin>>n;
  
  for(int i=0; i<n; i++)
  {
  	for(int j=0; j<=i; j++)
  	{
  		
	  nCr = factorial(i)/(factorial(j)*factorial(i-j));
	  cout<<nCr<<" ";  
  	}
	  cout<<endl; 
  }
return 0;
}*/

//Write a program to find out whether a given number is even or odd using functions.

/*#include<iostream>

using namespace std;

int isEvenOrOdd(int num)
{
	if(num%2==0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
  int n;  
  
  cout<<"Enter the value of n:";
  cin>>n;
  
  if(isEvenOrOdd(n))  
  {
  	cout<<n<<" is even"<<endl;
  }
  else
  {
   	cout<<n<<" is odd"<<endl;
  }
 return 0;
}*/

// Write a program to find out whether a given character is an alphabet or not using functions.

/*#include<iostream>

using namespace std;

int isAlphabet(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))   
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
  char ch;  
  
  cout<<"Enter the character:";
  cin>>ch;
  
  if(isAlphabet(ch))  
  {
  	cout<<ch<<" is alphabet"<<endl;
  }
  else
  {
   	cout<<ch<<" is not alphabet"<<endl;
  }
 return 0;
}*/

//. Write a program with a function to swap the values of 2 given integer variables.

/*#include<iostream>

using namespace std;

void swapping(int x, int y)
{
	int t = x;
	    x = y;
	    y = t;
}
int main()
{
  int a,b;  
  
  cout<<"Enter the value of a and b:";
  cin>>a>>b;
  
  cout<<"The values of a is "<<a<<" and b is "<<b<<" before swapping."<<endl;
  swap(a,b);
  cout<<"The values of a is "<<a<<" and b is "<<b<<" after swapping."<<endl;  
 return 0;
}*/

//Write a program using functions to check if a person is eligible for voting or not by comparing his age with legal voting age i.e. 18.

/*#include<iostream>

using namespace std;

int eligeable(int age)
{
    if(age>=18)
	{
		return 1;
	}	
	else 
	{
		return 0;
	}
}

int main()
{
  int age;  
  
  cout<<"Enter your age : ";
  cin>>age;
  
  if(eligeable(age))
  {
  	cout<<"You are eligeable for the voting and you can give vote"<<endl;
  }
  else
  {
  	cout<<"You are not eligeable for the voting and you can not give vote"<<endl;
  }
 return 0;
}*/

//Write a program with two functions to print the maximum and the minimum number respectively among three numbers entered by user.

/*#include<iostream>

using namespace std;

int max(int a, int b, int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else 
	{
		return c;
	}
}

int min(int a, int b, int c)
{
	if(a<b && a<c)
	{
		return a;
	}
	else if(b<a && b<c)
	{
		return b;
	}
	else 
	{
		return c;
	}
}

int main()
{
	int num1,num2,num3;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	cout<<"Enter the third number: ";
	cin>>num3;
	
	cout<<"Maximum number among "<<num1<<", "<<num2<<" and "<<num3<<" is : "<<max(num1,num2,num3)<<endl;
	cout<<"Minimum number among "<<num1<<", "<<num2<<" and "<<num3<<" is : "<<min(num1,num2,num3)<<endl;
	return 0;
}*/
