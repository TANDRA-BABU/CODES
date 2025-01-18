#include<stdio.h>

void input(int *ptr);
int max(int *ptr);
void min(int *ptr,int n);
void sort(int *ptr, int n);
void print(int *ptr);
void dec(int *ptr);

int main()
{
    int arr[4];
    input(&arr[0]);
    int n= max(&arr[0]);
    min(&arr[0],n);
    sort(&arr[0],n);
    return 0;
}

void input(int *ptr)
{
    printf("Enter 5 random positive integers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&*(ptr+i));
    }
}

void print(int *ptr)
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}

int max(int *ptr)
{
    int m=0;
    for(int i=0;i<5;i++)
    {
        if(m<*ptr)
        {
            m=*ptr;
        }
        ptr++;
    }
   printf("Maximum number in this array is: %d\n",m);
   return m;
}

void min(int *ptr, int n)
{
    int m=n;
    for(int i=0;i<5;i++)
    {
        if(m>*ptr)
        {
            m=*ptr;
        }
        ptr++;
    }
   printf("Minimum number in this array is: %d\n",m);
}

void sort(int *ptr, int n)
{
    int i, j ,k, arr[4];
    for( i=0;i<5;i++)
    {
        int m=n;
        for( j=0;j<5;j++)
        {
            if(m>*(ptr+j))
            {
                m=*(ptr+j);
            }
        }
        for( k=0;k<5;k++)
        {
            if(m==*(ptr+k))
            {
                *(ptr+k)=n;
                k=5;
            }
        }
        arr[i]=m;
    }
    printf("Sorted array in accending order:\n");
    print(&arr[0]);
    dec(&arr[0]);
    printf("Sorted array in decending order:\n");
    print(&arr[0]);
}

void dec(int *ptr)
{ 
  int swap;
  for(int i=0;i<(5/2);i++)
  {
    swap= *(ptr+i);
    *(ptr+i)=*(ptr+4-i);
    *(ptr+4-i)=swap;
  }
}