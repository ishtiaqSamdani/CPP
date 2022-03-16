#include<stdio.h>
struct File
{
    char fileName[30];
    int numberofBlocks;
    int b[10];
}na[10];

int main(){
    int num;
    printf("Enter number of files");
    scanf("%d",&num);
    printf("\n");
    for(int i=0;i<num;i++){
        printf("enter file name: ");
        scanf("%s",&na[i].fileName);
        printf("\n");
        printf("Enter number of blocks : ");
        scanf("%d",&na[i].numberofBlocks);
        printf("\n");
        printf("Enter number for blocks: ");
        for(int j=0;j<na[i].numberofBlocks;j++){
            scanf("%d",&na[i].b[j]);
        }
        printf("\n");
    }
    for(int i=0;i<num;i++){
        printf("%s",na[i].fileName);
        printf("\n");
        for(int j=0;i<na[i].numberofBlocks-1;j++){
            printf("%d-->",na[i].b[j]);
        }
        printf("%d",na[i].b[na[i].numberofBlocks-1]);
    }
}