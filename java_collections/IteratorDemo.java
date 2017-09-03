import java.util.*;

class IteratorDemo{

    public static void main(String[] args){

        ArrayList<String> al= new ArrayList<String>();
        al.add("hellO");
        al.add("rohith");
        al.add("reganti");

        ListIterator iter = al.listIterator();

// this gives IllegalStateException        iter.remove();
            
        Object[] obj = al.toArray();
        for(Object ob : obj){
            System.out.println(ob);
        }

    }



}
