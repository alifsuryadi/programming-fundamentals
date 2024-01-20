#include<stdio.h>
#include<conio.h>
#include<string.h>

 FILE *Fnilai;
 struct
 {
  char nobp[15], nm[25], kls[5];
  int nuts, nuas, ntgs, jhadir;
 }Rnilai;

 char Vnobp[15];
 char mad, ketemu;
entry()
{
 //Variabel memory
 char dsb;
 mad='y';
 while(mad=='y'||mad=='Y')
 {
  //Tampilkan form input
  clrscr();
  gotoxy(10, 1);printf("   Universitas Masa Depan Cerah");
  gotoxy(10, 2);printf("Entry Data Nilai Algo & Pemrograman");
  gotoxy(10, 3);printf("     Tahun Akademik 2021/2022");
  gotoxy(10, 4);printf("~~~~~~~~~~~~");fflush(stdin);
  gotoxy(10, 5);printf("Nomor Bp         : ");
  gotoxy(10, 6);printf("Nama Mahasiswa   : ");
  gotoxy(10, 7);printf("Kelas            : ");
  gotoxy(10, 8);printf("Nilai UTS        : ");
  gotoxy(10, 9);printf("Nilai UAS        : ");
  gotoxy(10,10);printf("Nilai Tugas      : ");
  gotoxy(10,11);printf("Jumlah Kehadiran : ");

  //Inputkan nomor bp cari
  gotoxy(29, 5);gets(Vnobp);

  //File diaktifkan untuk dibaca
  Fnilai=fopen("NILMHS.dat","r");

  ketemu='t';
  if(Fnilai==NULL)
    //File diaktifkan untuk membuat file baru
    Fnilai=fopen("NILMHS.dat","w");
  else
  {
   //Cari vnobp ke file data dengan cara membandingkan dengan nobp
   while(fread(&Rnilai,sizeof(Rnilai),1,Fnilai)==1)
   {
    if(strcmp(Rnilai.nobp,Vnobp)==0)
    {
     ketemu='y';
     //Tampilkan Record cari
     gotoxy(29, 6);printf("%s",Rnilai.nm);
     gotoxy(29, 7);printf("%s", Rnilai.kls);
     gotoxy(29, 8);printf("%i", Rnilai.nuts);
     gotoxy(29, 9);printf("%i", Rnilai.nuas);
     gotoxy(29,10);printf("%i", Rnilai.ntgs);
     gotoxy(29,11);printf("%i", Rnilai.jhadir);
    }
   }
  }
  fclose(Fnilai);
  //Inputkan data Nilai jika vnobp tidak ada  di file data
  if(ketemu=='t')
  {
   //Inputkan Data Nilai
   gotoxy(29, 6);gets(Rnilai.nm);
   gotoxy(29, 7);gets(Rnilai.kls);
   gotoxy(29, 8);scanf("%i", &Rnilai.nuts);
   gotoxy(29, 9);scanf("%i", &Rnilai.nuas);
   gotoxy(29,10);scanf("%i", &Rnilai.ntgs);
   gotoxy(29,11);scanf("%i", &Rnilai.jhadir);
   strcpy(Rnilai.nobp,Vnobp);
   gotoxy(10,13);printf("Data Sudah Benar?? Y/T [ ]");gotoxy(34,13);dsb=getche();
   if(dsb=='y'||dsb=='Y')
   {
    //File diaktifkan untuk menambah data
    Fnilai=fopen("NILMHS.dat","a");
    //Rekam data
    fwrite(&Rnilai,sizeof(Rnilai),1,Fnilai);
   }

   else
   {
   gotoxy(10,14);printf("Data tidak disimpan");
   getch();
   }
   fclose(Fnilai);
   }
  else
  {
  gotoxy(10,13);printf("Nomor BP tersebut sudah ada");
  getch();
  }
 gotoxy(10,14);printf("Masih Ada Data??   Y/T [ ]");gotoxy(34,14);mad=getche();
 }
 fclose(Fnilai);
}

char nh;
float na;

