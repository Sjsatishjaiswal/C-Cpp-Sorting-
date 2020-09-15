int main()
{
    int n,c ,total=0,price;

    printf("Enter Number of products:");
    scanf("%d;&n");
    for(c=1;c<=n;c++)
    {
        printf("ENTER price of %d product:",c);
        scanf("%d",&price);
        total=total+price;
    }



        printf("\nTotal Bill=%d",total);

}










