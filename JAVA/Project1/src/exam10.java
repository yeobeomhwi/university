import java.util.ArrayList;

public class exam10 {

    public static void main(String args[]){
        myClass c1 = new myClass(10);
        main(args);
        ArrayList<Integer> numList = new ArrayList<Integer>();
        numList.add(1);
        numList.add(2);
        numList.add(3);
    
        int hap = 0;
        for(int i = 0; i < numList.size(); i++){
            hap += numList.get(i);
        }
        System.out.println(hap);
    }
    
}
