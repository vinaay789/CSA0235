//Swaping of numbers

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of the a,b:\n");
scanf("%d%d",&a,&b);
printf("the value of a %d\n",a);
printf("the value of b %d\n",b);
c=a;
a=b;
printf("the value of a after swapping %d/n",a);
b=c
printf("the value after swapping%d",b);
return 0;
}

//Arithametic

#inlcude<stdio.h>
int main()
{
int a,b;
printf("Enter two number:");
scanf("%d%d",&a&b);
int sum,difference,product;
float quotient;
sum=a+b;
difference=a-b;
multiplication=a*b;
quotient=a/b;
printf("sum=%d difference=%d product=%d quotient=%f,sum,difference,product,quotient");
return 0;
}

//convert

#include<stdio.h>
int main()
{
float c,f;
printf("Enter the temperature in celcius");
scanf("%f",&c);
f=(c*1.8)+32;
printf("The temperature in farenheit:%f",f);
return 0;
}

//rectangle
include<stdio.h>
int main()
{
int L,B,area;
printf("Enter the length of rectangle");
scanf("%d",&L);
printf("Enter breadth of rectangle");
scanf("%d",&B);
area=L*B;
printf("Area of rectangle is:%d",area);
return 0;
}

//odd even
 
#include<stdio.h>
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
if(n%2==0)
printf("Entered number is even");
else:
printf("Entered number is odd");
return 0;
}
//leap
#inlcude<stdio.h>
int main()
{
int y;
printf("Enter the year to check if its a leap year:");
scanf("%d",&y);
if(y%400==0)
{
printf("%d is a leap year",y);
}
else if(y%4==0)
{
printf("%d is  a leap year",y);
else
printf("%d is not a leap year",y);
return 0;
}
// max min
#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Taking input of three integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    printf("Enter the third integer: ");
    scanf("%d", &num3);

    // Finding the maximum number
    int maximum = num1;
    if (num2 > maximum) maximum = num2;
    if (num3 > maximum) maximum = num3;

    // Finding the minimum number
    int minimum = num1;
    if (num2 < minimum) minimum = num2;
    if (num3 < minimum) minimum = num3;

    // Printing the results
    printf("The maximum number is: %d\n", maximum);
    printf("The minimum number is: %d\n", minimum);

    return 0;
}

// sum-avg

#include<stdio.h>
int main(){
int a,b,c,d,e;
int sum,avg;
printf("Enter the list of number ti recceive the average and sum of the numbers:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
avg=(a+b+c+d+e)/5;
printf("The sum of a given numbers =%d\n",sum);
printf("The average of the given numbers=%d",avg);
return 0;
}