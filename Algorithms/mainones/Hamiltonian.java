import java.util.*;

class Hamiltonian{

    int[][] adj = new int[100][100];
    int[] x = new int[100];
    int n;
    public static void main(String[] args){

        Hamiltonian ham = new Hamiltonian();
        ham.getData();
        ham.hamiltonian(1);

    }

    public void getData(){
            
            Scanner scanner = new Scanner(System.in);
            System.out.println("enter the number of nodes");
            n = scanner.nextInt();
            for(int i=0;i<n;i++)x[1]=0;
            x[0]=0;
            System.out.println("enter the adj matrix");
            for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                adj[i][j] = scanner.nextInt();

    }

    void hamiltonian(int k){

        while(true){

                nextValue(k);
                if(x[k]==-1) return ;
                
                if(k==n-1) {
                    for(int i=0;i<n;i++){
                        System.out.print((x[i]+1)+" ");
                    }

                        System.out.println(1);

                }
                else hamiltonian(k+1);

        }



    }

    void nextValue(int k){

                int i=0;
        while(true){
            
            x[k]=x[k]+1;
            if(x[k]==n) {
                    x[k]=-1;
            }
            if(x[k]==-1) return ;

            if( adj[x[k-1]][x[k]] == 1)
            {
                for(i=0;i<k;i++) 
                    if(x[k]==x[i]) break;

                

            }

            if(k==i){
                if((k<n-1) || ( (k==n-1) && adj[x[k]][0]==1))
                return;
            }


        }



    }




}
