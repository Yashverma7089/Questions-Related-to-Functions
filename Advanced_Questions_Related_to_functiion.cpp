// write a C++ program to find the sum of first n natural numbers using functions
/*
#include<iostream>

using namespace std;

int sum(int num)
{  
   //we can calculate the sum of first n number in two ways : 1) by using for loop, 2) by usning the nth term formula
//	int s=0;
//	for(int i=1; i<=num; i++)
//	{
//		s = s+i;
//	}
      int s=(num*(num+1))/2;
      return s;
}

int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"The sum of first "<<num<<" numbers is: "<<sum(num)<<endl;
 return 0;
}*/

//write a c++ program to check the pythagorian triplet

/*#include<iostream>
using namespace std;

bool check(int a, int b, int c)
{
	int x = max(a,max(b,c));
	int y,z;
	if(x == a)
	{
		y = b;
		z = c;
	}
	else if(x == b)
	{
		y = a; 
		z = c;
	}
	else 
	{
		y = a;
		z = b;
	}
	
	if(x*x == y*y + z*z)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int a,b,c;
	cout<<"Enter the values of a, b, c: ";
	cin>>a>>b>>c;
	
	if(check(a,b,c))
	{
		cout<<"Given triplet i.e., "<<a<<", "<<b<<", "<<c<<" is Pythagorian Triplet."<<endl;
	}
	else
	{
		cout<<"Given triplet i.e., "<<a<<", "<<b<<", "<<c<<" is not Pythagorian Triplet."<<endl;
	}
	return 0;
}*/

//write a c++ program to convert the number from binary to decimal

/*#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(long num)
{
	int lastdigit;
	int decimalNum = 0;
	int base = 0;
	while(num>0)
	{
		lastdigit = num%10;
		decimalNum = decimalNum + lastdigit * pow(2,base);
		num /= 10;
		base++;
	}
	return decimalNum;
}
int main()
{
	long num;
	cout<<"Enter the binary number : ";
	cin>>num;
	
	cout<<"The corresponding decimal number of binary number ("<<num<<") is :"<<binaryToDecimal(num)<<endl;
	return 0;
}*/

//write a c++ program to convert the number from octal to decimal

/*#include<iostream>
#include<math.h>
using namespace std;

int octalToDecimal(int num)
{
	int lastdigit;
	int decimalNum = 0;
	int base = 0;
	while(num>0)
	{
		lastdigit = num%10;
		decimalNum = decimalNum + lastdigit * pow(8,base);
		num /= 10;
		base++;
	}
	return decimalNum;
}
int main()
{
	int num;
	cout<<"Enter the Octal number : ";
	cin>>num;
	
	cout<<"The decimal number of corresponding octal number ("<<num<<") is :"<<octalToDecimal(num)<<endl;
	return 0;
}*/

//write a c++ program to convert the number from hexadecimal to decimal

/*#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int hexadecimalToDecimal(string num)
{
	int length = num.size();
	int decimalNum = 0;
	int base = 0;
	for(int i = length-1; i>=0; i--)
	{
		if(num[i] >= '0'  && num[i]<= '9' )
		{
			decimalNum = decimalNum + (num[i]-'0')*pow(16,base);
		}
		else if(num[i] >= 'A' && num[i] <= 'F')
		{
		    decimalNum = decimalNum + (num[i]-'A' + 10)*pow(16,base);	
		}
		base++;
	}
	return decimalNum;
}

int main()
{
	string num;
	cout<<"Enter the Hexadecimal number : ";
	cin>>num;
	
	cout<<"The decimal number of corresponding hexadecimal number ("<<num<<") is :"<<hexadecimalToDecimal(num)<<endl;
	return 0;
}*/

//write a c++ program to convert the number from decimal to binary number system

/*#include<iostream>
using namespace std;


long decimalToBinary(int num)
{
	int lastdigit,temp = 1;
	long binaryNum = 0;
	while(num>0)
	{
		lastdigit = num%2;
		binaryNum = binaryNum + lastdigit*temp;
		temp *= 10;
		num /= 2;
	}
	return binaryNum;
}

int main()
{
	int num;
	cout<<"Enter the decimal number : ";
	cin>>num;
	
	cout<<"The binary number of corresponding decimal number ("<<num<<") is :"<<decimalToBinary(num)<<endl;
	return 0;
}*/

