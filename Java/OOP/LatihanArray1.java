package Materi_Wajib_2_OOP;

public class LatihanArray1 {
    
    public static void main(String[] args){
        int[] inde = {3,4,5,7,9};
        int sum = 0;

        for(int i=0; i < inde.length; i++){
             sum = sum + inde[i];
        }
        System.out.println("Jumlah nilainya adalah : "+sum);
    }
}