lapsel()
{
 clrscr();
 //Variabel memory
 int no, brs;
 int jna, jnb, jnc, jnd, jne;
 Fnilai=fopen("NILMHS.dat","r");
 //mengecek apakah data sudah ada atau belum "Fnilai==NULL"
 if(Fnilai==NULL)
 {
  clrscr();
  printf("File data tidak dapat dibaca");
  getch();
 }

 //Tampilkan Judul dan Header Tabel
  gotoxy(1,1);printf("                        Universitas Masa Depan Cerah");
  gotoxy(1,2);printf("                 Entry Data Nilai Algoritma & Pemrograman II");
  gotoxy(1,3);printf("                    Semester Gebab Tahun Ajaran 2021/2022");
  //                  12345678901234567890123456789012345678901234567890123456789012345678901234567890
  //                           1         2         3         4         5         6         7         8
  gotoxy(1,5);printf("--------------------------------------------------------------------------------");
  gotoxy(1,6);printf("|No.|      NIM     | Nama Mahasiswa|Kelas|Absensi|            Nilai            |");
  gotoxy(1,7);printf("|   |              |               |     |       |-----------------------------|");
  gotoxy(1,8);printf("|   |              |               |     |       |Tugas| UTS | UAS |Angka|Huruf|");
  gotoxy(1,9);printf("--------------------------------------------------------------------------------");
  jna=0;jnb=0;jnc=0;jnd=0;jne=0;
  no=0;brs=9;
  while(fread(&Rnilai,sizeof(Rnilai),1,Fnilai)==1)
  {
   na=(100/16*Rnilai.jhadir)*0.15+Rnilai.ntgs*0.2+Rnilai.nuts*0.3+Rnilai.nuas*0.35;
   if(na>=80)
   {
    nh='A';jna++;
   }
   else if(na>=65)
        {
         nh='B';jnb++;
        }
        else if(na>=55)
             {
              nh='C';jnc++;
             }
             else if(na>=40)
                  {
                   nh='D';jnd++;
                  }
                  else
                     {
                      nh='E';jne++;
                     }
   no++;brs++;
   //Tampilkan isi tabel/record
   gotoxy( 1,brs);printf("|");gotoxy( 3,brs);printf("%i",no);
   gotoxy( 5,brs);printf("|");gotoxy( 6,brs);printf("%s",Rnilai.nobp);
   gotoxy(20,brs);printf("|");gotoxy(21,brs);printf("%s",Rnilai.nm);
   gotoxy(36,brs);printf("|");gotoxy(37,brs);printf("%s",Rnilai.kls);
   gotoxy(42,brs);printf("|");gotoxy(45,brs);printf("%i",Rnilai.jhadir);
   gotoxy(50,brs);printf("|");gotoxy(52,brs);printf("%i",Rnilai.ntgs);
   gotoxy(56,brs);printf("|");gotoxy(58,brs);printf("%i",Rnilai.nuts);
   gotoxy(62,brs);printf("|");gotoxy(64,brs);printf("%i",Rnilai.nuas);
   gotoxy(68,brs);printf("|");gotoxy(70,brs);printf("%3.0f",na);
   gotoxy(74,brs);printf("|");gotoxy(77,brs);printf("%c",nh);
   gotoxy(80,brs);printf("|");
  }
  //Tampilkan Garis Tutup & Total
  gotoxy(1,brs+1);printf("--------------------------------------------------------------------------------");
  gotoxy(1,brs+2);printf("Jumlah Nilai A : %i orang", jna);
  gotoxy(1,brs+3);printf("Jumlah Nilai B : %i orang", jnb);
  gotoxy(1,brs+4);printf("Jumlah Nilai C : %i orang", jnc);
  gotoxy(1,brs+5);printf("Jumlah Nilai D : %i orang", jnd);
  gotoxy(1,brs+6);printf("Jumlah Nilai E : %i orang", jne);
  printf("\n");
  getch();
  //Tutup File
  fclose(Fnilai);
}

