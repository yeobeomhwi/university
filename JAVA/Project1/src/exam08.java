
import java.lang.Math;

public class exam08 {
    public static void main(String args[]){
        Car myCar1 = new Car("빨강", 0);
        Car myCar2 = new Car("파랑", 0);
        Car myCar3 = new Car("초록", 0);

        System.out.println("생산된 차의 대수(정적 필드) ==> " + Car.carCount);
        System.out.println("생산된 차의 대수(정적 매소드) ==> " + Car.currentCarCount());
        System.out.println("차의 최고 제한 속도 ==> " + Car.MAXSPEED);

        System.out.println("PI의 값 ==> " + Math.PI);
        System.out.println("3의 5제곱 ==> " + Math.pow(3,5));

    }
}
