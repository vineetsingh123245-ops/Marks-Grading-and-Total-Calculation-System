#include <stdio.h>

int main()
{
    int marks[5];
    int i, total = 0;
    float percentage;

    // Input marks
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    // Calculate percentage
    percentage = total / 5.0;

    // Display total and percentage
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%\n", percentage);

    // Grade calculation
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
