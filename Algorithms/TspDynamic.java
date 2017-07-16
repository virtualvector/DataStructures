import java.util.*;

class TspDynamic {

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        int n;
        int[] tour = new int[10];
        int[][] c = new int[10][10];

        System.out.println("enter the number of nodes");
        n = scanner.nextInt();

        System.out.println("enter the cost matrix");
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            c[i][j] = scanner.nextInt();

        for(int i=1;i<=n;i++)tour[i]=i;

        System.out.println("helllo");
        int val = tspdp(c,tour,1,n);

        System.out.println("cost is "+val);
        System.out.println("the path is");

        for(int i=1;i<=n;i++){
            System.out.print(tour[i]+"->");

        }
        System.out.print(tour[1]);


    }
    public static int tspdp(int[][] c,int[] tour,int start,int n){
                
                int mincost = 999;
                int[] mintour = new int[10];
                int ccost,i=0,j=0;
                int temp[] = new int[10];

                if(start==n-1) return c[tour[n-1]][tour[n]]+c[tour[n]][1];

                for( i=start+1;i<=n;i++){
                        
                        for(j=1;j<=n;j++){

                            temp[j]= tour[j];
                            temp[start+1]=tour[i];
                            temp[i]= tour[start+1];
                        }

                        ccost = tspdp(c,temp,start+1,n);

                        if(((c[tour[start]][tour[i]])+ccost)<mincost){
                        
                            mincost = ccost + c[tour[start]][tour[i]];


                            for(int k=1;k<=n;k++){
                                    mintour[k]=temp[k];

                                    
                            }


                        }


                }

                for(int k=1;k<=n;k++)
                    tour[k] = mintour[k];


            return mincost;

    }
/*
static int tspdp(int c[][], int tour[], int start, int n) {
int mintour[]=new int[10], temp[]=new int[10], mincost=999,
ccost, i, k,j;

if(start == n-1) {
return (c[tour[n-1]][tour[n]] + c[tour[n]][1]);
}

for(i=start+1; i<=n; i++) {
    for(j=1; j<=n; j++){
            temp[j] = tour[j];
            temp[start+1] = tour[i];
            temp[i] = tour[start+1];
            }
    ccost = tspdp(c,temp,start+1,n);
    if((c[tour[start]][tour[i]]+(ccost))<mincost){
            mincost = c[tour[start]][tour[i]] + ccost;
                for(k=1; k<=n; k++)
                    mintour[k] = temp[k];
    }
}

for(int pk=1; pk<=n; pk++)
tour[pk] = mintour[pk];
return mincost;
}
*/

}