lapter()
{
 clrscr();
 //Deklarasi variabel memory
 char ket[6];
 mad='y';
 while(mad=='y'||mad=='Y')
 {
  //Tampilan Form Input
  clrscr();
  gotoxy(10, 1);printf("   Universitas Masa Depan Cerah");
  gotoxy(10, 2);printf("Entry Data Nilai Algo & Pemrograman");
  gotoxy(10, 3);printf("     Tahun Akademik 2021/2022");
  gotoxy(10, 4);printf("~~~~~~~~~~~~");fflush(stdin);
  gotoxy(10, 5);printf("Nomor Bp         : ");
  gotoxy(10, 6);printf("Nama Mahasiswa   : ");
  gotoxy(10, 7);printf("Kelas            : ");
  gotoxy(10, 8);printf("Nilai UTS        : ");
  gotoxy(10, 9);printf("Nilai UAS        : ");
  gotoxy(10,10);printf("Nilai Tugas      : ");
  gotoxy(10,11);printf("Jumlah Kehadiran : ");
  gotoxy(10,12);printf("Nilai Angka      : ");
  gotoxy(10,13);printf("Nilai Huruf      : ");
  gotoxy(10,14);printf("Keterangan       : ");
  //Inputkan nomor bp yang dicari
  gotoxy(29,5);gets(Vnobp);
  //File diaktifkan untuk dibaca
  Fnilai=fopen("NILMHS.dat","r");
  ketemu='t';
  if(Fnilai==NULL)
    {
     printf("File Tidak Dapat dibaca");
     getch();
    }
  /*..Cari Vnobp ke file data dengan cara membandingkan dengan nobp ..*/
  while(fread(&Rnilai,sizeof(Rnilai),1,Fnilai)==1)
  {
   if(strcmp(Rnilai.nobp,Vnobp)==0)
   {
    ketemu='y';
    //proses
    na=(100/16*Rnilai.jhadir)*0.15+Rnilai.ntgs*0.2+Rnilai.nuts*0.3+Rnilai.nuas*0.35;
    if(na>=80)
      nh='A';
      else if(na>=65)
             nh='B';
             else if(na>=55)
                    nh='C';
                    else if(na>=45)
                           nh='D';
                           else
                             nh='E';
    if(nh=='D'||nh=='E')
      strcpy(ket,"Gagal");
      else
        strcpy(ket,"Lulus");
    //Tampilkan Record cari & hasil Proses
    gotoxy(29, 6);printf("%s",Rnilai.nm);
    gotoxy(29, 7);printf("%s",Rnilai.kls);
    gotoxy(29, 8);printf("%i",Rnilai.nuts);
    gotoxy(29, 9);printf("%i",Rnilai.nuas);
    gotoxy(29,10);printf("%i",Rnilai.ntgs);
    gotoxy(29,11);printf("%i",Rnilai.jhadir);
    gotoxy(29,12);printf("%3.0f",na);
    gotoxy(29,13);printf("%c",nh);
    gotoxy(29,14);printf("%s",ket);
   }
  }
    if(ketemu=='t')
    {
     gotoxy(10,16);printf("Nomor Bp tersebut tidak ada");getch();
    }
    gotoxy(10,17);printf("Masih Ada Data?? Y/T [ ]");gotoxy(32,17);mad=getche();
  }
 fclose(Fnilai);
}

main()
{
 int pil=0;
 while(pil<4)
 {
  clrscr();
  gotoxy(25, 5);printf("Universitas Masa Depan Cerah");
  gotoxy(25, 6);printf("     << Menu Pilihan >>     ");
  gotoxy(25, 7);printf("~~~~~~~~~~~~~~");
  gotoxy(25, 8);printf("1. Entry Data Nilai         ");
  gotoxy(25, 9);printf("2. Laporan Data Nilai Secaea Keseluruhan");
  gotoxy(25,10);printf("3. Laporan Data Nilai Secara Perorangan");
  gotoxy(25,11);printf("4. Keluar ");
  gotoxy(25,13);printf("Silahkan Inputkan Pilihan [1-4] [ ]");gotoxy(58,13);scanf("%i",&pil);
  if(pil==1)
    {entry();continue;}
    else if(pil==2)
           {lapsel();continue;}
           else if(pil==3)
                  {lapter();continue;}

 }
}