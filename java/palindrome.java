import java.util.*;
public class palindrome {
    public static void main(String[] args) {
        
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    int r = 0 ;
    int  temp = n ;
    
    int rev = 0 ;

    while(n!=0){
        r = n % 10 ;
        rev = (rev * 10) + r ;
        n = n / 10;
    }

    if(temp == rev ){
        System.out.println("Palindrome");
    }
    else{
        
        System.out.println("Not Palindrome");
    }


    }
}
