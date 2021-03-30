/*
#include<iostream>

using namespace std;

int max(int a, int b)
{
	if(a>b) return a;
	return b;
}

int min(int a, int b, int c)
{
	if(a>b && c> b) 
	 return b;
	else {
	if(a<b && a< c)
	  return a;
	else return c;
	 }

}

int main()
{
	int a = 100;
	int b = 500;
	int c = 62;
	cout << "\nMax = " << max(a, b);
	cout << "\nMin = " << min(a, b, c);
	return 0;	
}

*/

//== viet ham tinh tong 
#include<iostream>

using namespace std;

int max(int a, int b);

int main()
{
	int a=111;
	int b=1010;
	int ret;
	
	cout << " max = " << max(a, b) <<" la ham so lon nhat" <<endl;
 } 


int max(int a, int b)
{
	//int ret;
	if(a > b)
		return  a;
	else 
		return b;
	
}







