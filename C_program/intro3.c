#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int square(int y);
int square_root(int y);
void timer(int countdown);

// int main()
// {
// 	printf("%.2f\n",sqrt(25));
// 	for (int i=1; i <= 10 ; ++i)
// 	{
// 		printf("%d ",square(i));
// 	}
// 	printf("\n");
// 	return 0;
// }

// int main()
// {
// 	int r;
// 	for (int i=1; i <= 20 ; ++i)
// 	{
// 		r = 1 + (rand()%6); // number between 1 and 6
// 		printf("%10d",r);
// 		if ( i % 5 == 0 )
// 			printf( "\n" );
// 	}
// 	printf("\n");
// 	return 0;
// }

int main()
{
	int frequency1 = 0;
	int frequency2 = 0;
	int frequency3 = 0;
	int frequency4 = 0;
	int frequency5 = 0;
	int frequency6 = 0;
	int roll;
	int face;
	int loops;
	printf("How many times do u wanna roll?: ");
	scanf("%d",&loops);
	for (roll = 0; roll < loops; roll++)
	{
		face = 1 + rand()%6;
		switch ( face ){
			case 1:
				++frequency1;
				break;
			case 2:
				++frequency2;
				break;
			case 3:
				++frequency3;
				break;
			case 4:
				++frequency4;
				break;
			case 5:
				++frequency5;
				break;
			case 6:
				++frequency6;
				break;
		}
	}
	printf("%s%13s\n","Face","Frequency");
	printf("1%13d\n",frequency1);
	printf("2%13d\n",frequency2);
	printf("3%13d\n",frequency3);
	printf("4%13d\n",frequency4);
	printf("5%13d\n",frequency5);
	printf("6%13d\n",frequency6);
	return 0;
}











int square(int y)
{
	return y*y;
}
int square_root(int y)
{
	
	return sqrt(y);
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
