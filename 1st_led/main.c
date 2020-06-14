#include<reg51.h>
sbit led=P1^0;

void delay(unsigned int a);

int main()
{
	while(1)
	{
		led=1;
		delay(20);
		led=0;
		delay(20);
	}
}

void delay(unsigned int a)
{
	unsigned int b;
	for(b=0;b<=1000*a;b++);
}