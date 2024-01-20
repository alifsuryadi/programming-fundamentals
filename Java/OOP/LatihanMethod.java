package Materi_Wajib_2_OOP;

import java.util.Scanner;

    public class LatihanMethod {

    //isi method ini dengan mengecek apakah String mengandung Pintaar atau tidak,
    //jika iya balikkan true, jika tidak balikkan false
    static boolean cekMengandungPintaar(String str) {

        //jumlah string length pintaar = 7, "Pintaar"
        if(str.length() >= 7 && str.substring(0,7).equals("Pintaar")){
            return true;
        }
        else{
            return false;
        }
    }
    //isi method ini mengambil String setelah huruf Pintaar, contoh "PintaarJava" kembalikan "Java"
    static String ambilStringSetelahPintaar(String str) {
        return str.substring(7,str.length());
    }
    //isi method ini dengan menghitung banyak huruf vokal dari sebuah string
    static int hitungHurufVokal(String str) {
        int jumlahHurufVokal = 0;
        for(int i = 0; i < str.length(); i++){
            if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u'){

                    jumlahHurufVokal++;
                }
        }
        return jumlahHurufVokal;
    }

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Masukkan String: ");
        String str = keyboard.nextLine();

        if(cekMengandungPintaar(str)){
            str = ambilStringSetelahPintaar(str);
            System.out.println("Jumlah Huruf Vokal yang ada: "+ hitungHurufVokal(str));
        }
        else{
            System.out.println("String tidak mengandung Pintaar");
        }
        keyboard.close();
    }   
 }


