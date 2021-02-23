#include <iostream>
using namespace std;

//struct
struct daerah{
	char kel[50];
    char kec[50];
    char kota[50];
};
struct data {
    int nomor;
    char nama[50];
    char agama[20];
    char status[20];
    char pekerjaan[20];
    char tempat[20];
    char tanggal[20];
    char almt[20];
    daerah alamat;
};
//array
    string Provinsi [34] = {"Aceh",	"Sumatera", "Sumatera Barat", "Riau","Kepulauan Riau",	"Bengkulu",	"Jambi","Kep. Bangka Belitung",	"Sumatera Selatan",	
                    "Bandar Lampung", "Banten",	"DKI Jakarta",	"Jawa Barat",	"Jawa Tengah",	"Jawa Timur",	"Daerah Istimewa Yogyakarta (DIY)",	
                    "Bali",	"Nusa Tenggara Barat",	"Nusa Tenggara Timur",	"Kalimantan Barat",	"Kalimantan Utara",	"Kalimantan Tengah",	
                    "Kalimantan Timur",	"Kalimantan Selatan",	"Sulawesi Barat",	"Sulawesi Selatan",	"Sulawesi Tengah",	"Sulawesi Tenggara",	
                    "Sulawesi Utara",	"Gorontalo",	"Maluku",	"Maluku Utara",	"Papua",	"Papua Barat"};
