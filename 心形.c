#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	float i;
	float x,y;
	while(1)
	{
	for(i=0;i<1.5;i+=0.1)
	{
	for(y=1.5;y>-1.5;y-=0.1)
	{
		for(x=-3;x<3;x+=0.1)
		{
			float a=x*i*x*i+y*y-1;
			putchar(a*a*a-x*i*x*i*y*y*y<0?'*':' ');
		}
		putchar('\n');
	}
	Sleep(200);
	system("cls");
	}
	}
}