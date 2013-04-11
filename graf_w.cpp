#include <stdio.h>
#include <conio.h>
#include <random>
#include <time.h>


void CreateGraf(int a[3][3])
{
	for(int i=0;i<5;++i)
	{
		for(int g=0;g<5;++g)
		{
			if(i==g)
			{
				a[i][g]=0;
			}
			else
			{
				a[i][g]=rand()%15;
			}
		}
	}
}

void PrintGraf(int a[3][3])
{
	for(int i=0;i<3;++i)
	{
		for(int g=0;g<3;++g)
		{
			printf("%d ",a[i][g]);
		}
		printf("\n");
	}
}

int min(int a[3])
{
	int m=INT_MAX;
	for(int i=0;i<3;++i)
	{
		if(a[i]<m)
		{
			m=a[i];
		}
	}
	return m;
}

void Search(int a[3][3])
{
	int c0;
	for(int b=0;b<3;++b)
	{
		for (int i=0;i<3;++i)
		{
			for(int g=0;g<3;++g)
			{
				c0=a[b][g];
				c0+=a[g][i];
				if (c0<a[b][i])
				{
					a[b][i]=c0;
				}
			}
		}
	}
}

void main()
{
	srand(time(NULL));
	int a[3][3];
	CreateGraf(a);
	PrintGraf(a);
	getch();
	printf("\n\n");
	Search(a);
	PrintGraf(a);
	getch();
}