#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char x[4];
    int i = 0;
    while(n--)
    {
        scanf("%s", x);
        int len = strlen(x);
        if(x[0] == '+' || x[len - 1] == '+')
        {
            i++;
        }
        else 
        {
            i--;
        }
    }
    printf("%d", i);
}
