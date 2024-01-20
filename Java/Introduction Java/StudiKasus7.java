package Materi_Wajib_1_Pengenalan_Java;
public class StudiKasus7 {
    
    public static void main(String[] args){
        String username = "admin";
        String password = "password123";

        if(username.equals("admin") && (password.equals("password123"))){
            System.out.println("Selamat kamu berhasil login");
        }
        else{
            System.out.println("Mohon maaf, coba cek username & password anda kembali");
        }
    }
}
