#include<bits/stdc++.h>
using namespace std;

void runn(int year,bool runvar)
{
	int yr1=year%100;
	
	if(yr1!=0)
	{
		if(year%4==0)
		{
			runvar=true;
		}
		else
		{
			runvar=false;
		}
	}
	else
	{
		if(year%400==0)
		{
			runvar=true;
		}
		else
		{
			runvar=false;
		}
	}
}

int main()
{
	int yr,mon,date,days;
	bool runval;
	scanf("%d%d%d",&yr,&mon,&date);
	runn(yr,runval);
	
	switch(mon)
	{
		case 1:
			days=date;
			if(date>31)
				days=0;
			break;
		case 2:
			days=date+31;
			if(runval==false&&date>28)
				days=0;
			if(runval==true&&date>29)
				days=0;
			break;
		case 3:
			days=date+31+28;
			if(date>31)
				days=0;
			break;
		case 4:
			days=date+31+28+31;
			if(date>30)
				days=0;
			break;
		case 5:
			days=date+31+28+31+30;
			if(date>31)
				days=0;
			break;
		case 6:
			days=date+31+28+31+30+31;
			if(date>30)
				days=0;
			break;
		case 7:
			days=date+31+28+31+30+31+30;
			if(date>31)
				days=0;
			break;
		case 8:
			days=date+31+28+31+30+31+30+31;
			if(date>31)
				days=0;
			break;
		case 9:
			days=date+31+28+31+30+31+30+31+31;
			if(date>30)
				days=0;
			break;
		case 10:
			days=date+31+28+31+30+31+30+31+31+30;
			if(date>31)
				days=0;
			break;
		case 11:
			days=date+31+28+31+30+31+30+31+31+30+31;
			if(date>30)
				days=0;
		case 12:
			days=date+31+28+31+30+31+30+31+31+30+31+30;
			if(date>31)
				days=0;
			break;
		default:
			days=0;
			break;	
	}

	if(runval==true&&mon!=2)
	{
		days+=1;
		printf("%d\n",&days);
	}

	else if (runval==true&&mon==2)
	{
		printf("%d\n",&days);
	}
	
	else if(runval==false)
	{
		printf("%d\n",&days);
	}
	
	else if (days==0)
	{
		printf("ERROR!\n");
	}
	
	return 0;
}
