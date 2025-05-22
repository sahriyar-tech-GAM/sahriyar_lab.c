#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> //insert//update//delete//display//sort//search
int main()
{
    int n;
    printf("Enter number of elments: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int item_to_enter;
    printf("Enter the item you want to insert: \n");
    scanf("%d", &item_to_enter);
    int index;
    printf("Enter index to insert element: ");
    scanf("%d", &index);
    for (int i = n; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = item_to_enter;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // for delete any item;
    int index_delete;
    printf("Enter the index to delete number: ");
    scanf("%d", &index_delete);
    for (int i = index_delete; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // using bubble sort;
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    printf("Sorted array using bubble sort: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // for search any item from the array
    // you can use binary search
    // it is faster than linear search
    int searching_item, mid, low, high;
    printf("Enter the search item : ");
    scanf("%d", &searching_item);
    low = 0;
    high = n - 1;
    bool flag=false;
    while (low <=high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == searching_item)
        {
            printf("Found the item at index : %d",mid);
            flag=true;
            break;
        }
        else if (arr[mid] > searching_item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == false)
    {
        printf("Searching item is not found ");
    }
    return 0;
}


