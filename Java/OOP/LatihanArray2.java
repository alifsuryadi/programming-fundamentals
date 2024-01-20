package Materi_Wajib_2_OOP;

public class LatihanArray2 {

    public static void main(String[] args){
        int[] nilai = {1,2,3,4,2,4};

        //Menampilkan nilai double

        for(int i=0; i < nilai.length; i++ ){
            for(int ii=i+1; ii<nilai.length; ii++){
                if(nilai[i]==nilai[ii]){
                    System.out.println("Nilai double adalah : "+nilai[i]);
                }
            }
        }
    }
    
}
