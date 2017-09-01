import java.util.*;
import java.io.*;

class LexoSort {

    public static void main(String args[]){
        
        ArrayList<String> al = new ArrayList<String>();
        al.add("a");
        al.add("b");
        al.add("aaa");
        al.add("x");
/*
        Comparator<String> c = new Comparator<String>() {
            
            @Override
            public int compare(String s, String r){
                    return s.compareTo(r);
            }

        };
*/
        Collections.sort(al, new Comparator<String>() {
            
            @Override
            public int compare(String s, String r){

                    if(s.length()==r.length()){
                        return s.compareTo(r);
                    }
                    return s.length()-r.length();
            }

        }
        
        );



        System.out.println(al);
    }

}
