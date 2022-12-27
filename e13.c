#include<stdio.h>
int main()
{
    int  a,b,c,p=0;
    scanf("%d",&a);
    c=a%10;
    b=a/10;
    p=p+c;
   // printf("%d\n",p);

    c=b%10;
    b=b/10;
    p=p+c;
    //printf("%d\n",p);
    c=b%10;
    p=p+c;
    printf("%d\n",p);
    return 0;
}

