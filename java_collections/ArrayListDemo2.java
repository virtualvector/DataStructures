import java.util.*;
import java.io.*;
import java.lang.*;

class ArrayListDemo2 {

    public static void main(String[] args){

        ArrayList<Student> al = new ArrayList<Student>();
        al.add(new Student("rohith",111));
        al.add(new Student("raj",222));
        al.add(new Student("abi",333));
        al.add(new Student("varun",001));
        al.add(new Student("rohith",001));

        Collections.sort(al,new CompareName());

        for(Student i : al){
                
                System.out.println(i.toString());
        }

    }

}

class Student {

    Student(String name,int usn){

        this.name = name;
        this.usn = usn;

    }
    
    String name;
    int usn;

    @Override
    public String toString(){
        
        return (this.name + " "+this.usn+"\n");
    }


}

class CompareName implements Comparator<Student> {

    public int compare(Student s1,Student s2){
        
        if( s1.name.compareTo(s2.name)==0){
            
            return s1.usn -s2.usn;

        }
        else return s1.name.compareTo(s2.name);

    }


}
