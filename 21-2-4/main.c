//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int arr[10000]={0};
//void pan(int n)
//{
//    while(n!=1)
//    {
//        if(n%2)
//            n=(3*n+1)/2;
//        else
//            n/=2;
//        arr[n]=1;
//    }
//}
//int main()
//{
//    int n,i,tmp,count=0,j;
//    scanf("%d",&n);
//    int a[n],b[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<n;i++)
//    {
//        pan(a[i]);
//    }
//    for(i=0;i<n;i++)
//    {
//        if(!arr[a[i]])
//        {
//            b[count]=a[i];
//            count++;
//        }
//    }
//    for(i=0;i<count-1;i++)
//    {
//        for(j=0;j<count-1-i;j++)
//        {
//            if(b[j]<b[j+1])
//            {
//                tmp=b[j];
//                b[j]=b[j+1];
//                b[j+1]=tmp;
//            }
//        }
//    }
//    for(i=0;i<count;i++)
//    {
//        if(i)
//            printf(" ");
//        printf("%d",b[i]);
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//int main()
//{
//    int bai=0,shi=0,ge=0,a;
//    cin>>a;
//    bai=a/100;
//    shi=a/10%10;
//    ge=a%10;
//    for(int i=0;i<bai;i++)
//    {
//        cout<<"B";
//    }
//    for(int j=0;j<shi;j++)
//        cout<<"S";
//    for(int k=1;k<=ge;k++)
//        cout<<k;
//    return 0;
//}

