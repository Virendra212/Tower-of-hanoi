//#include<stdio.h>
#include<conio.h>
#define max 3
char bc,cd,de;
int popfirst();
int popsecond();
int popthird();
void pushfirst();
void pushsecond();
void pushthird();
int first[max];
int second[max];
int third[max];
void pushfirst1(int);
void pushsecond1(int);
void pushthird1(int);
int i=max,j=max,k=max;
int main()
{
 int x,i;
 char ch='1';
 char ab;
 //clrscr();
 while(ch!='3')
 {

 {
 }
 printf("\n 1-push\n2-pop\n3-quit\nenter your choice");
 fflush(stdin);
 ch=getchar();

 {
  for(i=0;i<max;i++)
 printf("\n%d%5d%5d",first[i],second[i],third[i]);
 }
 switch(ch)
 {
  case '1':    printf("\n1- first tower\n2-second tower\n3-third tower");
      fflush(stdin);
      printf("\n in which tower you wanted to enter \nenter your choice");
      fflush(stdin);
      ab=getchar();
      switch(ab)
      {
    case '1':pushfirst();
     break;
    case '2':pushsecond();
     break;
    case '3':pushthird();
     break;
    default :
     printf("\n wrong choice");
      }
      break;

  case '2':printf("\nfrom which tower you wanted to pop\n 1-first tower\n2-second tower\n3-third tower");
      fflush(stdin);
      printf("\n enter your choice");
      fflush(stdin);
      ab=getchar();
   switch(ab)
{
   case '1':
      x=popfirst();
      printf("\nenter in which tower you wanted to insert\n");
      printf("1-first tower\n2-second tower\n3-third tower");
      fflush(stdin);
      printf("\n enter your choice");
      fflush(stdin);
      bc=getchar();
      switch(bc)
 {
    case '1':pushfirst1(x);
     break;
    case '2':pushsecond1(x);
     break;
    case '3':pushthird1(x);
     break;
    default :
     printf("\n wrong choice");
     break;
 }
 break;

case '2':x=popsecond();
      printf("\n in which tower you wanted to enter");
      printf("\n 1-first tower\n2-second tower\n3-third tower");
      fflush(stdin);
      printf("\n enter your choice");
      fflush(stdin);
      cd=getchar();

      switch(cd)
 {
    case '1':pushfirst1(x);
     break;
    case '2':pushsecond1(x);
     break;
    case '3':pushthird1(x);
     break;
    default :
     printf("\n wrong choice");
     break;
 }
 break;
case '3':x=popthird();
      printf("\nin which tower you wanted to insert");
      printf("\n1-first tower\n2-second tower\n3-third tower");

      printf("\n enter your choice");
      fflush(stdin);

      de=getchar();
      switch(de)
      {
    case '1':pushfirst1(x);
     break;
    case '2':pushsecond1(x);
     break;
    case '3':pushthird1(x);
     break;
    default :
     printf("\n wrong choice");

     break;
      }
      break;
    default :
     printf("\n wrong choice");
      }
      break;
   case '3':
    break;
      default:
    printf("\n enter correct choice");
 }
     }
return 0;
//getch();
}


void pushfirst()
{     int n;
 //first[1]=0;
 //first[2]=0;
 //first[3]=0;
 printf("\n enter your element");
 scanf("%d",&n);
 i--;
 first[i]=n;
}
void pushsecond()
{
 int n;
 printf("\n enter your element");
 scanf("%d",&n);
 j--;
 second[j]=n;
}

void pushthird()
{
 int n;
 printf("\n enter your element");
 scanf("%d",&n);
 k--;
 third[k]=n;
}

int popfirst()
{
 int x;
 x=first[i];
 first[i]=0;
 i++;
 return x;
}

int popsecond()
{
 int x;
 x=second[j];
 second[j]=0;
 j++;
 return x;
}

int popthird()
{
 int x;
 x=third[k];
 third[k]=0;
 k++;
 return x;
}

void pushfirst1(int x)
{
 i--;
 first[i]=x;
}

void pushsecond1(int x)
{
 j--;
 second[j]=x;
}


void pushthird1(int x)
{
 k--;
 third[k]=x;
}

