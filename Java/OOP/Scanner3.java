package Materi_Wajib_2_OOP;

import java.util.Scanner;

public class Scanner3 {
    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        System.out.print("Masukan jumlah angka : ");
        int nilai = in.nextInt();


        int array[] = new int[nilai];
        for(int i = 0; i < nilai; i++ ){
            System.out.print("Masukan angka ke : "+i+" :");
            array[i] = in.nextInt();
        }
       
       
        int max = array[0];
        int min = array[0];

        for(int i = 0; i < array.length -1; i++){       
        
            if(array[i] > max){
                max = array[i];
            }
            if(array[i] < min){
                min = array[i];
            }
        }
        System.out.println("Nilai terbesar adalah : "+max);
        System.out.println("Nilai terkecil adalah : "+min);

        in.close();
        
    }  
    
}
