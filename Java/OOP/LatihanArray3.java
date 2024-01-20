package Materi_Wajib_2_OOP;

public class LatihanArray3 {

    public static void main(String[] args){
        int[] a = {1,2,3,4,5};
        int[] b = {2,5,6,4};

        int max = a[0];
        int maxkedua = a[1];

        int maxb = b[0];
        int maxkeduab = b[1];

        //Menghitung angka terbesar kedua
        
        for(int i = 1; i <a.length; i++){
            if(a[i] > max){
                maxkedua = max;
                max = a[i];
            }
            else {
                if(a[i] != max && a[i] > maxkedua){
                    maxkedua = a[i];
                }
            }
        }
        for (int ii= 1; ii < b.length; ii++){
            if(b[ii] > maxb){
                maxkeduab = maxb;
                maxb = b[ii];
            }
            else{
                if(b[ii] != maxb && b[ii] > maxkeduab){
                    maxkeduab = b[ii];
                }
            }
        }
        System.out.println("Angka kedua terbesar adalah "+maxkedua);
        System.out.println("Angka kedua terbesar adalah "+maxkeduab);

    }

    
}
