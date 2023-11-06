/* find the sub array and impliment own size operator*/

#include<stdio.h>
#define max_size 100
int subarray(int *ptr,int *ptr1,int size,int size1)
{
    int i,j=0,res=0;
    for(i=0;i<size;i++)
    {
        if(ptr[i] == ptr1[j])
        {
            for(j=0;j<size1;j++)
            {
                if(ptr[i+j] != ptr1[j])
                {
                    res = 0;
                    break;
                }
            }
        }
        if(j == size1) 
        res = 1;
    }
    return res;
}
int main()
{
    int arr[max_size] = {1,2,3,4,5,6};
    int *ptr = arr;
    int arr1[] = {1,2,3};
    int *ptr1 = arr1;
    int size = ((&arr)[1] - arr);
    int size1 = ((&arr1)[1] - arr1);;
    if(subarray(ptr,ptr1,size,size1))
    {
        printf("sub array\n");
    }
    else
    {
        printf("not subarray\n");
    }
}