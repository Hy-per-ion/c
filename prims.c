//Prim's Algorithm:-
//Graph should be weighted, connected and directed.
//1.Consider any vertex
//2.Find all the edges from selected vertex to all new vertices
//---Select least weighted edge and include it in a tree
//---If least weighted edge forms a cycle then discard it and consider next least weighted edge and include in the tree
//3.Repeat step 2 until all the vertices are included in the tree

//      (a)---5--(d)-------10--------(g)
//   1 / |        |                   | \ 3
//    /  |        |2                  |  \ 
// (b)   |6   ---(f)--------8------  7|   (i)   
//    \  |   /3                    \  |  / 
//   6 \ |  /                       \ | / 8
//      (c)---7--(e)---------12------(h)

#include<stdio.h>
#include<time.h>
int visited[10]={0}, cost[10][10], min, mincost=0;
int i,j,ne=1, a, b, u, v;
int main()
{
  int num;
  printf("\n\t\t\tPrim's Algorithm");
  printf("\n\nEnter the number of nodes= ");
  scanf("%d", &num);
  printf("\nEnter the adjacency matrix\n\n");
  for(i=1; i<=num; i++)
  {
    for(j=1; j<=num; j++)
    {
      scanf("%d", &cost[i][j]);
      if(cost[i][j]==0)
      cost[i][j]=999;
    }
  }
  clock_t start=clock();
  visited[1]=1;
  while(ne < num)
  {
  for(i=1,min=999;i<=num;i++)
  for(j=1;j<=num;j++)
    if(cost[i][j]< min)
    if(visited[i]!=0)
    {
      min=cost[i][j];
      a=u=i;
      b=v=j;
    } 
  printf("\n Edge %d:(%d - %d) cost:%d",ne++,a,b,min);
  mincost=mincost+min;
  visited[b]=1;
  cost[a][b]=cost[b][a]=999;
  }
  printf("\n\n\n Minimun cost=%d",mincost);
  clock_t end=clock();
  printf("\nStart time is %lf\n",(double)start);
  printf("End time is %lf\n",(double)end);
  printf("Total time is %lf\n",(double)(end-start));
  return 0;
}