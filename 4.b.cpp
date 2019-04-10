#include<stdio.h>
#include<conio.h>
#include <windows.h>
using namespace std;

int main(){
	system("color f6");
	float da[100]={8,10,6,2,11,7,1,100};
	int cari,jmlh=0;
	bool bol=false;

	printf("masukkan data yang di cari : ");
	scanf("%d",&cari);

	for(int i=0;i<100;i++){
        if(da[i]==cari){
            bol=true;
        }
	}

	if(bol==true){
            printf("data ada \n");
        }else{
            printf("Data Tidak ada\n");
        }
}