//variabel
int main(){
	int menu;
    int nik=-1,x,y;
    int n;
    n=1;
    int pilih;
    int nomernik;
    data ktp[20];
    char get[1];
    bool temukan;
    
    menuinti:
    system("clear || cls");
    //banner
    cout<<"   _____            ____                     \n";
    cout<<"  / ___/___  ____  / __ \\__  __             \n";
    cout<<"  \\__ \\/ _ \\/ __ \\/ / / / / / /          \n";
    cout<<" ___/ /  __/ / / / /_/ / /_/ /               \n";
    cout<<"/____/\\___/_/ /_/_____/\\__,_/ v1.0         \n";
    cout<<"++ Software Sensus Penduduk 2019 ++          \n";
    cout<<"Created by : Daffa Gifari Akmal\n";
    cout<<"             Farhan Ulil Fajri\n";
    cout<<"             Alif Gibrannur Sy.\n\n";
	
	cout<<"==++ SELAMAT DATANG DI SOFTWARE SENSUS PENDUDUK 2019 ++==\n\n";
    cout<<"1 [*] MENAMBAH DATA PENDUDUK\n";
    cout<<"2 [*] MENCARI DATA PENDUDUK\n";
    cout<<"3 [*] MENGHAPUS DATA PENDUDUK\n"; //kematian, lahir
    cout<<"4 [*] MENAMPILKAN DATA PENDUDUK\n";
	cout<<"5 [*] LIHAT PROVINSI\n";
    cout<<"6 [*] KELUAR\n\n";
    cout<<" Masukan Pilihan Anda : ";cin>>menu;
    
 	if(menu==1){
 		system("clear || cls");
 		nik++;
 		cout<<" ====================================================\n";
    	cout<<" +++++++++++++ PENAMBAHAN DATA PENDUDUK +++++++++++++\n";
    	cout<<" ====================================================\n\n";
    	cout<<" \nISI BIODATA DIRI ANDA\n";
    	cout << " NIK 				         : "; cin >> ktp[nik].nomor;cin.getline(get,1);cout<<endl;
   		cout << " Nama Lengkap               : "; cin.getline(ktp[nik].nama,50);cout<<endl;
        cout << " Agama                      : "; cin.getline(ktp[nik].agama,20);cout<<endl;	
        cout << " Status Perkawinan          : "; cin.getline(ktp[nik].status,20);cout<<endl;      	
        cout << " Pekerjaan                  : "; cin.getline(ktp[nik].pekerjaan,20);cout<<endl;     	
        cout << " Tempat Lahir               : "; cin.getline(ktp[nik].tempat,20);cout<<endl;   	
        cout << " Tanggal Lahir				 : "; cin.getline(ktp[nik].tanggal,20);cout<<endl; 	
        cout << " Alamat                     : "; cin.getline(ktp[nik].almt,20);cout<<endl;  	
        cout << " Kecamatan                  : "; cin.getline(ktp[nik].alamat.kec,20);cout<<endl;  
        cout << " Kota                       : "; cin.getline(ktp[nik].alamat.kota,20);
      	cout << " ==================================================\n\n";
        cout << " 1 [*] Kembali ke Menu Utama\n\n";
      	cout << " 2 [*] Keluar dari program\n";
        cout << " Masukan Pilihan Anda : "; cin >> pilih;
      	cout << endl;
      
    		if(pilih==1){
        		goto menuinti;
    			}
     		else if(pilih==2){
        		goto keluar;
      		}
   		}
 	else if(menu==2){
 		system("clear || cls");
 		cout<<" ====================================================\n";
    	cout<<" @@@@@@@@@@@@@@@ MENCARI DATA PENDUDUK @@@@@@@@@@@@@@\n";
    	cout<<" ====================================================\n\n";
    	cout<<" \nMASUKKAN NIK : ";cin>>nomernik;cout<<endl;
    	
    	for(x=0;x<=nik;x++){
    		if(nomernik==ktp[x].nomor){
    			cout << " Nama Lengkap      : " << ktp[x].nama<<endl;cout<<endl;
        		cout << " Agama             : " << ktp[x].agama<<endl;cout<<endl;  
        		cout << " Status perkawinan : " << ktp[x].status<<endl;cout<<endl;    
		        cout << " Pekerjaan         : " << ktp[x].pekerjaan<<endl;cout<<endl;    
    		    cout << " Tempat Lahir      : " << ktp[x].tempat<<endl;cout<<endl;     
    		    cout << " Tanggal Lahir     : "<< ktp[x].tanggal<<endl;cout<<endl;     
        		cout << " Alamat            : "<< ktp[x].almt<<endl;cout<<endl;     
       			cout << " Kecamatan         : "<< ktp[x].alamat.kec<<endl;cout<<endl;     
    		    cout << " Kota              : "<< ktp[x].alamat.kota<<endl<<endl;
        		goto pindah;
				}
			}
			cout<<"DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";		
    		cout<<"========================================\n\n";
    		pindah:
    	    cout << " 1 [*] Kembali ke Menu Utama\n\n";
    	  	cout << " 2 [*] Keluar dari program\n";
    	    cout << " Masukan Pilihan Anda : "; cin >> pilih;
      		cout << endl;
      
    			if(pilih==1){
        			goto menuinti;
    				}
     			else if(pilih==2){
        		goto keluar;
		 			}	
 		}
 	else if(menu==3){
 		system("clear || cls");
 		cout<<" =====================================================\n";
    	cout<<" -------------- MENGHAPUS DATA PENDUDUK --------------\n";
    	cout<<" =====================================================\n\n";
 		cout<<"Masukkan NIK : ";cin>>nomernik;cout<<endl;
 		 	for(x=0;x<=nik;x++) {
      			if(nomernik==ktp[x].nomor) {
      			temukan=true;
     				if(temukan) {
       			for(y=x;y<=nik+1;y++) {
          		ktp[y]=ktp[y+1];
        		}
      			cout<<"DATA BERHASIL DI HAPUS\n\n";
       			nik--;
       			goto pilih;
    					}
    				}
   				}
   				cout<<"DATA YANG AKAN DI HAPUS TIDAK DITEMUKAN !!!\n";
   				cout<<"===========================================\n\n";
    			pilih:
    	    	cout << " 1 [*] Kembali ke Menu Utama\n\n";
    	  		cout << " 2 [*] Keluar dari program\n";
    	    	cout << " Masukan Pilihan Anda : "; cin >> pilih;
      			cout << endl;
      
    				if(pilih==1){
        				goto menuinti;
    					}
     				else if(pilih==2){
        			goto keluar;
		 				}
		 	}
	else if(menu==4){
		system("clear || cls");
 		cout<<" ====================================================\n";
    	cout<<" ============= MENAMPILKAN DATA PENDUDUK ============\n";
    	cout<<" ====================================================\n\n";
    		for(x=0;x<=nik;x++){
    			cout << " NIK : "<<ktp[x].nomor<<endl<<endl;
   				cout << " Nama : "<<ktp[x].nama<<endl<<endl;
   				cout << " Agama : "<<ktp[x].agama<<endl<<endl;
 				cout << " Status perkawinan : "<<ktp[x].status<<endl<<endl;
    			cout << " Pekerjaan : "<<ktp[x].pekerjaan<<endl<<endl;
    			cout << " Tempat Lahir : "<<ktp[x].tempat<<endl<<endl;
   				cout << " Tanggal Lahir : "<<ktp[x].tanggal<<endl<<endl;
   				cout << " Alamat : "<<ktp[x].almt<<endl<<endl;
    			cout << " Kecamatan : "<<ktp[x].alamat.kec<<endl<<endl;
   				cout << " Kota : "<<ktp[x].alamat.kota<<endl<<endl;
   			goto a;	
			}
			cout<<"DATA PENDUDUK TIDAK ADA !!!\n\n";
			a:
			cout << " 1 [*] Kembali ke Menu Utama\n\n";
    	  	cout << " 2 [*] Keluar dari program\n";
    	    cout << " Masukan Pilihan Anda : "; cin >> pilih;
      		cout << endl;      
    			if(pilih==1){
        			goto menuinti;
    				}
     			else if(pilih==2){
        		goto keluar;
					}	 				
		keluar:
    	system("clear || cls");
    	cout<<"\n========== :) TERIMA KASIH TELAH BERPARTISIPASI (: ==========\n"<<endl<<endl;
    	//getch();
    	return 0;		
		}else if (menu==5)
		{
			system("clear || cls");
			int p = 0;
			lihat_provinsi:
			while (p <= 33)
            {
               cout<<p+1<<". "<<Provinsi[p]<<endl;
			   p++;
            }
			string home;
			cout<<"Apakah Anda Ingin Kembali Ke Menu Utama? (y/n)";
			cin>>home;
			if (home == "y")
			{
				goto menuinti;
			}else if (home == "n")
			{
				goto lihat_provinsi;
			}
			
			
			
		}
		
	else if(menu==6){
		system("clear || cls");
		cout<<"\nANDA YAKIN AKAN KELUAR PROGRAM SENSUS PENDUDUK\n";
		cout << " 1 [*] Kembali ke Menu Utama\n";
    	cout << " 2 [*] Keluar dari program\n";
    	cout << " Masukan Pilihan Anda : "; cin >> pilih;
    			if(pilih==1){
        			goto menuinti;
    				}
     			else if(pilih==2){
     				cout<<"\n========== :) TERIMA KASIH TELAH BERPARTISIPASI (: ==========\n";
        			goto keluar;
    			//getch();
    			return 0;		
					}	
		}	
}

