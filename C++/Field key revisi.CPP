//program menggunakan procedure kasus nilai menggunakan field key
#include<stdio.h>
#include<conio.h>
#include<string.h>
 FILE *Fnilai;
 struct
 {
  char nobp[15],nm[25],kls[5];
  int nuts,nuas,ntgs,jhadir;
 }Rnilai;

 char Vnobp[15];
 char dsb, mad, ketemu;
entry()
{
 //deklasrasi variabel memory
 char dsb;
 mad='y';
 while(mad=='y'||mad=='Y')
 {
  //Tampilkan form input
  clrscr();
  gotoxy(10, 1);printf("  Universitas Masa Depan Cerah ");
  gotoxy(10, 2);printf(" Entry Data Nilai Algo & Pemrograman I");
  gotoxy(10, 3);printf("    Tahun Akademik 2021/2022 ");
  gotoxy(10, 4);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");fflush(stdin);
  gotoxy(10, 5);printf("Nomor BP        :");
  gotoxy(10, 6);printf("Nama Mahasiswa  :");
  gotoxy(10, 7);printf("Kelas           :");
  gotoxy(10, 8);printf("Nilai Ujian MID :");
  gotoxy(10, 9);printf("Nilai Ujian UAS :");
  gotoxy(10,10);printf("Nilai Tugas     :");
  gotoxy(10,11);printf("Jumlah Kehadiran:");

  //Inputkan nobp cari
  gotoxy(28, 5);gets(Vnobp);

  //file diaktifkan untuk dibaca
  Fnilai=fopen("NILMHS.dat","r");

  ketemu='t';
  if(Fnilai==NULL)
     //file diaktifkan untuk membuat file baru
     Fnilai=fopen("NILMHS.dat","w");
  else
  {
   /*... cari Vnobp ke file data dengan cara membandingkan dengan nobp..*/
   while(fread(&Rnilai,sizeof(Rnilai),1,Fnilai)==1)
   {
    if(strcmp(Rnilai.nobp,Vnobp)==0)
    {
     ketemu='y';
     //tamppilkan record cari
     gotoxy(28, 6);printf("%s",Rnilai.nm);
     gotoxy(28, 7);printf("%s",Rnilai.kls);
     gotoxy(28, 8);printf("%i",Rnilai.nuts);
     gotoxy(28, 9);printf("%i",Rnilai.nuas);
     gotoxy(28,10);printf("%i",Rnilai.ntgs);
     gotoxy(28,11);printf("%i",Rnilai.jhadir);
    }
   }
  }
  fclose(Fnilai);

  /*..Inputkan data nilai jika Vnobp tidak ada di file data*/
  if(ketemu=='t')
  {
   //inputkan data nilai
     gotoxy(28, 6);gets(Rnilai.nm);
     gotoxy(28, 7);gets(Rnilai.kls);
     gotoxy(28, 8);scanf("%i",&Rnilai.nuts);
     gotoxy(28, 9);scanf("%i",&Rnilai.nuas);
     gotoxy(28,10);scanf("%i",&Rnilai.ntgs);
     gotoxy(28,11);scanf("%i",&Rnilai.jhadir);
     strcpy(Rnilai.nobp,Vnobp);
     gotoxy(10,13);printf("Data Sudah Benar?? Y/T [.]");gotoxy(34,13);dsb=getche();
     if(dsb=='y'||dsb=='Y')
     {
      //File diaktifkan untuk menambah data
      Fnilai=fopen("NILMHS.dat","a");

      //Rekam data
      fwrite(&Rnilai,sizeof(Rnilai),1,Fnilai);
     }
   else
   {
    gotoxy(10,14);printf("Data Tidak Disimpan");
    getch();
   }
   fclose(Fnilai);
  }
  else
  {
   gotoxy(10,13);printf("Nomor BP tersebut sudah ada");
   getch();
  }
  gotoxy(10,14);printf("Masih Ada Data??  Y/T  [.]");gotoxy(34,14);mad=getche();
  }

 fclose(Fnilai);


float na;
char nh;
lapsel()
{
 //Deklarasi Variabel Memory
 int no,brs;
 int jna,jnb,jnc,jnd,jne;
 //Aktifkan file data dengan tujuan dibaca
 Fnilai=fopen("NILMHS.dat","r");
 if(Fnilai==NULL)
 {
  printf("FIle Tidak Dapat Dibaca");
  getch();
 }
 //tampilkan judul dan header tabel
clrscr();
gotoxy(1,1);printf("                       Universitas Masa Depan Cerah");
gotoxy(1,2);printf("               Daftar Nilai Algoritma & Strukture Data II");
gotoxy(1,3);printf("                Semester Genap Tahun Akademik 2021/2022");
                  //12345678901234567890123456789012345678901234567890123456789012345678901234567890
                  //         1         2         3         4         5         6         7         8
gotoxy(1,5);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,6);printf("|   |              |               |     |Jumlah |           Nilai             |");
gotoxy(1,7);printf("|No.|   Nomor BP   | Nama Mahasiswa|Kelas| Hadir |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
gotoxy(1,8);printf("|   |              |               |     |       |Tugas| UTS | UAS |Angka|Huruf|");
gotoxy(1,9);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
no=0;brs=9;jna=0;jnb=0;jnc=0;jnd=0;jne=0;

//Baca data selama data masih ada
while(fread(&Rnilai,sizeof(Rnilai),1,Fnilai)==1)
{
 no++;brs++;
 na=(100/16*Rnilai.jhadir)*0.15+Rnilai.ntgs*0.20+Rnilai.nuts*0.30+Rnilai.nuas*0.35;
 if(na>=80)
 {
  nh='A';
  jna=jna+1;
 }
  else if(na>=65)
  {
   nh='B';
   jnb=jnb+1;
  }
   else if(na>=55)
   {
    nh='C';
    jnc=jnc+1;
   }
    else if(na>=40)
    {
     nh='D';
     jnd=jnd+1;
    }
     else
     {
      nh='E';
      jne=jne+1;
     }

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

 //Tampilkan garis tutup dan total
   gotoxy(1,brs+1);printf("--------------------------------------------------------------------------------");
   gotoxy(1,brs+2);printf("Jumlah Nilai A : %i Orang",jna);
   gotoxy(1,brs+3);printf("Jumlah Nilai B : %i Orang",jnb);
   gotoxy(1,brs+4);printf("Jumlah Nilai C : %i Orang",jnc);
   gotoxy(1,brs+5);printf("Jumlah Nilai D : %i Orang",jnd);
   gotoxy(1,brs+6);printf("Jumlah Nilai E : %i Orang",jne);
   gotoxy(1,brs+8);printf("Press Anykey to Continue...");
   getch();
//Tutup file data
fclose(Fnilai);


//File diaktifkan untuk dibaca
Fnilai=fopen("NILMHS.dat","r");
ketemu='t';
if(Fnilai==NULL)
{
  printf("File Tidak Dapat Dibaca");
  getch();
}
/*..Cari Vnobp ke file data dengan cara membandingkan dengan nobp..*/
 while(fread(&Rnilai,sizeof(Rnilai),1,Fnilai)==1)
 {
 if(strcmp(Rnilai.nobp,Vnobp)==0)
 {
  ketemu='y';
  //Proses
  na=(100/16*Rnilai.jhadir)*0.15+Rnilai.ntgs*0.20+Rnilai.nuts*0.30+Rnilai.nuas*0.35;
  if(na>=80)
   nh='A';
   else if(na>=65)
     nh='B';
     else if(na>55)
      nh='C';
       else if(na>=45)
         nh='D';
         else
          nh='E';
   if(nh=='D' || nh=='E';
    strcpy(ket,"Gagal");
   else
    strcpy(ket,"Lulus");

lapter()
{
 //Deklarasi variabel memory
 char ket[5];
 mad='y';
 while(mad=='y' || mad=='Y')
 {
  //Tampilkan form input
  clrscr();
  gotoxy(10, 1);printf("   Universitas Masa Depan Cerah ");
  gotoxy(10, 2);printf("Daftar Nilai Algo & Pemrograman II");
  gotoxy(10, 3);printf("     Tahun Akademik 2021/2022 ");
  gotoxy(10, 4);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");fflush(stdin);
  gotoxy(10, 5);printf("Nomor BP        :");
  gotoxy(10, 6);printf("Nama Mahasiswa  :");
  gotoxy(10, 7);printf("Kelas           :");
  gotoxy(10, 8);printf("Nilai Ujian MID :");
  gotoxy(10, 9);printf("Nilai Ujian UAS :");
  gotoxy(10,10);printf("Nilai Tugas     :");
  gotoxy(10,11);printf("Jumlah Kehadiran:");
  gotoxy(10,12);printf("    Nilai Angka :");
  gotoxy(10,13);printf("    Nilai Huruf :");
  gotoxy(10,14);printf("    Keterangan  :");

  //Inputkan nomor bp cari
  gotoxy(28, 5);gets(Vnobp);

  //Tampilkan record cari & hasil proses
  gotoxy(28, 6);printf("%s",Rnilai.nm);
  gotoxy(28, 7);printf("%s",Rnilai.kls);
  gotoxy(28, 8);printf("%i",Rnilai.nuts);
  gotoxy(28, 9);printf("%i",Rnilai.nuas);
  gotoxy(28,10);printf("%i",Rnilai.ntgs);
  gotoxy(28,11);printf("%i",Rnilai.jhadir);
  gotoxy(28,12);printf("%3.0f",na);
  gotoxy(28,13);printf("%c",nh);
  gotoxy(28,14);printf("%s",ket);
 }
}
  if(ketemu=='t')
  {
  gotoxy(10,16);printf("Nomor BP tersebut sudah ada");getch();
 }
  gotoxy(10,17);printf("Masih Ada Data??  Y/T  [.]");gotoxy(34,15);mad=getche();
  }
 fclose(Fnilai);
}

main()
{
 int pil=0;
 while(pil<4)
 {
  clrscr();
  gotoxy(25, 5);printf("       Universitas Masa Depan Cerah     ");
  gotoxy(25, 6);printf("            << Menu Pilihan>>           ");
  gotoxy(25, 7);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
  gotoxy(25, 8);printf("1. Entry Data Nilai                     ");
  gotoxy(25, 9);printf("2. Laporan Data Nilai secara Keseluruhan");
  gotoxy(25,10);printf("3. Laporan Data NIlai secara Perorangan ");
  gotoxy(25,11);printf("4. Keluar                               ");
  gotoxy(25,13);printf("Silahkan Inputkan Pilihan [1..4] [.]");
  gotoxy(58,12);scanf("%i",&pil);
  if(pil==1)
   {entry();continue;}
   else if(pil==2)
          {lapsel();continue;}
          else if(pil==3)
                 {lapter();continue;}
 }
}