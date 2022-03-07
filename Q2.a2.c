#include<stdio.h>

int main(){
    int n[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    int sumodd=0, sumeven=0;
    for(i=0;i<10;i++){
        if(n[i]%2==0){
           sumeven+=n[i];
        }
        else if(n[i]%2!=0){
            sumodd+=n[i];
        }
    }
    printf("Sum of even numbers= %d\n",sumeven);
    printf("Sum of odd numbers= %d",sumodd);


    return 0;
}
