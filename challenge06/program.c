 #include <stdio.h>
int main()
{
int n, i, a[12];
int sum = 0, min, max;
int second, found = 0;
 int peaks = 0, current = 1, longest = 1;
 int k, shifts, temp, j;
 int r, d, count = 0;
 float average;
 printf("Enter no of readings(5 to 12):");
scanf("%d", &n);

while (n < 5 || n > 12)
 {
 printf("Invalid \n");
  printf("Enter number of readings(5 to12):");
 scanf("%d", &n);
}
for (i = 0; i < n; i++)
 {  printf("Enter reading %d (0 to 1000):", i + 1);
  scanf("%d", &a[i]);
 while (a[i] < 0 || a[i] > 1000)
  {
 printf("Reading should be between 0 and 1000.\n");
  printf("Enter reading %d (0 to 1000): ", i + 1);
 scanf("%d", &a[i]);
  }
    }
printf("\nOg reading: ");
 for (i = 0; i < n; i++)
  printf("%d ", a[i]);
  printf("\n");
      min = a[0];
    max = a[0];
for (i = 0; i < n; i++)
  {
    sum = sum + a[i];
 if (a[i] < min)
  min = a[i];
if (a[i] > max)
    max = a[i];
 }
 average = (float)sum / n;
 printf("Sum = %d\n", sum);
  printf("Average = %.2f\n", average);
 printf("Minimum = %d\n", min);
  printf("Maximum = %d\n", max);

 for (i = 0; i < n; i++)
  {
 if (a[i] < max)
   {
 if (found == 0 || a[i] > second)
   {
     second = a[i];
        found = 1;
  }
 }
}
  if (found == 1)
   printf("Second largest distinct value = %d\n", second);
  else
  printf("No second largest distinct value.\n");

  for (i = 1; i < n - 1; i++)
  {
  if (a[i] > a[i - 1] && a[i] > a[i + 1])
   peaks++;
  }
printf("Local peaks = %d\n", peaks);
  for (i = 1; i < n; i++)
 {
  if (a[i] > a[i - 1])
  current++;
  else
    current = 1;      
  if (current > longest)
   longest = current;
  }

 printf("Longest increasing run = %d\n", longest);
  printf("Enter K for rotation: ");
  scanf("%d", &k);
  shifts = k % n;

 if (shifts < 0)
   shifts = shifts + n;

  for (i = 0; i < shifts; i++)
  {
    temp = a[n - 1];

    for (j = n - 1; j > 0; j--)
      a[j] = a[j - 1];

    a[0] = temp;
  }

  printf("Rotated readings: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

 printf("\n");
 printf("Enter last two numeric digits of registration number: ");
  scanf("%d", &r);

 d = (r % 9) + 1;
 for (i = 0; i < n; i++)
  {
  if (a[i] % d == 0)
  count++;
}

  printf("D = %d\n", d);
printf("Values divisible by D = %d\n", count);   
 return 0;
}
