#include <stdio.h>

int main()
{
    int n, i, total = 0;
    float percentage;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    int marks[n];   // Variable Length Array

    for (i = 0; i < n; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / n;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A");
    else if (percentage >= 75)
        printf("Grade: B");
    else if (percentage >= 60)
        printf("Grade: C");
    else if (percentage >= 40)
        printf("Grade: D");
    else
        printf("Grade: Fail");

    return 0;
}
