#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <cstdlib>

using namespace std;

struct Tnode{
	int data;
	Tnode *next;
};

Tnode *head, *tail;

int init(){
	head = NULL;
	tail = NULL;
}

int isEmpty(){
	if(tail == NULL) return 1;
	else return 0;
}

int insertDepan(int databaru){
	Tnode *baru;
	baru = new Tnode;
	baru -> data = databaru;
	baru -> next = NULL;
		if(isEmpty()== 1){
			head = tail = baru;
			tail -> next = NULL;
		}
		else{
			baru -> next = head;
			head = baru;
		}
		cout << "Data masuk\n";
}

int insertBelakang(int databaru){
	Tnode *baru, *bantu;
	baru = new Tnode;
	baru -> data = databaru;
	baru -> next = NULL;
		if(isEmpty()== 1){
			head = baru;
			tail = baru;
			tail-> next = NULL;
		}
		else{
			tail -> next = baru;
			tail = baru;
		}
		cout << "Data masuk\n";
}

int insertTengah(int databaru){
	Tnode *baru, *bantu;
	baru = new Tnode;
	baru -> data = databaru;
	baru -> next = NULL;
		if(isEmpty()== 1){
			head = baru;
			tail = baru;
			tail-> next = NULL;
		}
		else{
			tail -> next = baru;
			tail = baru;
		}
		cout << "Data masuk\n";
}

int tampil(){
	Tnode *bantu;
	bantu = head;
		if(isEmpty()== 0){
			while(bantu != NULL){
				cout<<"Nama | Umur | Tinggi | Berat"<<endl;
				cout<<"----------------------------"<<endl;
				cout<<"Rafi | 17   | 200    | 99   "<<endl;
				
				cout << bantu -> data << "->";
				bantu = bantu -> next;
			}
			cout << "NULL";
		}else cout << "Masih kosong\n";
}

int hapusDepan(){
	Tnode *hapus;
	int d;
		if(isEmpty()== 0){
			if(head!= tail){
				hapus = head;
				d = hapus -> data;
				head = head -> next;
				delete hapus;
			}else {
				d = tail -> data;
				head = tail = NULL;
			}
			cout << d << " terhapus";
		}else cout << "Masih kosong\n";
}

int hapusBelakang(){
	Tnode *bantu, *hapus;
	int d;
		if(isEmpty()== 0){
			bantu = head;
			if(head!= tail){
				while(bantu -> next!=tail){
					bantu = bantu -> next;
				}
				hapus = tail;
				tail = bantu;
				d = hapus -> data;
				delete hapus;
				tail -> next = NULL;
			}else {
				d = tail -> data;
				head = tail = NULL;
			}
			cout << d << " terhapus\n";
		}else cout << "Masih kosong\n";
}

int hapusTengah(){
	Tnode *bantu, *hapus;
	int d;
		if(isEmpty()== 0){
			bantu = head;
			if(head!= tail){
				while(bantu -> next!=tail){
					bantu = bantu -> next;
				}
				hapus = tail;
				tail = bantu;
				d = hapus -> data;
				delete hapus;
				tail -> next = NULL;
			}else {
				d = tail -> data;
				head = tail = NULL;
			}
			cout << d << " terhapus\n";
		}else cout << "Masih kosong\n";
}

int bersih()
{
	Tnode *bantu, *hapus;
	bantu = head;
	while(bantu!=NULL)
	{
		hapus = bantu;
		bantu = bantu -> next;
		delete hapus;
	}
	head = NULL;
	system("cls");
}

int main(){
	int pil, databaru;
	do
	{
	system("cls");
	cout << endl << endl;
	cout << "=                       =" << endl;
	cout << "=      MENU PILIHAN     =" << endl;
	cout << "=                       =" << endl;
	cout << "= 1. Keluar program.    =" << endl;
	cout << "= 2. Tambah Awal List.  = " << endl;
	cout << "= 3. Tambah Akhir List. =" << endl;
	cout << "= 4. Tambah Tengah List.=" << endl;
	cout << "= 5. Hapus Awal List.   =" << endl;
	cout << "= 6. Hapus Akhir List.  =" << endl;
	cout << "= 7. Hapus Tengah List. =" << endl;
	cout << "= 8. tampil data.       =" << endl;
	cout << "=                       =" << endl;
	cout << " Pilihan>> : "; cin >> pil;
	switch(pil)
	{
		case 1:{
			return 0;
			break;
		}
		case 2: system("cls");{
			cout << "Masukkan Data = ";
			cin >> databaru;
			insertDepan(databaru);
			break;
		}
		case 3: system("cls");{
			cout << "Masukkan Data = ";
			cin >> databaru;
			insertBelakang(databaru);
			break;
		}
		case 4: system("cls");{
			cout << "Masukkan Data = ";
			cin >> databaru;
			insertTengah(databaru);
			break;
		}
		case 5:system("cls");{
			hapusDepan();
			break;
		}
		case 6:system("cls");{
			hapusBelakang();
			break;
		}
		case 7:system("cls");{
			hapusTengah();
			break;
		}
		case 8:{
			tampil();
			getch();
			break;
		}
		default : system("cls");
		{
			cout << "\n Maaf, Pilihan yang anda pilih tidak tersedia!";
		}
	}
}
while(pil!=7);

}
