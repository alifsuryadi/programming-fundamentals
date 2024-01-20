package Materi_Wajib_1_Pengenalan_Java;
public class LatihanConditionalLogic2 {
    
    public static void main(String[] args){
        int day = 2;
            
        if(day == 1){
            System.out.println("Sabtu");
        }
        else if(day == 2){
            System.out.println("Minggu");
        }
        else if(day == 3){
            System.out.println("Senin");
        }
        else if(day == 4){
            System.out.println("Selasa");
        }
        else if(day == 5){
            System.out.println("Rabu");
        }
        else if(day == 6){
            System.out.println("Kamis");
        }
        else if(day == 7){
            System.out.println("Jumat");
        }
        else{
            System.out.println("Invalid day");

        }
    }
}
