#include <stdio.h>
#include <stdlib.h>

/*int main()                                  //Question 1
{
 char c;
 int i=0,j=1;
 char *str;
 str=(char*)malloc(sizeof(char));

 printf("enter string:");

 while(c!='\n')
 {
    c=getc(stdin);
    j++;
    str=(char*)realloc(str,j*sizeof(char));
    str[i]=c;
    i++;
 }
 str[i]='\0';

 printf("string is:%s",str);

free(str);
    return 0;
}*/


/*int main()                                      //Question 2
{
    int *arr,n,j=1,i=0,avg=0;
    printf("enter size of array");
    scanf("%d",&n);

    arr=(int*)calloc(n,sizeof(int));
    printf("enter elements in the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        avg=(avg+arr[i]);
    printf("average of array elements is %d",avg/n);

    free(arr);

}*/



/*int main()                                                      //Question 3
{
    int *arr,n,sum=0;

    arr=(int*)calloc(n,sizeof(int));
    printf("enter how many number you want enter in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    arr=(int*)malloc(sizeof(int));

    printf("enter values in the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(int i=0;i<n;i++)
        sum=sum + *(arr+i);
    printf("sum of all elements in the array is %d",sum);

    free(arr);

}*/



/*int main()                                              //Question 4
{
    char *text,str;
    int j=1,i=0;

    text=(char*)malloc(sizeof(char));
    printf("enter text\n");
    while(str!='\n')
    {
        str=getc(stdin);
        j++;
        text=(char*)realloc(text,j*sizeof(char));
        text[i]=str;
        i++;
    }
    text[i]='\0';
    printf("text is:%s",text);
}*/



/*int main()                                                          //Question 5
{
    int *arr,n,sum=0;
    printf("enter how many number you want to enter in the array:");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",(arr+i));
    for(int i=0;i<n;i++)
    {
        sum=sum+(*(arr+i));
    }
    printf("sum of all elements is %d",sum);
    free(arr);
}*/



/*int main()                                                          //Question 6
{
    int *arr,n,temp=0;
    printf("enter how many number you want to enter in the array:");
    scanf("%d",&n);

    arr=(int *)calloc(n,sizeof(int));
    printf("enter %d elements in the array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[0]<arr[i])
        {
            temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
    }
    printf("greatest number in the array is: %d",arr[0]);
    free(arr);
}*/


/*int main()                          //Question 7(MEMORY LEAK)
{
    f();
    return 0;
}
f()
{
    int *arr;

    arr=(int*)malloc(sizeof(int));
    if(arr==NULL)
    {
        printf("memory allocation failed");
        return 0;
    }

}*/


/*int main()                                  //Question 8(DANGLING POINTER)
{
    int *arr;
    arr=(int *)malloc(sizeof(int));
    *arr=10;
    printf("before free %d\n",*arr);
    free(arr);
    printf("before free %d",*arr);

}*/


/*int main()                                  //Question 9
{

    int *arr,n=0;
    printf("enter size of the in bytes");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(n));
    if(arr==NULL)
    {
        printf("memory allocation failed");
        return 0;
    }
}*/


/*int main()                                  //Question 10
{
    int *arr,n,temp=0;
    printf("enter ho many number you want to enter in the array");
    scanf("%d",&n);

    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",(arr+i));

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    printf("maximum of the array is %d \nand\nminimum of the array is %d",arr[0],arr[n-1]);

}*






