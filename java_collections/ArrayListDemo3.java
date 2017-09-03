import java.util.*;

class ArrayListDemo3 {

    public static void main(String[] args){

        ArrayList<CustomObj> al = new ArrayList<CustomObj>();
        CustomObj c1 = new CustomObj("rohith",1);
        CustomObj c2 = new CustomObj("raj",2);
        CustomObj c3 = new CustomObj("reganti",3);

        al.add(c1);
        al.add(c2);
        al.add(c3);

        for(CustomObj o : al){
            
            System.out.println(al.contains(c3));
            System.out.println(o.toString());


        }

        
    }

}

class CustomObj {


    String name;
    int number;

    CustomObj(String name,int number){
        
        this.name = name;
        this.number = number;



    }

    @Override
    public String toString(){
        return (this.name+this.number);

    }


}
