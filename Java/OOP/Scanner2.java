package Materi_Wajib_2_OOP;

import java.util.Scanner;

public class Scanner2 {
    public static void main(String[] args){
    
        Scanner in = new Scanner(System.in);

        System.out.print("Masukan angka pertama  : ");
        int angkapertama = in.nextInt();

        System.out.print("Masukan angka terakhir : ");
        int angkaterakhir = in.nextInt();      
        
        //misal user input angkapertama 1, angkaterakhir 10
        //kemungkinan dari jumlah didalamnya adalah (10-1)/2+1 =5, ganjil 1 -10, 1 3 5 7 9

        int[] ganjil = new int[((angkaterakhir-angkapertama)/2)+ 1];

        int indexterakhir = 0;
        for(int i = angkapertama; i <= angkaterakhir; i++){
            
            if(i % 2 != 0){

                ganjil[indexterakhir] = i;
                indexterakhir++;
                System.out.println(i);
             }
        } 
        in.close();
    } 
}
