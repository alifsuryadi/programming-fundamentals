package Materi_Wajib_1_Pengenalan_Java;
public class LatihanTambahan3 {
    
    public static void main(String[] args)
    {
        int seconds = 86399;
        int p1 = seconds % 60;
        int p2 = seconds / 60;
        int p3 = p2 % 60;
        p2 = p2 / 60;
        System.out.print( p2 + ":" + p3 + ":" + p1);
        System.out.print("\n");
    }
}
