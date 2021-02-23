#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;

    struct pst {
        int nip;
        char nama[30];
        int umur, kd_status;
    };

    struct pst data_pst[100];
    struct pst temp;
    int a, b, c, d, x, y,j, key, ketemu;
    char Tampilkan, e, peserta,opsi;


int sortingnip(){

 for (j=0;j<c;j++)
        {
            for (b=1;b<c;b++)
            {
                if(data_pst[b].nip>data_pst[b+1].nip)
                {
                    temp.nip=data_pst[b].nip;
                    data_pst[b].nip=data_pst[b+1].nip;
                    data_pst[b+1].nip=temp.nip;

                    strcpy(temp.nama, data_pst[b].nama);
                    strcpy(data_pst[b].nama, data_pst[b+1].nama);
                    strcpy(data_pst[b+1].nama, temp.nama);

                    temp.umur=data_pst[b].umur;
                    data_pst[b].umur=data_pst[b+1].umur;
                    data_pst[b+1].umur=temp.umur;


                    temp.kd_status=data_pst[b].kd_status;
                    data_pst[b].kd_status=data_pst[b+1].kd_status;
                    data_pst[b+1].kd_status=temp.kd_status;
                }
            }
        }
            cout<<"=================================================================\n";
            cout<<"|"<<setw(8)<<"NIP"<<setw(8)<<"|"<<setw(8)<<"Nama"<<setw(8)<<"|"<<setw(8)<<"Umur"<<setw(8)<<"|"<<setw(8)<<"Status"<<setw(9)<<"|\n";
            cout<<"=================================================================";
            for (a=1;a<=c;a++)
            {
                if(data_pst[a].kd_status==4)
                {
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"OTG"<<setw(8)<<"|";
                }else if(data_pst[a].kd_status==3)
                {
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"ODP"<<setw(8)<<"|";
                }else if(data_pst[a].kd_status==2)
                {
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"PDP"<<setw(8)<<"|";
                }else
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"Suspect"<<setw(8)<<"|";


            }
            cout<<"\n=================================================================\n";
            cout<<endl;

}
int sortingpr(){

 for (j=0;j<c;j++)
    {
        for (b=1;b<c;b++)
        {
            if (data_pst[b].kd_status>data_pst[b+1].kd_status)
            {
                temp.kd_status=data_pst[b].kd_status;
                data_pst[b].kd_status=data_pst[b+1].kd_status;
                data_pst[b+1].kd_status=temp.kd_status;

                temp.nip=data_pst[b].nip;
                data_pst[b].nip=data_pst[b+1].nip;
                data_pst[b+1].nip=temp.nip;

                strcpy(temp.nama, data_pst[b].nama);
                strcpy(data_pst[b].nama, data_pst[b+1].nama);
                strcpy(data_pst[b+1].nama, temp.nama);

                temp.umur=data_pst[b].umur;
                data_pst[b].umur=data_pst[b+1].umur;
                data_pst[b+1].umur=temp.umur;

            }
        }
    }

            cout<<"=================================================================\n";
            cout<<"|"<<setw(8)<<"Status"<<setw(8)<<"|"<<setw(8)<<"Nama"<<setw(8)<<"|"<<setw(8)<<"Umur"<<setw(8)<<"|"<<setw(8)<<"NIP"<<setw(9)<<"|\n";
            cout<<"=================================================================";
            for (a=1;a<=c;a++)
            {
                if(data_pst[a].kd_status==4)
                {
                    cout<<"\n|"<<setw(8)<<"OTG"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";
                }else if(data_pst[a].kd_status==3)
                {
                    cout<<"\n|"<<setw(8)<<"ODP"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";
                }else if(data_pst[a].kd_status==2)
                {
                    cout<<"\n|"<<setw(8)<<"PDP"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";
                }else
                    cout<<"\n|"<<setw(8)<<"Suspect"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";

            }
            cout<<"\n=================================================================\n";
            cout<<endl;


}
int searchingum(){
        ketemu=0;
    			for (a=1;a<=c;a++)
    			{
    				if (data_pst[a].umur==key)
    				{
    					ketemu=1;
                        cout<<"\n=================================================================\n";
                        cout<<"|"<<setw(8)<<"Umur"<<setw(8)<<"|"<<setw(8)<<"Nama"<<setw(8)<<"|"<<setw(8)<<"NIP"<<setw(8)<<"|"<<setw(8)<<"Status"<<setw(9)<<"|\n";
                        cout<<"=================================================================";

                        if(data_pst[a].kd_status==4){
                            cout<<"\n|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<"OTG"<<setw(8)<<"|";
                        }else if(data_pst[a].kd_status==3)
                        {
                             cout<<"\n|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<"ODP"<<setw(8)<<"|";
                        }else if(data_pst[a].kd_status==2)
                        {
                             cout<<"\n|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<"PDP"<<setw(8)<<"|";
                        }else
                            cout<<"\n|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<"Suspect"<<setw(8)<<"|";

                        cout<<"\n=================================================================\n";
                        cout<<endl;
					}
				}
					if (ketemu==0)
					{
						cout<<"Data Tidak Di Temukan \n";
					}



}
int searchingnip(){

        ketemu=0;
    			for (a=1;a<=c;a++)
    			{
    				if (data_pst[a].nip==key)
    				{
    					ketemu=1;
                        cout<<"\n=================================================================\n";
                        cout<<"|"<<setw(8)<<"NIP"<<setw(8)<<"|"<<setw(8)<<"Nama"<<setw(8)<<"|"<<setw(8)<<"Umur"<<setw(8)<<"|"<<setw(8)<<"Status"<<setw(9)<<"|\n";
                        cout<<"=================================================================";


                        if(data_pst[a].kd_status==4){
                            cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"OTG"<<setw(8)<<"|";
                        }else if(data_pst[a].kd_status==3)
                        {
                            cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"ODP"<<setw(8)<<"|";
                        }else if(data_pst[a].kd_status==2)
                        {
                            cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"PDP"<<setw(8)<<"|";
                        }else
                            cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"Suspect"<<setw(8)<<"|";


                        cout<<"\n=================================================================\n";
                        cout<<endl;
					}
				}

					if (ketemu==0)
					{
						cout<<"Data Tidak Di Temukan ";
					}
}
int searchingst(){
        ketemu=0;
    			for (a=1;a<=c;a++)
    			{
    				if (data_pst[a].kd_status==key)
    				{
    					ketemu=1;
                        cout<<"\n=================================================================\n";
                        cout<<"|"<<setw(8)<<"Status"<<setw(8)<<"|"<<setw(8)<<"Nama"<<setw(8)<<"|"<<setw(8)<<"Umur"<<setw(8)<<"|"<<setw(8)<<"NIP"<<setw(9)<<"|\n";
                        cout<<"=================================================================";

                        if(data_pst[a].kd_status==4){
                            cout<<"\n|"<<setw(8)<<"OTG"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";
                        }
                        else if(data_pst[a].kd_status==3){
                            cout<<"\n|"<<setw(8)<<"ODP"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";
                        }
                        else if(data_pst[a].kd_status==2){
                            cout<<"\n|"<<setw(8)<<"PDP"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";
                        }else
                            cout<<"\n|"<<setw(8)<<"Suspect"<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|";


                        cout<<"\n================================================================\n";
                        cout<<endl;
					}
				}
					if (ketemu==0)
					{
						cout<<"Data Tidak Di Temukan \n";
					}
				}



