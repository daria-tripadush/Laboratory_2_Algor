#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main() 
{
	setlocale(LC_ALL, "ua");
	int a;
	int b;
	
	printf("Введiть номер завдання: (1-4)");
	scanf("%d", &a);
	if(a == 1) {
		printf("Введiть тип завдання (1-2)");
		scanf("%d", &b);
		if(b == 1) {
			exercOneA();
		}
		else if (b == 2) {
			exercOne();
		}
		else {
			printf("Такого типу завдяння 1 немає");
		}
	}
	else if(a == 2) {
		exercTwo();
	}
	else if(a == 3) {
		exercThree();
	}
	else if (a == 4) {
		 exerFour();
	}
		
	else {
		printf("Такого завдання немає");
	}

	printf("\n");
	system("pause");
	return 0;
}
int exercOne ()
{
	int a;
	float c,b;

	printf("Введiть цiле число а= ");
	scanf("%d", &a);
	printf("Введiть дiйсне число с= ");
	scanf("%f", &c);
	

	if((a) == 2)	
	{
		b = (pow(a,2)-4*c)/(a*c);
	}
	else if((a) == 4) 
	{
		b = sqrt(a*c-2*a);
	}
	else if (a == 6) 
	{
		b = pow(c,2)-2*a;
	}
	else {
		printf("Неможливо обчислити значення виразу!");
		return 0;
	}

	printf("Значення виразу %f", b);
	return 0;
}

exercOneA() {
	int a;
	float c,b;

	printf("Введiть цiле число а= ");
	scanf("%d", &a);
	printf("Введiть дiйсне число с= ");
	scanf("%f", &c);

	if(a == 2){ b = (pow(a,2)-4*c)/(a*c); printf("Значення виразу %f", b); return 0;} 
	if(a == 4){ b = sqrt(a*c-2*a); printf("Значення виразу %f", b); return 0;} 
	if (a == 6){ b = pow(c,2)-2*a;printf("Значення виразу %f", b); return 0;} 
	
	
	printf("Неможливо обчислити значення виразу!");
	return 0;
}	

int exercTwo() 
{
	int x,y;

	printf("Введiть координати точки А\nx=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);

	if((x*y>0)) {
		if(x>0&&y>0) {
			printf("1 kvadrant");
		}
		else {
			printf("3 kvadrant");
		}
	}
	else {
		if(x>0&&y<0) {
			printf("4 kvadrant");
		}
		else {
			printf("2 kvadrant");
		}
	}
	return 0;
}

int exercThree() {
	int day;

	printf("Введiть порядковий номер дня тижня: ");
	scanf("%d", &day);


	switch (day) {
		case 1: printf("1-Понеділок");break; 
		case 2: printf("2-Вівторок");break; 
		case 3: printf("3-Середа");break; 
		case 4: printf("4-Четвер");break; 
		case 5: printf("5-П'ятниця");break; 
		case 6: printf("6-Субота");break; 
		case 7: printf("7-Недiля");break; 
		default: printf("Такого дня немає");break;
	}
	printf("\n\n\n");
	return 0;
}


int exerFour() {
	int x,y;
	float f;

	printf("x= ");
	scanf("%d", &x);
	printf("y= ");
	scanf("%d",&y);

	if((x*y) == 0) {
		printf("Логарифм 0 неможливо!");
		return 0;
	}
	else if((1+pow(x,2)+pow(y,2)) == 0) {
		printf("Ділення на 0 неможливо!");
	}
	else {
		f = (pow(x,2)+log(x*y)-pow(y,2))/(1+pow(x,2)+pow(y,2));
	}

	printf("(%d^2+log%d%d-%d^2)/(1+%d^2+%d^2)=%f",x,x,y,y,x,y,f);
	return 0;
}
