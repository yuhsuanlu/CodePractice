public class Number {

    public static String printIndexed(String s) {
        int n = s.length();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append(s.charAt(i));
            sb.append(n - i - 1);
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        int total = 25;
        for (int n = 1; n <= (total / 2); n++) {
            total = total - n;
            System.out.println(total + " " + n);
        }
        String result = printIndexed("ZELDA");
        System.out.println(result);
    }
}
