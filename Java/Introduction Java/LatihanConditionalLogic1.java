package Materi_Wajib_1_Pengenalan_Java;

public class LatihanConditionalLogic1 {
    
    public static void main(String[] args){
        int angka1 = 10;
        int angka2 = 15;
        int angka3 = 12;

        //Boolean tidak selalu diberi variable
        //Menentukan angka terbesar

        if (angka1 > angka2 && angka1 > angka3){
            System.out.println("Maka angka terbesar adalah : "+angka1);
        }
        else if(angka2 > angka3){
            System.out.println("Maka angka terbesar adalah : "+angka2);
        }
        else {
            System.out.println("Maka angka terbesar adalah : "+angka3);
        }
            
        


    }
}
