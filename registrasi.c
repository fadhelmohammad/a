#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *signup, *ceksignup;

    //membuka file login.bin 
    signup = fopen("Algo.bin","wb");
    ceksignup = fopen("Algo.bin","rb");

    //deklarasikan variable untuk membuat user dan password kita 
    char usernamepassword[25] = "Algo@root";


    if (!ceksignup){
        printf("File anda tidak ada, Mohon buat file terlebih dahulu!!!!");
    }else{
        //menuliskan user dan password pada file login.bin
        fprintf(signup,"%s",usernamepassword);

    }
    //menutup file kembali setelah dibuka
    fclose(signup);
    fclose(ceksignup);


    return 0;

}