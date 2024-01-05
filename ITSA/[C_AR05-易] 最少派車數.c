#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s[30]= {0};
    int e[30]= {0};
    int time[25]= {0};
    int i=0,j=0;
    for(i=0; i<n; i++)
        scanf("%d %d",&s[i],&e[i]);
    for(i=0; i<n; i++)
    {
        for(j=s[i]; j<e[i]; j++)
            time[j]++;
    }
    int max=time[0];
    for(i=1; i<24; i++)
    {
        if(time[i]>max)
            max=time[i];
    }
    printf("%d\n",max);
    return 0;
}