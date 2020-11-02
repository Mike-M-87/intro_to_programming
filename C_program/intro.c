#include <stdio.h>
// int main()
// {
// 	char name[0];
// 	float any_number;
// 	printf("%s\n","hello" );
// 	printf("What is ur name: " );
// 	scanf("%s",&name);
// 	printf("Happy birthday %s\n",name);
// 	printf("%sEnter a float \n");
// 	scanf("%f",&any_number);
// 	printf("You chose %.2f\n",any_number);
// 	return 0;
// }

// int main()
// {
// 	int result;
// 	int count;
// 	int Total = 0;
// 	while (count < 10)
// 	{
// 		printf("Enter result %d%s",count,": ");
// 		scanf("%d",&result);
// 		if (result == 100)
// 		{
// 			break;
// 		}
// 		else if (result != 100)
// 		{
// 			Total += result;
// 		}
// 		count++;
// 	}
// 	printf("Total result = %d\n", Total);
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int value1,value2,Answer;
// 	printf("Enter value one: ");
// 	scanf("%d",&value1);
// 	printf("Enter value two: ");
// 	scanf("%d",&value2);
// 	if (value1 > value2)
// 		printf("Sum = %d\n",value1 + value2);
// 		printf("ok\n");
// 	if (value2 > value1)
// 		printf("Product = %d\n",value1*value2);
// 	if (value2==value1)
// 		printf("Product/Sum = %d\n",(value2*value1)/(value1+value2));
// 	return 0;
// //adding ";" at the end of if condition, statements are executed irregardless
// }

// //USING SENTINEL
// int main(int argc, char const *argv[])
// {
// 	int grade,total=0,counter;
// 	float average;
// 	printf("Enter grade, to end enter '-1':  ");
// 	scanf("%d",&grade);

// 	while (grade != -1)
// 	{
// 		total += grade;
// 		counter++;
// 		printf("Enter grade, to end enter '-1':  ");
// 		scanf("%d",&grade);
// 	}

// 	if (counter != 0) {
// 		average = (float)total/counter;
// 		printf("total = %d\n",total );
// 		printf("counter = %d\n",counter);
// 		printf("Average = %f\n",average);
// 	}
// 	else {
// 		printf("No grades were entered\n");
// 	}
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
	
// 	int passed;
// 	int failed;
// 	int student=1;
// 	int result;
// 	while (student <= 10)
// 	{
// 		printf("%s%d%s","Enter student's ",student," result (1=pass, 2=fail: ");
// 		scanf("%d",&result);
// 		if (result == 1)
// 		{
// 			passed += 1;
// 		}
// 		else 
// 			failed += 1;
// 		++student;
// 	}
// 	printf("Passed = %d\n",passed);
// 	printf("Failed = %d\n",failed);
// 	if (passed > 8)
// 	{
// 		printf("Raise Tuition\n");
// 	}

// //int c = 5;
// //printf("%d\n",++c );//prints 6 after adding 1 to c 
// //printf("%d\n",c++ ); //prints 5 but adds 1 to c
// //
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	int counter;
	for (counter = 1; counter <= 10; ++counter)
	{
		printf("%d\n",counter );
	}
	return 0;
}
