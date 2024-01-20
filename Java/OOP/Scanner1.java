package Materi_Wajib_2_OOP;

import java.util.Scanner;
public class Scanner1 {
    
    public static void main(String args[]){


        Scanner in = new Scanner(System.in);
        System.out.print("Masukan kalimat : ");
        String nilai = in.nextLine(); 


        char[] nilai_arr = new char[nilai.length()];
        
        for(int i=0; i < nilai.length()-1; i++){
            nilai_arr[i] = nilai.charAt(i);

            System.out.println(nilai_arr[i]);
        }
        //solusi lain bisa menggunakan method char[] pintaar_arr = pintaar.toCharArray();
    
        in.close();
    }
}
