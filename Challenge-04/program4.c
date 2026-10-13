#include <stdio.h>
int main()
{
float amt, total = 0;
  float smallSum = 0, medSum = 0, bigSum = 0;
  int smallCnt = 0, medCnt = 0, bigCnt = 0;
   while (1)
    {
    printf("Enter expense (0 to stop): ");
       if (scanf("%f", &amt) != 1)
       {
            printf("Invalid input! Enter a number.\n");
            return 1;
        }

     if (amt == 0)
       break;
     if (amt < 0)
        {
 printf("Invalid amount\n");
   continue;
        }

        total += amt;

        if (amt < 100)
        {
            smallCnt++;
            smallSum += amt;
        }
        else if (amt < 500)
        {
            medCnt++;
            medSum += amt;
        }
        else
        {
            bigCnt++;
            bigSum += amt;
        }
    }   int count = smallCnt + medCnt + bigCnt;
  printf("\nValid expenses = %d\n", count);
  printf("Total = %.2f\n", total);
  printf("Small: %d expenses, %.2f\n", smallCnt, smallSum);
    printf("Medium: %d expenses, %.2f\n", medCnt, medSum);
    printf("Large: %d expenses, %.2f\n", bigCnt, bigSum);
    if (count == 0)
        printf("No valid expenses entered\n");
    else
        printf("Average = %.2f\n", total / count);
    return 0;
}
