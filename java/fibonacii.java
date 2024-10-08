public class fibonacii {
    public static void main(String[] args) {
        int f = 0 , s = 1 ;
        int n = 15 ;
        int next = f + s ;
        System.out.print(f+" "+s+" ");
        for(int i = 3 ; i<=n ; i++){
            System.out.print((next)+" ");
            f = s ;
            s = next;
            next = f+s;
        }
    }
}
