public class reversestring {
    public static void main(String[] args) {
        String s = "Hello";
        for(int i = (s.length() ) - 1 ; i>=0 ; i-- ){
            char a = s.charAt(i);
            System.out.print(a);
        }
    }
}
