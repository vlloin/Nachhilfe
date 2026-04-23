package abstractclass;

public class SimpleArrayList extends SimpleList {

    private String[] elements;

    public SimpleArrayList(){
        elements = new String[0];
    }

    @Override
    public int size() {
        return elements.length;
    }

    @Override
    public boolean isEmpty() {
        if(elements.length == 0){
            return true;
        }
        return false;
    }

    @Override
    public boolean contains(String s) {
        for(int i = 0; i < elements.length; i++){
            if(elements[i].equals(s)){
                return true;
            }
        }
        return false;
    }

    @Override
    public String get(int i) {
        return elements[i];
    }

    @Override
    public void set(int i, String s) {
        elements[i] = s;
    }

    @Override
    public void remove(int i) {
        String[] old = elements;
        elements = new String[old.length - 1];

        for(int j = 0; j < i; j++){
            elements[j] = old[j];
        }
        for(int j = i; j < elements.length; j++){
            elements[j] = old[j + 1];
        }
    }

    @Override
    public void add(String s) {
        String[] old = elements;
        elements = new String[old.length + 1];

        for(int j = 0; j < old.length; j++){
            elements[j] = old[j];
        }

        elements[old.length] = s;
    }

    @Override
    public void clear() {
        elements = new String[0];
    }
}
