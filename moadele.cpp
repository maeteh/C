# include <iostream>
# include<math.h>
using namespace std;
void main()
{
	int a,b,c,delta;
	cout<<"enter a: b: c:"<<endl;
	cin>>a>>b>>c;
	delta =(b*b) -((4)*(a*c));
	if (delta>0)
	{
		int x1=((-b)+((int) sqrt(delta))) /(2*a);
		int x2=((-b)-((int) sqrt(delta))) /(2*a);
		cout<<"pasokh:"<< x1 <<endl<< x2;
	}

	else if (delta==0)
	{
		int one ((-b)/(2*a));
		cout<< "pasokh:" <<  one;
	}
	if (delta<0)
	{
		cout<<"delta javab nadarad"<<endl;
	}
	system("pause");









}