import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String args[]){

        Scanner reader = new Scanner(System.in);
        BigInteger answer = new BigInteger("0");

        while(true){

            String input = reader.nextLine();

            if(input.equals("0")) break;

            answer = answer.add(new BigInteger(input));
        }

        System.out.println(answer);
    }
}
