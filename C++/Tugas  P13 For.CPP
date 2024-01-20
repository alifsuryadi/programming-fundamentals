/*tugas kuliah di pertemuan 13*/
#include<conio.h>
#include<stdio.h>

main()
{
 int bil;
 puts(" Menampilkan Bilangan Genap dan Ganjil");
 puts("   dari Deretan Bilangan 10 s/d 20 ");
 puts(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 puts("\tBilangan \t Keterangan ");

 for(bil=10;bil<=20;bil++)
  {
  if(bil%2==0)
  printf("\t  %i\t\t  Genap \n",bil);
  else
  printf("\t  %i\t\t  Ganjil \n",bil);
  }
  printf("Yes Sukses !!");
  getch();
 }
