package Materi_Wajib_2_OOP;

import java.util.Scanner;

public class ClassPesawat {
    String NamaMaskapai;
    int KapasitasPenumpang;
    int JumlahPenerbangan;
    int TahunProduksi;
    boolean MasihLayakPakai;

    public ClassPesawat(String NamaMaskapai,
                        int KapasitasPenumpang,
                        int TahunProduksi ){

    this.NamaMaskapai = NamaMaskapai;
    this.KapasitasPenumpang = KapasitasPenumpang;
    this.TahunProduksi = TahunProduksi;
    this.MasihLayakPakai = true;
    this.JumlahPenerbangan = 0;

    }

        public boolean terbang(int KapasitasPenumpangTerbang){

            if(MasihLayakPakai && KapasitasPenumpang >=
                KapasitasPenumpangTerbang && TahunProduksi > 2014){

                    this.JumlahPenerbangan++;
                    if(JumlahPenerbangan > 5){
                        MasihLayakPakai = false;
                    }
                    return true;
                }
                else{
                    return false;
                }
        }

        public int getJumlahKapasitasPenumpang(){
            return KapasitasPenumpang;
        }
        public boolean getMasihLayakPakai(){
            return MasihLayakPakai;
        }
        public int getJumlahPenerbangan(){
            return JumlahPenerbangan;
        }
        public int getTahunProduksi(){
            return TahunProduksi;
        }

    
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.print("Masukan Nama Maskapai : " );
        String NamaMaskapai = in.nextLine();
        System.out.print("Masukan Kapasitas Penumpang : ");
        int KapasitasPenumpang =in.nextInt();
        System.out.print("Masukan Tahun Produksi : ");
        int TahunProduksi = in.nextInt();

        ClassPesawat classPesawat = new ClassPesawat(NamaMaskapai, KapasitasPenumpang, TahunProduksi);


        //hasNextLine = input tidak terbatas
        while(in.hasNextLine()){
            System.out.println("Apakah pesawat akan terbang? (y/n) : ");

            if(in.nextLine().equals("y")){
                System.out.print("Berapa penumpang akan terbang? : ");
                int KapasitasPenumpangTerbang = in.nextInt();

                if(classPesawat.terbang(KapasitasPenumpangTerbang)){
                    System.out.println("Pesawat Terbang");
                }
                else{
                    System.out.println("Pesawat Tidak Boleh Terbang Lagi");
                }
            }

        }

        in.close();
    }

    

}