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

// int main()
// {
// 	int low,high,i,flag;
// 	printf("Enter min number: ");
// 	scanf("%d",&low);
// 	printf("Enter max number: ");
// 	scanf("%d",&high);
// 	printf("Prime numbers between %d and %d are: \n", low,high);
// 	while (low < high){
// 		flag = 0;
// 		if (low <= 1){
// 			++low;
// 			continue;
// 		}
// 		for (i = 2;i < low/2;++i){
// 			//printf("entered%d ",i);
// 			if (low % i==0){
// 				flag = 1;
// 				break;
// 			}
// 		}
// 		if (flag == 0)
// 			printf(" %d", low);

// 		++low;
// 	}
// 	printf("\n");
// 	return 0;
// }


// int main()
// {
//    int i, x;
//    char str[100];

//    printf("\nPlease enter a string:\t");
//    scanf("%s",&str);

//    printf("\nPlease choose following options:\n");
//    printf("1 = Encrypt the string.\n");
//    printf("2 = Decrypt the string.\n");
//    scanf("%d", &x);

//    //using switch case statements
//    switch(x)
//    {
//    case 1:
//       for(i = 0; (i < 100 && str[i] != '\0'); i++)
//         str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value
//       printf("\nEncrypted string: %s\n", str);
//       break;

//    case 2:
//       for(i = 0; (i < 100 && str[i] != '\0'); i++)
//         str[i] = str[i] - 3; //the key for encryption is 3 that is subtracted to ASCII value

//       printf("\nDecrypted string: %s\n", str);
//       break;

//    default:
//       printf("\nError\n");
//    }
//    return 0;
// }

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	 // Print the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        printf("%d ", 2); 
        n = n/2; 
    } 
  
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        while (n%i == 0) 
        { 
            printf("%d ", i); 
            n = n/i; 
        } 
    } 
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) 
        printf ("%d", n); 
    printf("%s\n");
} 

