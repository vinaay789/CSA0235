//temperature


#include<stdio.h>
int main()
{
  int temp;
  printf("enter the temperature:");
  scanf("%d",&temp);
  if(temp<30)
    printf("cold");
  else if(temp<50)
    printf("warm");
  else
    printf("hot");
  return 0;
}




//uppercase or lowercase

#include<stdio.h>
int main()
{
  char ch;
  printf("enter a character:");
  scanf("%c",&ch);
  if(ch>='A'&&ch<='Z')
    printf("upper case");
  else if(ch>='a'&&ch<='z')
    printf("lower case");
  else
    printf("invalid character");
  reeturn 0;
}


//grade

#include<stdio.h>
int main()
{
  int marks;
  printf("enter the marks");
  scanf("%d",&marks);
  if(marks>=90&&marks<=100)
    printf("grade A");
  else if(marks>=80)
    printf("grade B");
  else if(maarks>=70)
    printf("grade C");
  else if(marks>=60);
    printf("grade D");
  else if(marks<=50&&marks>=0);
    printf("fail");
  else
    priintf("invalid marks");
  return 0;
}



//positive or negative number


#include<stdio.h>

int main ()
{
int a;
scanf("%d", &a) ;
if(a == 0)
printf ("neither negative nor positive");
else if (a<0)
printf ("negative number");
else
printf ("positive number");
return 0;
}



//largest among 2 numbers


#include<stdio.h>

int main ()
{
int a,b;
scanf ("%d%d", &a, &b) ;
if (a<b)
printf("%d is greatest number", b) ;
else
printf("%d is greatest number", a);
return 0;
}



//vowel or consonant


#include<stdio.h>
int main ()
{
char ch;
scanf("%c", &ch) ;

if (ch == 'a' | | ch == 'e' | | ch == 'i' | | ch == 'o' | | ch == 'u' | | ch == 'A' | | ch == 'E' | | ch == 'I ' | | ch == '0' ||ch=='U')
printf("%c is vowel",ch) ;
else if(ch>='a'&&ch <= 'z' | | ch>='A'&&ch <= 'Z')
printf("%c is consonant", ch) ;
else
printf("not a alphabet");
return 0;
}



//age



#include<stdio.h>
int main (){
int a;
printf("1.child, 2.teenager, 3.adult, 4.senior") ;
printf("\nenter your choice number:");
scanf ("%d", &a) ;
switch (a)
case 1:
printf("\nchild");
break;
case 2:
printf("\nteenager");
break;
case3:
printf("\nadult");
break;
1. child, 2. teenager, 3. adult, 4.senior
case 4:
printf("\nsenior citizen");
break;
default:
printf("\ndied or expired");
return 0;
}


