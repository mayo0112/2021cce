#include <stdio.h>
int main()
{
    int n;
    printf("�п�J�j�p:");
    scanf("%d",&n);
    printf("\n");

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++) printf(" ");
        for(int j=1;j<=n;j++) printf("*");
        printf("\n");
    }
}
