#include <stdio.h>

int main(){
    int n;
    printf("Enter Num Of Elements:");
    scanf("%d",&n);

    //For Printing ***** pattern
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}