package abstractclass;

public class Main {
    public static void main(String[] args) {
        SimpleList liste = new SimpleArrayList();

        liste.add("A");
        liste.add("B");
        liste.add("C");
        liste.add("D");

        for (int i = 0; i < liste.size(); i++) {
            System.out.println(liste.get(i));
        }

        liste.remove(0);

        System.out.println(" ----------------------- ");

        for (int i = 0; i < liste.size(); i++) {
            System.out.println(liste.get(i));
        }

        System.out.println(" ----------------------- ");

        System.out.println(liste.contains("A"));
        System.out.println(liste.contains("B"));
    }
}
