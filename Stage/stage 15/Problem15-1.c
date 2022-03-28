#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int T, i, j, N;
    int arr[41][2] = { 0, };
    arr[0][0] = 1, arr[0][1] = 0;
    arr[1][0] = 0, arr[1][1] = 1;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for (j = 2; j <= N; j++)
        {
            arr[j][0] = arr[j - 1][1];
            arr[j][1] = arr[j - 1][0] + arr[j - 1][1];
        }
        printf("%d %d\n", arr[N][0], arr[N][1]);
    }

    return 0;
}

/*
int cnt_0 = 0, cnt_1 = 0;
int fibonacci(int n)
{
    if (n == 0)
        cnt_0++;
    else if (n == 1)
        cnt_1++;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int T, i, N;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        fibonacci(N);
        printf("%d %d\n", cnt_0, cnt_1);
        cnt_0 = 0;
        cnt_1 = 0;
    }

    return 0;
}
*/
/*
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int T, i, N;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        if (N == 0)
            printf("%d %d\n", 1, 0);
        else if (N == 1)
            printf("%d %d\n", 0, 1);
        else
            printf("%d %d\n", fibonacci(N-1), fibonacci(N));
    }

    return 0;
}
*/