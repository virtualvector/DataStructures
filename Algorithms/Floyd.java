import java.util.*;

class Floyd{

    public static void main(String[] args){

        int a[][] = new int[10][10];
        int n;
        Scanner scanner = new Scanner(System.in);

        System.out.println("enter the number of nodes");
        n = scanner.nextInt();

        System.out.println("enter the matrix");

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                a[i][j] = scanner.nextInt();

        floyds(a,n);

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                System.out.print(a[i][j]+" ");
            }System.out.println(" ");}
                

    }
    public static void floyds(int a[][] , int n){

        for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            a[i][j]= Math.min(a[i][j],a[i][k]+a[k][j]);

    }


}
