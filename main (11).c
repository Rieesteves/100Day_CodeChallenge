//occurance 
#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count,num;

    /* Input size of array */
    printf("Enter size of array(number of elements): ");
    scanf("%d", &size);

    /* Input elements in array */
    for(i=0; i<size; i++)
    {
        printf ("enter element[%d] :  ", i + 1);	//i+1 display purpose
        scanf ("%d", &arr[i]);
        
        /* Initially initialize frequencies to -1 */
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            /* If duplicate element is found */
            if(arr[i]==arr[j])
            {
                count++;

                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }

        /* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\n\nEnter number to find Occurrence: ");
    scanf("%d",&num);

    //count occurance of num
    count = 0;
    for (i = 0; i <size; i++) {
        if (arr[i] == num)
            count++;
    }
    printf("\nOccurrence of %d is: %d\n", num, count);
    return 0;
}    

