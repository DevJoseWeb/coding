#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;

    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for (i = 0; i < num/2; i++) {
        int current = arr[i];
        *(arr + i) = arr[num - i - 1];
        *(arr + (num - i - 1)) = current;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    return 0;
}
