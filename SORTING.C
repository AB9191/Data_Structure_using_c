#include <stdio.h>
#include <conio.h>
#define max100
void main()
{ /***************************************************************
	       This Project Made By Abhijit Bhong (AB)
   ***************************************************************/
    int ch;
    printf("===========================\n");
    printf("\n\tUser choice\n");
    printf("\n\t1.Bubble\n\t2.Selection\n\t3.Inseration\n\n");
    printf("\n==========================\n-->>");
    scanf("%d", &ch);
    switch (ch)
    {
    // bubble
    case 1:
    {
	int a[50], n, pass, i, j, temp = 0;
	printf("Enter the value of n:");
	scanf("%d", &n);
	printf("Enetr the elemnets\n");
	for (i = 0; i < n; i++)
	{
	    scanf("%d", &a[i]);
	}
	for (pass = 1; pass < n - 1; pass++)
	{
	    for (j = 0; j < n - pass; j++)
	    {
		if (a[j] > a[j + 1])
		{
		    temp = a[j + 1];
		    a[j + 1] = a[j];
		    a[j] = temp;
		}
	    }
	}
	printf("The sort array after bubble  is\n");
	for (i = 0; i < n; i++)
	{
	    printf("%d\n", a[i]);
	}
    }
    break;
	// selection

    case 2:
    {
	int i, j, n, loc, temp, min, a[30];
	printf("Enter the value of n:");
	scanf("%d", &n);
	printf("Enetr the elemnets\n");
	for (i = 0; i < n; i++)
	{
	    scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
	    min = a[i];
	    loc = i;
	    for (j = i + 1; j < n; j++)
	    {
		if (min > a[j])
		{
		    min = a[j];
		    loc = j;
		}
	    }
	    temp = a[i];
	    a[i] = a[loc];
	    a[loc] = temp;
	}
	printf("The sort array after slection  is\n");
	for (i = 0; i < n; i++)
	{
	    printf("%d\n", a[i]);
	}
    }
    break;
	// insertion

    case 3:
    {
	int a[100], n, i, j, temp = 0;
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter the array element\n");
	for (i = 0; i < n; i++)
	{
	    scanf("%d", &a[i]);
	}
	for (i = 1; i <= n - 1; i++)
	{
	    temp = a[i];
	    j = i - 1;
	    while ((temp < a[j]) && (j >= 0))
	    {
		a[j + 1] = a[j];
		j = j - 1;
	    }
	    a[j + 1] = temp;
	}
	printf("Sorting using Insertion sort\n");
	for (i = 0; i < n; i++)
	{
	    printf("%d\n", a[i]);
	}
    }
    break;
    default:
	printf("Wrong Choice!!!!!!!!! Try Angen");
    }
    printf("\n==========================\n");
    printf("Thanks For using Software\n\n\n\n ");

    getch();
}
