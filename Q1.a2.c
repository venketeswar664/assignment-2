#include<stdio.h>
#include<string.h>
int main()
{
    int length,k,i,m;
    char str1[50], str2[50], str[50];
    printf("Enter first string:");
    scanf("%s", &str1);
    printf("Enter second string:");
    scanf("%s", &str2);

    strcat(str1,str2);
    length=strlen(str1);
    k=0;
    m=length-1;
    for(i=k;i<m;i++)
    {
       str[i]=str1[i];
       str1[i]=str1[m];
       str1[m]=str[i];
       m--;
    }
    printf("%s",str1);

    return 0;
}
