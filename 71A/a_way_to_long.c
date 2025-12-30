#include <stdio.h>
#include <string.h>

int main()
{
    char input[105];
    int n;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", input);
        int len = strlen(input);
        if(strlen(input) > 10)
        {
            printf("%c%d%c\n", input[0],len - 2 ,input[len - 1]);
        }
        else 
        {
            printf("%s\n", input);
        }
    }
    return 0;
}
