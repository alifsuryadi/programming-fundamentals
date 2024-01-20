package Materi_Wajib_1_Pengenalan_Java;

public class LatihanConditionalLogic3 {
    
    //Program yang bisa membaca bilangan adalah satuan, puluhan atau ribuan

    public static void main(String[] args){
    int angka = 467500;
    
    if(angka < 10){
        System.out.println("Bilangan yang anda masukan adalah SATUAN");
    }
    else if(angka / 10 < 10){
        System.out.println("Bilangan yang anda masukan adalah PULUHAN");
    }
    else if(angka / 100 < 10){
        System.out.println("Bilangan yang anda masukan adalah RATUSAN");
    }
    else if(angka / 100000 < 10){
        System.out.println("Bilangan yang anda masukan adalah RIBUAN");
    }
    else if(angka / 100000000 < 10){
        System.out.println("Bilangan yang anda masukan adalah JUTAAN"); 
    }
    else{
        System.out.println("Bilangan yang anda masukan di atas MILIARAN");
    }
    }

}
