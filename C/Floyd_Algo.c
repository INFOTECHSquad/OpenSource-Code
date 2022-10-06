#include <stdio.h>
int main()
{
  int n,i,j;
  printf("Enter no. of vertices");
  scanf("%d",&n);
  int dist[100][100];
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          printf("Enter initial distance between vertice %d and vertice %d",(i+1),(j+1));
          scanf("%d",&dist[i][j]);
      }
  }
  int k;
  for(k=0;k<n;k++)
  {
      printf("\n Taking vertex %d as mid\n",(k+1));
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              if(dist[i][j]>dist[i][k]+dist[k][j])
                dist[i][j]=dist[i][k]+dist[k][j];
                printf("%d ",dist[i][j]);
          }
         printf("\n");
      }
  }
  return 0;
}
