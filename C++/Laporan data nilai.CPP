//Program Laporan Data Nilai
#include<stdio.h>
#include<conio.h>
main()
{
 FILE *Fnilai;
 //Deklarasi Variable data dalam bentuk structure
 struct
 {
 char nobp[14],nm[25],kls[5];
 int nuts,nuas,ntgs,jhadir;
 }Rnilai;
 //Deklarasi Variable memeori
 int no,brs;
 float na;
 char nh;
 int jna,jnb,jnc,jnd,jne;
 //Aktifkan file data dengan tujuan dibaca

 	Fnilai=fopen("NILMHS.dat","r");
 if(Fnilai==NULL)
 {

  printf("File data tidak dapat dibaca");
  getch();
  }
//Tampilkan judul & header tabel
gotoxy(1,1);printf("                   Universitas Masa Depan Cerah");
gotoxy(1,2);printf("              Daftar Nilai Algoritma & Struktur Data II");
gotoxy(1,3);printf("            Semester Genap Tahun Akademik 2021/2022");
//                  12345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           1         2         3         4         5         6         7
gotoxy(1,5);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,6);printf("|   |              |               |     |       |            Nilai            |");
gotoxy(1,7);printf("|No.|   Nomor Bp   | Nama Mahasiswa|Kelas|JLHadir|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
gotoxy(1,8);printf("|   |              |               |     |       |Tugas| UTS | UAS |Angka|Huruf|");
gotoxy(1,9);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
no=0;brs=9;jna=0;jnb=0;jnc=0;jnd=0;jne=0;
//Baca data selama data masih ada
While(fread(&Rnilai,sizeof(Rnilai),1,Fnilai)==1);
 {
 no++;brs++;
 na=(100/16*Rnilai.jhadir)*0.15+Rnilai.ntgs*0.20+Rnilai.nuts*0.30+Rnilai.nuas*0.35;
 if(na>=85)
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
   		 else if(na>=45)
    		{
         nh='D';
    		jnd=jnd+1;
         }
    			else
            {
    			nh='E';
    			jne++;
            }

 //Tampilkan record & hasil proses
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
//Tampilkan garis penutup & total
gotoxy(1,brs+1);printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,brs+2);printf("Jumlah Nilai A : %i Orang",jna);
gotoxy(1,brs+3);printf("Jumlah Nilai B : %i Orang",jnb);
gotoxy(1,brs+4);printf("Jumlah Nilai C : %i Orang",jnc);
gotoxy(1,brs+5);printf("Jumlah Nilai D : %i Orang",jnd);
gotoxy(1,brs+6);printf("Jumlah Nilai E : %i Orang",jne);
getch();
//Tutup File data
fclose(Fnilai);
}
