package Materi_Wajib_1_Pengenalan_Java;
public class LatihanNestedLoop {
   
    public static void main(String[] args){
        int segitiga = 10;

        for(int i = segitiga; i >= 0; i--){

            String bintang ="";
            for(int ii = 0; ii <= segitiga; ii++){
                if (ii <= i){
                    bintang = bintang + " ";
                }
                else{
                    bintang = bintang +"*";
                }
            }
        System.out.println(bintang);
        }
    }
}
