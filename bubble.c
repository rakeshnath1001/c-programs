#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n;
    char temp[50]; // assuming each name has a maximum length of 50 characters
    printf("enter the number of names:");
    scanf("%d",&n);
    char names[n][50]; //array to store the names
    
    //input names
    for(i=0;i<n;i++){
        printf("enter name %d:",i+1);
        scanf("%s",names[i]);
    }
    //bubble sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(names[j],names[j+1])>0){
                //swap names[j] and names[j+1]
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    //display sorted names
    printf("\nsorted names in alphabetical order:");
    for(i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}