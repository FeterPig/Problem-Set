#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);
    getchar();

    while (T--)
    {
        char arr[30] = {0};
        char temp = '0';

        int i = 0;
        while (1)
        {
            temp = getchar();

            if (temp == '\n')
            {
                break;
            }
            else if (temp != ' ')
            {
                arr[i] = temp;
                i++;
            }
        }
        arr[i] = '\0';

        for (int j = 0; j < i; j++)
        {
            switch (arr[j])
            {
            case '0':
                printf("zero ");
                break;
            case '1':
                printf("one ");
                break;
            case '2':
                printf("two ");
                break;
            case '3':
                printf("three ");
                break;
            case '4':
                printf("four ");
                break;
            case '5':
                printf("five ");
                break;
            case '6':
                printf("six ");
                break;
            case '7':
                printf("seven ");
                break;
            case '8':
                printf("eight ");
                break;
            case '9':
                printf("nine ");
                break;
            case '\0':
                printf("\n");
                break;
            }
        }
    }

    return 0;
}