#include<stdio.h>
int main()
{
    int a[5000];
    int b[9]={86,1470,913,1774,948,1509,1022,1750,130};
    int p=143,s=0,c=1;
    for(int i=p;i<5000;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(i==b[j])
            {
                s=s+(b[j]-p);
                p=b[j];
            }
            if(i==4999)
            {
                s=s+(4999-p);
                p=143;
            }
        }
    }
    for(int i=p;i>=0;i--)
    {
        for(int j=0;j<9;j++)
        {
            if(i==b[j] && c==1)
            {
                s=s+(4999-b[j]);
                p=b[j];
                c=0;
            }
            if(i==b[j])
            {
                 s=s+(p-b[j]);
            }
        }
    }
    printf(s);
}