package Materi_Wajib_1_Pengenalan_Java;
public class LatihanTambahan1 {

    public static void main(String[] args) {
        char[] letters = "The quick brown fox".toCharArray();
        System.out.print("Reverse string: ");
        
        //Membalikan kata
        for (int i = letters.length - 1; i >= 0; i--) {
            System.out.print(letters[i]);
        }
        System.out.print("\n");
    }
}
