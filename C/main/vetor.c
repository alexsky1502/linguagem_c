#include <stdio.h>
void display();

int main()
{
    int array[5];
    int array_2[] = {1,2,3,4,5};

    for(int i = 0; i < 5; ++i) {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; ++i) {
        printf("%d\n", array[i]);
    }

    for(int i = 0; i < 5; ++i) {
        printf("%d\n", array_2[i]);
    }

    return 0;
}