int main()
{

    cout << "===============================================\n";
    cout << "|                                              |\n";
    cout << "|                                              |\n";
    cout << "|     -Program Pembantu Petugas Kesehatan-     |\n";
    cout << "|Pembuat Antrian dan Pencarian Data Peserta Tes|\n";
    cout << "|                                              |\n";
    cout << "|                                              |\n";
    cout << "==============================================="<<endl;
    cout << "Masukkan Jumlah Data Peserta yang Akan di Input: ";
    cin >> c;
    system("cls");

    cout << "==============================================="<<endl;
    cout << "            Inputkan Data Peserta!"<<endl;
    cout << "==============================================="<<endl;
    cout << "Keterangan kode status (paling prioritas ke tidak prioritas) : \n";
    cout << "Suspect : 1\n";
    cout << "PDP     : 2\n";
    cout << "ODP     : 3\n";
    cout << "OTG     : 4\n\n\n";
    for (a=1;a<=c;a++)
    {
        cout << "Peserta ["<<a<<"]"<<endl;
        cout << "NIP\t\t: ";
        cin >> data_pst[a].nip;
        cout << "Nama\t\t: ";
        cin >> data_pst[a].nama;
        cout << "umur\t\t: ";
        cin >> data_pst[a].umur;
        cout << "kode status\t: ";
        cin >> data_pst[a].kd_status;
        cout << "\n\n";
    }

    Tampilkan:
    system("cls");
    cout << "==============================================="<<endl;
    cout << "               Tampilkan Data:\n";
    cout << "==============================================="<<endl;
    cout << "[1] Belum Terurut\n";
    cout << "[2] Berdasarkan Urutan NIP\n";
    cout << "[3] Berdasarkan prioritas\n";
    cout << "[4] Cari Peserta\n";
    cout << "Masukan Pilihan: ";
    cin >> Tampilkan;
    cout<<endl<<endl;

    if (Tampilkan=='1')
    {
        for (a=1;a<=c;a++)
        {
            cout<<"=================================================================\n";
            cout<<"|"<<setw(8)<<"NIP"<<setw(8)<<"|"<<setw(8)<<"Nama"<<setw(8)<<"|"<<setw(8)<<"Umur"<<setw(8)<<"|"<<setw(8)<<"Status"<<setw(9)<<"|\n";
            cout<<"=================================================================";
            for (a=1;a<=c;a++)
            {
                if(data_pst[a].kd_status==4)
                {
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"OTG"<<setw(8)<<"|";
                }else if(data_pst[a].kd_status==3)
                {
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"ODP"<<setw(8)<<"|";
                }else if(data_pst[a].kd_status==2)
                {
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"PDP"<<setw(8)<<"|";
                }else
                    cout<<"\n|"<<setw(8)<<data_pst[a].nip<<setw(8)<<"|"<<setw(8)<<data_pst[a].nama<<setw(8)<<"|"<<setw(8)<<data_pst[a].umur<<setw(8)<<"|"<<setw(8)<<"Suspect"<<setw(8)<<"|";


            }
            cout<<"\n=================================================================\n";
            cout<<endl;

        }

        lagi:
        cout << "Tampilkan Lagi [Y/N]: ";
        cin >> e;
        system("cls");
        if (e=='Y'||e=='y')
        {

            goto Tampilkan;
        }else if (e=='N'||e=='n')
        {

            cout << "SELESAI";
        }else{

            cout << "Kode Salah!!!";
            goto lagi;
        }
    }
    else if (Tampilkan=='2')
    {
            sortingnip();
            goto lagi;

    }else if (Tampilkan=='3')
    {
            sortingpr();
  			goto lagi;

    }else if (Tampilkan=='4')
    {system("cls");
                lagi2:
                cout << "==============================================="<<endl;
    			cout << "                 Cari Peserta\n";
    			cout << "==============================================="<<endl;
    			cout << "[1] Cari Peserta Berdasarkan UMUR\n";
    			cout << "[2] Cari Peserta Berdasarkan NIP\n";
    			cout << "[3] Cari Peserta Berdasarkan Status\n";
    			cout << "Masukan Pilihan: ";
    			cin >> peserta;
    			system("cls");
    			cout<<endl<<endl;

    		if (peserta=='1')
            {
                cout << "==============================================="<<endl;
    			cout << "           Pencarian Berdasarkan Umur        \n";
    			cout << "==============================================="<<endl;
    			cout<<"Input Umur Peserta yang dicari : " ;
				cin>>key;
				searchingum();
				goto opsi;

			}else if (peserta=='2')
    			{
                cout << "==============================================="<<endl;
    			cout << "            Pencarian Berdasarkan NIP n";
    			cout << "==============================================="<<endl;
    			cout<<"Input NIP Peserta yang dicari : " ;
				cin>>key;
    			searchingnip();
    			goto opsi;

			}else if (peserta=='3')
    			{
                cout << "==============================================="<<endl;
    			cout << "           Cari Berdasarkan Status \n";
    			cout << "==============================================="<<endl;
    			cout << "Suspect : 1\n";
                cout << "PDP     : 2\n";
                cout << "ODP     : 3\n";
                cout << "OTG     : 4\n\n\n";
    			cout<<"Input Status Peserta yang dicari : " ;
				cin>>key;
				searchingst();
				goto lagi2;

                opsi:
				cout<<"Cari lagi ? (y/t)";
				cin>>opsi;
				if(opsi=='y'||opsi=='Y'){
				 goto lagi2;
				}
				else goto lagi;

        }else
        {
        cout << "Kode Salah!!!"<<endl;
        goto Tampilkan;

    }

}
}
