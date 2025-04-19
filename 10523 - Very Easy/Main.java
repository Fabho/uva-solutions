import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String[] args) {

        Scanner reader = new Scanner(System.in);
        int N, A;

        while(reader.hasNext()){
            N = reader.nextInt();
            A = reader.nextInt();
            BigInteger aBig = BigInteger.valueOf(A);
            BigInteger answer = BigInteger.ZERO;

            for(int i=1; i<=N;i++){
                answer = answer.add(BigInteger.valueOf(i).multiply(aBig.pow(i)));
            }

            System.out.println(answer);

        }
    }
}