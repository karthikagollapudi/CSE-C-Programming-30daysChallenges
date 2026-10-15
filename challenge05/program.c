
#include <stdio.h>
#include <math.h>
int main()
{
int choice, n, i, fact;
double a, b, c, d, x1, x2;
while (1)
 {
     printf("\n--- Equation Solver ---\n");
printf("1. Linear Equation\n");
   printf("2. Find Factorial\n");
  printf("3. Quadratic Equation\n");
printf("4. Exit\n");
printf("Enter your choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
 printf("Enter values of a and b: ");
     scanf("%lf %lf", &a, &b);
    if (a != 0)
          printf("Value of x = %.2lf\n", -b / a);
      else if (b == 0)
             printf("Infinite number of solutions\n");
        else
             printf("No solution exists\n");
        }
        else if (choice == 2)
        {
  printf("Enter a number (0 to 12): ");
  scanf("%d", &n);
 if (n < 0 || n > 12)
       printf("Please enter a number between 0 and 12\n");
       else
   {
 fact = 1;

   for (i = 1; i <= n; i++)
       fact = fact * i;

      printf("Factorial = %d\n", fact);
            }
        }
        else if (choice == 3)
        {
            printf("Enter values of a, b and c: ");
            scanf("%lf %lf %lf", &a, &b, &c);

            if (a == 0)
                printf("This is not a quadratic equation\n");
            else
            {
                d = b * b - 4 * a * c;

                if (d > 0)
                {
                    x1 = (-b + sqrt(d)) / (2 * a);
                    x2 = (-b - sqrt(d)) / (2 * a);
       printf("Two different real roots\n");
     printf("First root = %.2lf\n", x1);
  printf("Second root = %.2lf\n", x2);
    }
        else if (d == 0)
                {
            x1 = -b / (2 * a);
          printf("Both roots are equal: %.2lf\n", x1);
        }
   else
                    printf("There are no real roots\n");
            }
        }
        else if (choice == 4)
        {
            printf("Thank you! Exiting program.\n");
            break;
        }
        else
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
