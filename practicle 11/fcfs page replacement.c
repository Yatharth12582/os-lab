#include <stdio.h>

int main()
{
    int pages[50], frame[10];
    int n, f, i, j, k, flag, page_fault = 0, index = 0;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter the page reference string:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &pages[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &f);

   
    for(i = 0; i < f; i++)
    {
        frame[i] = -1;
    }

    printf("\nPage\tFrames\n");

    for(i = 0; i < n; i++)
    {
        flag = 0;


        for(j = 0; j < f; j++)
        {
            if(frame[j] == pages[i])
            {
                flag = 1;
                break;
            }
        }

       
        if(flag == 0)
        {
            frame[index] = pages[i];
            index = (index + 1) % f;
            page_fault++;
        }

        printf("%d\t", pages[i]);
        for(k = 0; k < f; k++)
        {
            printf("%d ", frame[k]);
        }
        printf("\n");
    }

    printf("\nTotal Page Faults = %d\n", page_fault);

    return 0;
}
