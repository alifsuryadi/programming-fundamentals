package Materi_Wajib_1_Pengenalan_Java;

public class LatihanLooping {
    
    public static void main(String[] args){
        int hurufa = 0;
        String kalimat = "Saya senang sekali";

        //kalimat.length = kalimat dihitung satu-satu
        for(int i = kalimat.length()- 1; i >= 0 ; i--){

            //charAt = Mengambil satu huruf
            if(kalimat.charAt(i)== 'a'){
                hurufa++;
            }
        }

        System.out.println("Jumlah Huruf a : " + hurufa);
    }

}
