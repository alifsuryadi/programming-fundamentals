package Materi_Wajib_2_OOP;

//import java.util.Scanner;

public class InheritanceEx {

    public static void main(String[] args){
        UfoA aUfo = new UfoA("Mesin Alfa", "Mesin A", 100);
        UfoB bUfo = new UfoB("Mesin Beta", "Mesin B", 200);

        System.out.println("Jumlah Orbit sudah dikelilingi "+ aUfo.getJumlahOrbit());

        if(aUfo.terbang(50)){
            System.out.println("Pesawat berhasil terbang");
            aUfo.tambahJumlahOrbit();
        }

        System.out.println("Jumlah Orbit yang sudah dikelilingi "+aUfo.getJumlahOrbit());

        System.out.println("Jumlah Galaxy yang sudah dikelilingi "+bUfo.getJumlahGalaxy());

        if(bUfo.terbang(50)){
            System.out.println("Pesawat berhasil terbang");
            bUfo.tambahJumlahGalaxy();
        }

        System.out.println("Jumlah Galaxy yang sudah dikelilingi "+ bUfo.getJumlahGalaxy());
    }
    
}

class Pesawat{
    String namaMesin;
    String jenisMesin;
    int kapasitasPenumpang;
    public Pesawat(String namaMesin,
                    String jenisMesin,
                    int kapasitasPenumpang){


    this.namaMesin = namaMesin;
    this.kapasitasPenumpang = kapasitasPenumpang;
    this.jenisMesin = jenisMesin;
    }

    public boolean terbang(int kapasitasPenumpangTerbang){

        if(kapasitasPenumpang >= kapasitasPenumpangTerbang){
            return true;
        }
        else{
            return false;
        }
    }

    public int getJumlahKapasitasPenumpang(){
        return kapasitasPenumpang;
    }
}

class UfoA extends Pesawat{
    int JumlahOrbit;

    public UfoA (String namaMesin,
                String jenisMesin,
                int kapasitasPenumpang){

    super(namaMesin, jenisMesin, kapasitasPenumpang);
    this.JumlahOrbit = 0;
    }

    public void tambahJumlahOrbit(){
        JumlahOrbit++;
    }
    public int getJumlahOrbit(){
        return JumlahOrbit;
    }
}

class UfoB extends Pesawat{

    int JumlahGalaxy;

    public UfoB(String namaMesin,
                String jenisMesin,
                int kapasitasPenumpang){
    
    super(namaMesin, jenisMesin, kapasitasPenumpang);
    this.JumlahGalaxy=0;
    }
    public void tambahJumlahGalaxy(){
        JumlahGalaxy++;
    }
    public int getJumlahGalaxy(){
        return JumlahGalaxy;
    }
}