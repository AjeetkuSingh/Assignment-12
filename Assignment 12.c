//Assignment 12 Sol 1//
/*
#include<stdio.h>

void display(int);

int main()
{
    int limit;

    printf("Enter the number of terms to be printed\n");
    scanf("%d", &limit);

    printf("\nNatural Numbers from 1 To %d are:", limit);
    display(limit);

    return 0;
}

void display(int num)
{
    if(num)
        display(num-1);
    else
        return;

    printf("\n%d\n", num);
}
*/

//Sol 2//
/*
#include<stdio.h>

void display(int);

int main()
{
    int limit;

    printf("Please Enter any Integer Value  : ");
    scanf("%d", &limit);

    printf("\nNatural Numbers from 1 To %d are:", limit);
    display(limit);

    return 0;
}

void display(int num)
{
    if(num <= 0)
        return;
    else
      printf(" %d ", num);
      display(num-1);


}
*/

//Sol 3//
/*
#include <stdio.h>
void printEvenOdd(int cur, int limit);
int main()
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit);

    return 0;
}
void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;

    printf("%d, ", cur);
    printEvenOdd(cur + 2, limit);
}
*/

//Sol 4//
/*
#include<stdio.h>
void odd(int);
main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("first %d odd natural number in reverse order are:\n,n");
    odd(n);
}
void odd(int a)
{
    if(a>=1)
    {
        printf("%d", 2*a-1);
        odd(a-1);
    }
}
*/

//Sol 5//
/*
#include <stdio.h>
void printEvenOdd(int cur, int limit);
int main()
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit);

    return 0;
}
void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;

    printf("%d, ", cur);
    printEvenOdd(cur + 2, limit);
}
*/

//Sol 10//
/*
#include <stdio.h>
int sum=0,rem;
int reverse_function(int num){
  if(num){
    rem=num%10;
    sum=sum*10+rem;
    reverse_function(num/10);
  }
  else
    return sum;
  return sum;
}
int main(){
  int num,reverse_number;

  //Take the number as an input from user
  printf("Enter any number:");
  scanf("%d",&num);

  //Calling user defined function to perform reverse
  reverse_number=reverse_function(num);
  printf("The reverse of entered number is :%d",reverse_number);
  return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>

//recursive function
void decToOct(int n){
    if(n > 0){
        //recusive call - pass quotient as argument
        decToOct(n/8);

        //print remainder
        printf("%d",n%8);
    }
}

int main()
{
    int num;

    printf("Enter a Decimal number: \n");
    scanf("%d",&num);

    printf("Octal: ");
    decToOct(num);

    return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>

// Decimal to binary conversion
// using recursion
int find(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *
                find(decimal_number / 2));
}

// Driver code
int main()
{
    int decimal_number = 10;
    printf("%d", find(decimal_number));
    return 0;
}
*/






