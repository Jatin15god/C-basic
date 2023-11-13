#include<stdio.h>
#include<unistd.h>

void insert(int n, int *arr)
{
    printf("_________________________________");
    printf("\n\nEnter Elements of Array :-\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
}

void update(int a, int *arr)
{
    printf("Element No. You want to Update : ");
    scanf("%d", &a);
    printf("Element You want to insert : ");
    scanf("%d", &arr[a-1]);
}

void delete(int n, int *arr)
{
    int c;
    printf("Element No. You want to delete : ");
    scanf("%d", &c);

    for(int i=c-1; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

void sort(int n, int *a)
{
    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                a[i] = a[i]^a[j];
                a[j] = a[i]^a[j];
                a[i] = a[i]^a[j];
            }
        }
    }

    printf("Sorted Array in ascending order :\n");

    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

    printf("\n\nSorted Array in descending order :\n");


    for(i=n-1; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }
}

void display(int n, int *arr)
{
    for(int i=5; i>0; i--)
    {
        for(int j=0; j<n-1; j++)
        {
            printf("Element %d : %d", j+1, arr[j]);
            printf("\n");
        }
        printf("\n\t   Countdown = %d\n", i);
        sleep(1);
        system("clear");
    }
}

int main()
{
    int n, a;

    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];

// Insertion
    insert(n, arr);
    system("clear");

// Updation
    update(a, arr);
    system("clear");

// Deletion
    delete(n, arr);
    system("clear");

// Traversion
    display(n, arr);

// Sortion
    sort(n-1, arr);

    return 0;
}