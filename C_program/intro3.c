#include <stdio.h>
#include <math.h>
#include <time.h>

int square(int y);
int square_root(int y);
//void binary();
void timer(int countdown);

void main()
{
	//printf("%.2f\n",sqrt(25));
	for (int i=1; i <= 10 ; ++i)
	{
		printf("%d\n",square(i));
		timer(1);
	}
	printf("\n");

}

int square(int y)
{
	return y*y;
}
int square_root(int y)
{
	
	return sqrt(y);
}

void binary()
{
	
}

void timer(int countdown)
{
	int clock_time_passed=0,secs_passed=0,time_left;
	int start_time,count_time;

	start_time = clock();
	time_left = countdown - secs_passed;

	while (time_left>0)
	{
		count_time = clock();
		clock_time_passed = count_time - start_time;
		secs_passed = clock_time_passed/CLOCKS_PER_SEC;
		time_left = countdown - secs_passed;
	}
}