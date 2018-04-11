import java.util.*;

class Prims{

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of nodes");
        int n = scanner.nextInt();
        System.out.println("enter the cost matrix");
        int c[][] = new int[10][10];

        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        c[i][j] = scanner.nextInt();

        int mincost=0;
        mincost = prims(c,n,mincost);

        System.out.println("mincost is:" + mincost);


    }

    public static int  prims(int[][] c,int n,int mincost){
        
        int[] nearV = new int[10];

        for(int i=2;i<=n;i++){
            nearV[i]=1;
        }
        nearV[1]=0;
        int[][] t = new int[10][10];
        int u=0;

        for(int i=1;i<n;i++){
            int min = 999; 
            for(int j=1;j<=n;j++){
                
                if(nearV[j]!=0 && c[j][nearV[j]]<min){

                    min = c[j][nearV[j]];
                    u=j;

                }

            }

            t[i][1]=u;
            t[i][2]=nearV[u];
            mincost+=min;
            nearV[u]=0;

            for(int k=0;k<=n;k++){
                
                if(nearV[k]!=0 && c[k][nearV[k]]>c[k][u]){
                    nearV[k]=u;
                }

            }

            System.out.print("minimum edge is"+i+" "+t[i][1]+","+t[i][2]);
            System.out.println("and the cost is" + min);


        }

        return mincost;


    }



}
