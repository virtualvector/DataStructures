import java.util.*;

class Krushkals {

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of vertices");
        int n = scanner.nextInt();

        System.out.println("enter the cost matrix");
        int cost[][] = new int[10][10];

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cost[i][j] = scanner.nextInt();

        int mincost =0 ;
        mincost = krushkals(cost,n,mincost);

        System.out.println(mincost);


    }

    public static int krushkals(int[][]cost , int n,int mincost)
    {

        int ne=1;
        int a=0,u=0,b=0,v=0,min;
        int[] parent = new int[10];
        while(ne<n)
        {
            min = 999;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++){
                    if(cost[i][j]<min){
                        min = cost[i][j];
                        a=u=i;
                        b=v=j;

                    }

                }

            }
            while(parent[u]>0){
                u = parent[u];
            }
            while(parent[v]>0)
                v= parent[v];

            if(u!=v){
                    System.out.print((ne++) +" minimum edge is ");
                    System.out.println(a+" "+b+"min cost is "+min);
                    mincost+=min;
                    parent[v]=u;

            }
            cost[a][b] = cost[b][a] = 999;
            }


        return mincost;

    }



}
