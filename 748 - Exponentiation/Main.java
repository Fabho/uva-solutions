import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        BigDecimal base;
        String trimedOutput;
        int exp;
        Scanner sc = new Scanner(System.in);

        while(sc.hasNext()){
            base = sc.nextBigDecimal();
            exp = sc.nextInt();
            base = base.pow(exp);
            trimedOutput = base.stripTrailingZeros().toPlainString();

            int index = 0;
            while(trimedOutput.charAt(index) == '0')
                index++;

            System.out.println(trimedOutput.substring(index));
        }
    }
}