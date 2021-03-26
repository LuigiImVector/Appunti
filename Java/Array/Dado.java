public class Dado {
    private int valore;

    public int lancia()
    {
        valore = (int)(Math.random()*6+1);
        return valore;
    }
}
