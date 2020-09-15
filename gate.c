int main ()
{
    float sum=0.0,i=2.0,j=1.0,result=0;
    while(i/j>0.625)
    {printf("%f ,, %f",j,i);
        j=j+j;
        sum=sum+i/j;
        printf("-%f,%f=",sum,j);

    }
    return 0;

}
