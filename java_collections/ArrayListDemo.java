import java.util.*;

class ArrayListDemo{

    public static void main(String[] args){

            ArrayList<Integer> integers = new ArrayList<Integer>();

            //generic methods in collection interface
            integers.add(1);
            integers.add(2);
            integers.add(3);
            print(integers);

            //contains()
            System.out.println(integers.contains(1));

            ArrayList<Integer> integers2 = new ArrayList<Integer>();
            integers2.add(1);

            //addAll()
            integers.addAll(integers2);
            print(integers);


            //containsAll()
           System.out.println( integers.containsAll(integers2));


           //isEmpty()
           System.out.println(integers.isEmpty());


           //size()
           System.out.println(integers.size());

           //remove
           System.out.println("removed 2");
           integers.remove(new Integer(2));
           print(integers);

           //removeAll()
           integers.removeAll(integers2);

           //toArray()

           Object a[] ;
           a = integers.toArray();


            }

            public static void print(ArrayList<Integer> integers){

                
            for(Integer e : integers){
                System.out.print(e+" ");


            }


    }




}
