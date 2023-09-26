#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem,sum=0,temp;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(temp==sum){
        printf("%d is a armstrong number\n",temp);
    }
    else{
        printf("%d is not a armstrong number",temp);
    }


    return 0;
}
