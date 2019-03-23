#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define SMAX 250
#define LSMAX 5
//ADT about list
typedef struct talk
{
int power;
char in[SMAX];
char out[SMAX];
struct talk * next;
} Talk;

int main(void)
{
char input[SMAX];
int choose =0 ;
return 0;
}

int PrintList(void)
{
Talk *point = Head.next;
while(point!=NULL)
{ 
printf("in %s ",point->in);
printf("out %s \n",point->out);
point = point->next;
}
return 0;
}
int PrintList(void);
int main(void)
{
memset(&Head,0,sizeof Head);//³õÊ¼»¯Head
char input[SMAX];
int choose =0 ;
return 0;
}

int PrintList(void)
{
Talk *point = Head.next;
while(point!=NULL)
{ 
printf("in %s ",point->in);
printf("out %s \n",point->out);
point = point->next;
}
return 0;
}