package Materi_Wajib_1_Pengenalan_Java;
public class StudiKasus6 {
    
    public static void main(String[] args){
        String kalimat1 = "budi";
        String kalimat2 = "BUDI";
        
        //IgnoreCase = menjadikan sama / true
        if(kalimat1.equalsIgnoreCase(kalimat2)){
            System.out.println("Kalimat 1 dan Kalimat 2 sudah sama");
        }
    }
}
