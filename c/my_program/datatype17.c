//time complexity O(n^2)
#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            count=count+1;
        }
    }
    printf("n=%d,count=%d\n",n,count);
}