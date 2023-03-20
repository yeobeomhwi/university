
public class Car {
    String color;
    int speed  = 0;

    // Example 3-12
    static int carCount = 0;
    final static int MAXSPEED = 200;
    final static int MINSPEED = 0;

    static int currentCarCount(){
        return carCount;
    }

    // Example 3-9
    Car(String color, int speed){
        this.color = color;
        this.speed = speed;
        carCount++;
    }


    int getSpeed(){
        return speed;
    }

    void upSpeed(int value){
        if(speed + value >= 200){
            speed = 200;
        }
        else{
            speed = speed + value;
        }
    }

    void downSpeed(int value){
        if(speed - value <= 0){
            speed = 0;
        }
        else{
            speed = speed - value;
        }
    }

    String getColor(){
        return color;
    }
}
