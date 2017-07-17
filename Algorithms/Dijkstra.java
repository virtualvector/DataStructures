import java.util.*;

class Dijkstra {

    public static void main(String[] args){
        
        int[] path,dist,visited;
        path = new int[10];
        dist = new int[10];
        visited = new int[10];

        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of vertices");
        int n = scanner.nextInt();

        System.out.println("enter the cost matrix");
        int cost[][] = new int[10][10];

        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cost[i][j] = scanner.nextInt();

        System.out.println("enter the source vertex");
        int sv = scanner.nextInt();
        dijkstra(cost,n,path,dist,visited,sv);
        //printpath(cost,n,path,dist,visited,sv);

        for(int i=1;i<=n;i++)
        System.out.print(dist[i]+" ");

    }

    public static void dijkstra(int[][] cost,int n,int[] path,int[] dist,int[] visited,int sv){
           
           int min = 999;int count =2;
           int v=0;
            for(int i=1;i<=n;i++){
                
                visited[i]=0;
                dist[i] = cost[sv][i];
                if(cost[sv][i] == 999){
                    path[i]=0;
                }
                else path[i]= sv;

            }
            visited[sv]=1;

            while(count<=n){

                min = 999;

                for(int w = 1;w<=n;w++){
                        
                        if(dist[w]<min && visited[w]==0){
                                
                                v=w;
                                min = dist[w];


                        }

                }


                        visited[v]=1;
                        count++;
                for(int w=1;w<=n;w++){
                    
                    if(dist[w]> dist[v]+cost[v][w]){
                        
                        dist[w] = dist[v]+cost[v][w];
                        path[w]=v;
                    }

                }

            }



    }

    public static void printpath(int[][] cost,int n,int[] path,int[] dist,int[]
    visited,int sv){


    }

}
