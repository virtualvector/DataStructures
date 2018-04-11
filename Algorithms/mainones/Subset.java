import java.util.*;

class Subset{
        public static int n;
    public static void main(String args[]){
        
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the value of d");
        int d = scanner.nextInt();

        System.out.println("enter the number of numbers");
        n = scanner.nextInt();

        System.out.println("enter the numbers");
        int sum=0;

        int[] w = new int[10];
        for(int i=0;i<n;i++)
        {
            int val  = scanner.nextInt();
            w[i]=val;
            sum+=val;
        }
        int[] x = new int[10];
        for(int i=0;i<n;i++) x[i]=0;

        subset(0,0,sum,x,w,d);


    }
    public static  void subset(int cs,int k,int r,int[] x,int w[],int d){
        
        x[k]=1;

        if(cs+w[k]==d){
            
            for(int i=0;i<=k;i++){
                if(x[i]==1){
                    System.out.print(w[i]+" ");
                }
            }
            System.out.println(" ");

        }
        else if ((cs+w[k]+w[k+1])<=d){

            subset(cs+w[k],k+1,r-w[k],x,w,d);


        }


        if(((cs+r-w[k])>=d)&&(cs+w[k+1]<=d)){
            x[k]=0;
            subset(cs,k+1,r-w[k],x,w,d);

        }



    }



}
