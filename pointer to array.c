 //wap to find out using pointer to array
    int main ()
{
    int a[100],n,i;
    int *p;
    printf("enter value N:");
    scanf("%d",&n);//3
    for (i=0;i<n;i++)
    {
        printf("Enter value:");
        scanf("%d",&a[i]);

    }
    p=&a[0];//storing base address of array
    printf("\n Output\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);//246
        printf("\n Add=%u;%d",(p+i),5*(p+i));
//        printf("%d\n",*(i+p));
    }
}


