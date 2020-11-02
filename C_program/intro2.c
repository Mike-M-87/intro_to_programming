#include <math.h>
#include <stdio.h>

//power^
// int main()
// {
// 	double amount;
// 	double principle=1000;
// 	double rate=.05;
// 	int year;
// 	int p;

// 	printf("%4s%21s\n","Year","Amount on deposit");
// 	for (year = 0;year<=10;year++)
// 	{
// 		amount = principle*pow(1.0+rate,year);
// 		printf("%4d%18.2f\n",year,amount);

// 	}
// }





//switch
// int main()
// {
// 	int aCount=0,bCount=0,cCount=0,dCount=0,eCount=0,fCount=0;
// 	int grade;
// 	char sentinel = '?';
// 	printf("Enter Letter grades\n");
// 	printf("Enter the sentinel('?') character to end input\n");
// 	while ( (grade = getchar() ) != sentinel){
// 		switch (grade){
// 			case 'A':
// 			case 'a':
// 				++aCount;
// 				break;
// 			case 'B':
// 			case 'b':
// 				++bCount;
// 				break;
// 			case 'C':
// 			case 'c':
// 				++cCount;
// 				break;
// 			case 'D':
// 			case 'd':
// 				++dCount;
// 				break;
// 			case 'E':
// 			case 'e':
// 				++eCount;
// 				break;
// 			case 'F':
// 			case 'f':
// 				++fCount;
// 				break;
// 			case '\n':
// 			case '\t':
// 			case ' ':
// 				break;
// 			default:
// 				printf("Incorrect Letter grade entered\n");
// 				printf("Enter a new grade\n");
// 				break;		
// 		}
// 	}
// 	printf("\nTotals for each Letter grade are: \n");
// 	printf("A: %d\n",aCount);
// 	printf("B: %d\n",bCount);
// 	printf("C: %d\n",cCount);
// 	printf("D: %d\n",dCount);
// 	printf("E: %d\n",eCount);
// 	printf("F: %d\n",fCount);

// 	return 0;
// }


//do while
// int main(int argc, char const *argv[])
// {
// 	int counter = 1;
// 	do {
// 		printf("Loop = %d\n",counter );
// 	}
// 	while(++counter <= 10);
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int x;
// 	for (x = 1; x<=10; ++x)
// 	{
// 		if (x == 5){
// 			//break;  //--its used to break the loop
// 			//continue; // -- the rest of the code is skipped and loop restarts
// 			;
// 		}
// 		printf("X is %d\n",x );
// 	}
// 	printf("\nBroken out of loop\n");
// 	return 0;
// }

int main()
{
	int low,high,i,flag;
	printf("Enter min number: ");
	scanf("%d",&low);
	printf("Enter max number: ");
	scanf("%d",&high);
	printf("Prime numbers between %d and %d are: \n", low,high);
	while (low < high){
		flag = 0;
		if (low <= 1){
			++low;
			continue;
		}
		for (i = 2;i < low/2;++i){
			//printf("entered%d ",i);
			if (low % i==0){
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf(" %d\n", low);

		++low;
	}
	printf("\n");
}

//is 3 less than or equal to : 4.5?