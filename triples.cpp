#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x,y,h,cd,td,rad,deg,ratio;
	int a,b,c,count,total;
	count = 0;
	total = 0;
	
	for (a = 1; a < 1001; a++)
	{
		x = double(a);
		for (b = 1; b < 1001; b++)
		{
			total++;
			y = double(b);
			rad = atan(y/x);
			deg = rad *(180/3.141592);
			h = sqrt(a*a + b*b);
			c = int(h);
			cout<<" a= "<<a<<" b= "<<b<<" theta = "<<rad<<" "<<deg <<endl;
			if(c == h)
			{
				count++;
				cout<<"* PYTHAGORIAN TRIPLE -> ";
				cout<<"count = "<<count;
				cout<<" a= "<<a<<" b="<<b<<" h= "<<h <<endl;
			}
		}
	}
	cd = double(count); td = double(total);
	ratio = double(cd/td);
	cout << "RATIO OF TRIPLES TO TOTAL TRIANGLES "<<count<<" / "<<total<< " = ";
	cout<<fixed<<setprecision(5)<<ratio<<endl;
	return 0;
}