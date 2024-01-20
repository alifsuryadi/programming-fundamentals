package Materi_Wajib_1_Pengenalan_Java;
public class StudiKasus9 {
    
    public static void main(String[] args){
        int a = 10;

        /*cara mengetahui jenis bilangan
        %2 == 1 untuk ganjil
        %2 == 0 untuk genap*/

        if(a%2 == 1){
            System.out.println("Ini adalah bilangan ganjil");
        }
        else if(a%2 == 0){
            System.out.println("Ini adalah bilangan genap");
        }
        else{
            System.out.println("Tidak ada bilangan");
        }
    }
}
