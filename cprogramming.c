//write a function to calculate area of a square, circle and rectangle
#include<stdio.h>
#include<math.h>

void square(int side, int area);
void circle(int radius, float area);
void rectangle(int width, int height, int area);

int main()
{
    int side,area,radius,width,height;

     square( side,area);
     circle(radius,area);
     rectangle(width,height,area);

    return 0;
}

void square(int side, int area)
{
    printf("Enter the value of side : ");
    scanf("%d",&side);

    area = side * side;
    printf("Area of square is : %d\n",area);
}

void circle(int radius, float area)
{
     printf("Enter the value of radius :");
    scanf("%d",&radius);

    area = 3.14 * radius * radius;
    printf("Area of circle is : %f\n",area);
}

void rectangle(int width, int height, int area)
{
     printf("Enter the value of width & height :");
    scanf("%d%d",&width,&height);

    area = width * height;
    printf("Area of rectangle is : %d\n",area);
}

//print hello 5 times(recursion)
#include<stdio.h>

void printHW(int count);

int main()
{
    int count;

    printHW(10);

    return 0;
}

void printHW(int count)
{
    if(count == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}

//write a program too calculate sum of first 5 natural numbers(recursion)
#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("sum is %d", sum(n));

    return 0;
}

int sum(int n)
{

    if (n == 1)
    {
        return 1;
    }
    int sum1 = sum(n - 1);
    int sumn = sum1 + n;
    return sumn;
}

//Write a program to find factorial of n numbers
#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);
    printf("fact is : %d", fact(n));
    return 0;
}

int fact(int n)
{

    if (n == 0)
    {
        return 1;
    }

    int fact1 = fact(n - 1);
    int factn = fact1 * n;
    return factn;
}

//Write a program to convert celsius to fahrenheit
#include <stdio.h>

void converttemp(float temp, float t);

int main()
{
    float temp, t;
    converttemp(temp, t);
    return 0;
}

void converttemp(float temp, float t)
{
    printf("Enter the tempreture in celsius : ");
    scanf("%f", &t);

    temp = (t * (9.0 / 5.0) + 32);
    printf("Tempreture in fahernheit is : %f", temp);
}

//write a function to calculate percentage of a student from marks in science, punjabi & hindi
#include <stdio.h>

int calavg(int sci, int punj, int hindi);

int main()
{
    int sci, punj, hindi;

    printf("Enter the marks of science : ");
    scanf("%d", &sci);

    printf("Enter the marks of punjabi : ");
    scanf("%d", &punj);

    printf("Enter the marks of hindi : ");
    scanf("%d", &hindi);

    printf("Your percentage is : %d", calavg(sci, punj, hindi));
    return 0;
}

int calavg(int sci, int punj, int hindi)
{

    return ((sci + punj + hindi) / 3);
}

//Write a function to print n terns of the fibonacci sequence
#include<stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

   fib(n);
    return 0;
}

int fib(int n)
{
    if(n==0||n==1)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
    }

    int fib1=fib(n-1);
    int fib2=fib(n-2);
    int fibr=fib1+fib2;
     printf("Fibonacci of %d is : %d\n",n,fibr);
    return fibr;
}

//write a program to print n terms of fibonacci sequence(using for loop)
#include <stdio.h>

int main()
{
    int n, i;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    printf("Enter the number od terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series : %d\n%d\n", t1, t2);

    for (i = 3; i <= n; i++)
    {
        printf("%d\n", nextTerm);

        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}

//write a function to find sum of digits of a number
#include<stdio.h>


int main()
{
    int n,m,sum=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n>0)
    {
        m=n%10;

        sum=sum+m;

        n=n/10;
    }
    printf("Sum is : %d",sum);
    return 0;
}

//Write a function to find the square root of function
#include<stdio.h>

int sqr(int n, int s);
int main()
{
    int n,s;
    //sqr(n,s);
    printf("square  is : %d",sqr(n,s));
}

int sqr(int n, int s)
{
    printf("Enter the number : ");
    scanf("%d",&n);

    s= n* n;

    return s;
}

//write a program to print "HOT" or "COLD" depends on the tempreture user enter
#include <stdio.h>

void hot();
void cold();

int main()
{
    int t;
    printf("Enter the Tempreture please : ");
    scanf("%d", &t);
    if (t >= 15)
    {
        hot();
    }
    else
    {
        cold();
    }
    return 0;
}

void hot()
{
    printf("HOT");
}

void cold()
{
    printf("COLD");
}



//make your own power function
#include<stdio.h>

void pow(int n, int i);

int main()
{
    
}

void pow(int n,int i)
{
   printf("Enter the number :");
   scanf("%d",&n);
   printf("Enter the value for power :");
   scanf("%d",&i);

return 0;
}
