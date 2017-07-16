import java.util.*;

class KnapsackDynamic {

    public static void main(String[] Args){

        System.out.println("enter the number of items");
        int n;
        int w[] = new int[10];
        int p[] = new int[10];
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();

        System.out.println("enter the knapsack capacity");
        int m = scanner.nextInt();

        System.out.println("enter the weights");
        for(int i=1;i<=n;i++){

            w[i]=scanner.nextInt();
        }

        System.out.println("enter the profits");
        for(int i=1;i<=n;i++){
            p[i] = scanner.nextInt();
        }

        int v[][] = new int[n+1][m+1];

        Knapsack kp = new Knapsack(v,m,n,w,p);


        kp.knapsack();
        kp.display();
        kp.optimal();

    } 


}


 class Knapsack{


        int m,n,v[][],w[],p[];

    Knapsack(int[][] v,int m,int n, int[] w,int[] p){

        this.m = m;
        this.n = n;
        this.w = w;
        this.v = v;
        this.p = p;

        

    }

   public void knapsack(){

        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                
                if(i==0 || j==0) v[i][j]=0;
                else if(j<w[i]){
                        v[i][j] = v[i-1][j];
                }
                else {
                    v[i][j] = Math.max(v[i-1][j],v[i-1][j-w[i]]+p[i]);

                }

            }


        }


   }

   public void display(){
            
            for(int i=0;i<=n;i++){
                for(int j=0 ;j<=m;j++){
                    System.out.print(v[i][j]+" ");

                }
                System.out.println();
            }

   }

   public void optimal(){
                
                System.out.println(v[n][m]);

                System.out.println("items selected are");
                int i=n;int j=m;
                int x[]= new int[10];
                while(i!=0 && j!=0){
                       
                       if(v[i-1][j]!=v[i][j]){
                            
                            x[i]=1;
                            j=j-w[i];

                       }
                       i=i-1;

                }
                for(int ii=0;ii<=n;ii++){
                        
                        if(x[ii]==1){
                        System.out.print(ii+" ");
                    }
                }

   }


}
