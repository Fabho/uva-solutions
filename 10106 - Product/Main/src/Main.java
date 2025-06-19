import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger numberOne, numberTwo;

        while(sc.hasNext()) {
            numberOne = sc.nextBigInteger();
            numberTwo = sc.nextBigInteger();

            System.out.println(numberOne.multiply(numberTwo));
        }
    }
}