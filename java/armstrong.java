public class armstrong {
    public static void main(String[] args) {
        int  n = 372, temp, sum = 0,count= 0;
        
        temp = n ;
        int k = n ;
        while (n != 0 ){
            count++;
            n /= 10 ;
        }
        int r = 0 ;
        while(temp!=0){
            r = temp  % 10 ;
            sum+= Math.pow(r, count);
            temp /= 10;
        }


        if(k==sum){
            System.out.println("Armstrong");
        }
        else{
            System.out.println("Not Armstrong");

        }








    }
}
