package abstractclass;

public abstract class SimpleList {
    public abstract int size();
    public abstract boolean isEmpty();
    public abstract boolean contains(String s);
    public abstract String get(int i);
    public abstract void set(int i, String s);
    public abstract void remove(int i);
    public abstract void add(String s);
    public abstract void clear();
}
