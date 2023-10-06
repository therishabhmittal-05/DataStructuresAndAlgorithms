// MATRIX INPUT AND OUTPUT
#include <stdio.h>

int main()
{

    int marks[] = {3};
    int result[] = {4};
    int ans = marks[0] * result[0];
    printf("marks is %d\n", marks[0]);
    printf("result is %d\n", result[0]);
    printf("ans is %d\n", ans);

    // marks[1] = 34;
    // marks[2] = 53;//not a good habit
    // marks[3] = 35;
    // printf("the value is %d\n",marks[0]);
    // printf("the value is %d\n",marks[1]);
    // printf("the value is %d\n",marks[2]);
    // printf("the value is %d\n",marks[3]);
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         printf("value at index %d%d is \n", i, j);
    //         scanf("%d", &marks[i][j]);
    //     }
    // }
    

    // printf("\n");
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d ", marks[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int marks[2][4] = {
//         {3, 3, 4, 56},
//         {4, 3, 5, 6}
//     };

//     printf("\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("%d ", marks[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