//write a c++ program to convert the number from decimal to octal number system

/*#include<iostream>
using namespace std;

// we can make this program in two ways (1) simply creating a function of decimal to octal (2) by creating 
// a reverse function along with decimal to octal function

//int reverse(int num)
//{
//	int reverseNum =0, rem;
//	while(num>0)
//	{
//		rem = num%10;
//		reverseNum = reverseNum*10 + rem;
//		num /=10;
//	}
//	return reverseNum;
//}

int decimalToOctal(int num)
{
	int lastdigit, temp =1;
	int octalNum = 0;
	while(num>0)
	{
		lastdigit = num%8;
		octalNum = octalNum + lastdigit*temp;
		num /= 8;
		temp *= 10;
	}
//     octalNum = reverse(octalNum);
	return octalNum;
}

int main()
{
	int num;
	cout<<"Enter the decimal number : ";
	cin>>num;

	cout<<"The Octal number of corresponding decimal number ("<<num<<") is :"<<decimalToOctal(num)<<endl;
	return 0;
}*/

//write a c++ program to convert the number from decimal to hexadecimal number system

/*#include<iostream>
using namespace std;

void decimalToHexadecimal(int num)
{
	int lastdigit =0 ;
	string hexadecimalNum = " ";
	int i=0;
	while(num>0)
	{
		int lastdigit = num%16;
		
		if(lastdigit <=9)
		{
			hexadecimalNum[i] = lastdigit + 48;
			i++;
		}
		else 
		{
			hexadecimalNum[i] = lastdigit + 55;
			i++;
		}
		num /= 16;
	}
	
      for(i=i-1; i>=0; i--)
      {
			cout<<hexadecimalNum[i];
	  }
}

int main()
{
	int num;
	cout<<"Enter the decimal number : ";
	cin>>num;
	cout<<"The hexadecimal number of corresponding decimal number ("<<num<<") is :";
	decimalToHexadecimal(num);
	return 0;
}*/

//write a C++ program to add two binary numbers 

#include<iostream>
using namespace std;

int reverse(int num)
{
	int ans=0;
	while(num>0)
	{
		int rem = num%10;
		ans =ans * 10 + rem;
		num /= 10;
	}
	return ans;
}

int addBinary(int a, int b)   // a= b=    sum = 101111   prevCarry = 0
{
	int prevCarry = 0, sum=0;
	while(a>0 && b>0)
	{ 
	 if(a%2==0 && b%2==0)
	 {
	 	sum = sum*10 + prevCarry;
	 	prevCarry = 0;
	 }
	 else if((a%2==0 && b%2==1) || (a%2==1 && b&2==0))
	 { 
	 	if(prevCarry == 1)
	 	{
	 		sum = sum*10 + 0;
	 		prevCarry = 1;
		}
		else 
		{
			sum = sum*10 + 1;
			prevCarry = 0;
		}
	 }
	else 
	{
		 sum = sum*10 + prevCarry;
		 prevCarry = 1;
	}	
	a /= 10;
	 b /= 10;
	}
	
	while(a>0)
	{
		if(prevCarry == 1)
		{
			if(a%2 == 1)
			{
				sum = sum*10 + 0;
				prevCarry = 1;
			}
			else 
			{
				sum = sum*10 + 1;
				prevCarry = 0;
			}
		}
		else 
		{
			sum = sum*10 + (a%2);
		}
		a /= 10;
	}
	
	while(b>0)
	{
		if(prevCarry == 1)
		{
			if(b%2 == 1)
			{
				sum = sum*10 + 0;
				prevCarry = 1;
			}
			else 
			{
				sum = sum*10 + 1;
				prevCarry = 0;
			}
		}
		else 
		{
			sum = sum*10 + (b%2);
		}
		b /= 10;
	}
	if(prevCarry==1)
	{
		sum = sum*10 + 1;
	}
	sum = reverse(sum);
	return sum;
}

int main()
{
	int a,b;
//	cout<<"Enter the first binary number: ";
	cin>>a;
//	cout<<"Enter the second binary number: ";
	cin>>b;
	cout<<addBinary(a,b);	
	return 0;
}
