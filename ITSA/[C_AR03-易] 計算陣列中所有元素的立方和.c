#include <stdio.h>   
#include <stdlib.h>  
 
int main()
{
    int a[6]={0};
    int i;
    int sum=0;
    for(i=0;i<=5;i++){
        scanf("%d",&a[i]);
        sum+=a[i]*a[i]*a[i]; 
    }
    printf("%d\n",sum);

    return 0;
}