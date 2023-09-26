#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n,org,rev=0,rem;
    printf("Enter the value:");
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
    }
    if(org==rev)
    {
        printf("%d is a palindrome",org);
    }
    else{
        printf("%d is not a palindrome",org);
    }

    return 0;

}
