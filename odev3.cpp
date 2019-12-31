#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   const int size = 100;
   const int SORUSAYİSİ = 20;                     
   int count;
   char dogruCevap[SORUSAYİSİ];     
   char ogrenciCevap[SORUSAYİSİ];
   int ogrNum = 0;


   // dogru cevapları okumak icin
   ifstream infile( "input.txt" );   
   
   for ( int i = 0; i < SORUSAYİSİ; i++ )       
   {
      infile >> input[i];
                    
   }
   infile.close();


   ifstream infile( "input.txt")
  


   // ogrenciden ogrenciye gecis icin
   while ( infile); //bir ogrenci için
   {
      ogrNum++;                           //sonraki ogrenci

      // cevapları okumak icin
      for ( int i = 0; i < SORUSAYİSİ; i++ )  
      {
         infile >> ogrenciCevap[i];
         if ( !infile ) return 0;               
         
      }

      
      for ( int i = 0; i < SORUSAYİSİ; i++)
      {
         if ( dogruCevap[i] != ogrenciCevap[i] )
         {
            count++;
            cout << "Soru Numarası: " << setw( 2 ) << i - 1
                 << "   ogrenci cevabı: " << ogrenciCevap[i]
                 << "   dogru cevap: " << dogruCevap[i] << endl;
         }
      }
      cout << endl;

      double yuzde = 100.0 * ( SORUSAYİSİ - count ) / SORUSAYİSİ;  
      cout << "YANLIS SORU SAYISI: " << count   << endl;
      cout << endl;

     

     
   }                                                             

   infile.close();
} 
