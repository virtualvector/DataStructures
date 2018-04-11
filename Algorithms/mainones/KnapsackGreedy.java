import java.util.*;

class KnapsackGreedy{

    public static void main(String args[]){

        int m,n;
        float[] ratio,w,profit;

        ratio = new float[10];
        w = new float[10];
        profit = new float[10];

        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number of items");
        n = scanner.nextInt();
        
        System.out.println("enter the capacity");
        m = scanner.nextInt();

        System.out.println("enter the weights");
        for(int i=1;i<=n;i++)
        w[i] = scanner.nextFloat();

        System.out.println("enter the profits");
        for(int i=1;i<=n;i++)
        profit[i]=scanner.nextFloat();


        for(int i=1;i<=n;i++){
            ratio[i] = (float)profit[i]/((float)w[i]);
        }

        Kg kg = new Kg(m,n,ratio,w,profit);
        kg.display();
        kg.sortArray();
        kg.display();
        kg.knapsack();


    }





}

class Kg{


        int m,n;
        float[] ratio,w,profit;

        Kg(int m,int n,float[] ratio,float[] weight,float[] profit){

            this.m = m;
            this.n = n;
            this.ratio = ratio;
            this.w = weight;
            this.profit = profit;

        }

        void display(){
            System.out.println("the details are");
            System.out.println("item weight profit ratio");

            for(int i=1;i<=n;i++){
            System.out.println(i + " " + w[i]+" " +profit[i]+ " "+ ratio[i]);

            }

        }

        void knapsack(){
            int u = m;

            int i=0;int j=0;
            float x[] = new float[10];
            float tp=0;
            for(j=1;j<10;j++)x[j]=0;

            System.out.println("hello");
            for( i=1;i<=n;i++){
                
                if(w[i]>u)break;

                else{
                    
                    x[i]=1;
                    tp= tp + profit[i];
                    u = (int)(u-w[i]);
                    }

            }

            if(i<n) 
                x[i] = u/w[i];
                tp = tp+(x[i]*profit[i]);

                System.out.println("the result is");
                for(i=1;i<=n;i++){
                    System.out.print(x[i]+" ");
                }

                System.out.println("final profit is " + tp);

        

        }

        void sortArray(){

                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n-1;j++){
                    

                    if(ratio[j]<ratio[j+1]){

                      float  temp = ratio[j];
                        ratio[j]=ratio[j+1];
                        ratio[j+1]=temp;

                        temp = w[j];
                        w[j] = w[j+1];
                        w[j+1]=temp;

                        temp = profit[j];
                        profit[j]=profit[j+1];
                        profit[j+1]=temp;

                    }

                }
        }
}


}
