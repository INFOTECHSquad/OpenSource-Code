//triplet representation
#include<stdio.h>
#include<stdlib.h>

int transpose(int size, int M[size][3]){
    int r=M[0][0], c=M[0][1], t=M[0][2];
    int **M2;
    M2=(int **)malloc((t+1)*sizeof(int *));//row allocation
    for(int i = 0;i<t+1;i++){
        M2[i]=(int *)malloc(3*sizeof(int));//each entries size allocation

    }
    //heading swaping
    M2[0][0]=c;
    M2[0][1]=r;
    M2[0][2]=t;

    int k=1;
    for(int j=0;j<c;j++){
        for(int i = 0;i<=t;i++){
            if(M[i][1]==j){
                M2[k][1]=M[i][0];
                M2[k][0]=M[i][1];
                M2[k][2]=M[i][2];
                k++;
            }
        }
    }
    // return(M2);
    printf("\nThe transpose is\n");
    for(int i = 0;i<size;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n,m;
    printf("Enter the row: ");
    scanf("%d",&n);
    printf("Enter the column: ");
    scanf("%d",&m);

    int arr[n][m];

    printf("Enter the elements:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe array is\n");

    int size=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
            if(arr[i][j]!=0){
                size++;
            }
        }
        printf("\n");
    }

    //triplet---------------------------------------------
    size++;//due to header row
    int M[size][3];
    int k=1;
    M[0][0]=n;
    M[0][1]=m;
    M[0][2]=size;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=0){
                M[k][0]=i;
                M[k][1]=j;
                M[k][2]=arr[i][j];
                k++;
            }
        }
    }

    printf("\nTriplet representation of matrix is: \n");
    for(int i=0; i<size; i++){
        for( int j=0; j<3;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    //---------------------------------------------------
    transpose(size,M);



    
    return 0;
}