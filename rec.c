#include<stdio.h>
void sort(int arr[], int n)
{
    int i;
    if(n>0)
    {
        for(int i = 0; i < n; i++){
            if(arr[i]>=arr[n-1])
            {
                int temp=arr[i];
                arr[i]=arr[n-1];
                arr[n-1]=temp;
            }
            sort(arr, n-1);
        }
    }
}

int main()
{
    int n,j,i;
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    sort(arr,n);
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}