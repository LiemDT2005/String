
int main() {
    char n[30];
    gets (n);

    //loại trường hợp chỉ có 1 chữ
    int acount=0;
    for (int i=0; i<strlen(n); i++){
        if (n[i]== ' '){
            acount++;
        }
    }

        if (acount == 0){
            printf ("Invalid");
        }

 else
  {
          //Tách trường hợp có kí tự đặc biệt
    int spacecount=0;
    for (int i=0; i<strlen(n); i++){
        if (n[i]== ' '){
            spacecount++;
        }
        if (isalpha(n[i])){
            spacecount++;
        }
    }

    if (spacecount == strlen (n)) {


    //Phan vùng Chuỗi
    int khoangdau=0;
    int len = strlen (n);
    int khoangcuoi = len;

    for (int i=0; i < len; i++){
        if (n[i] == ' '){
            khoangdau = i;
                break;
        }
    }
    for (int i=len; i>=0; i--){
        if (n[i] == ' '){
            khoangcuoi = i;
                break;
        }
    }

    //In ra
    printf ("Ho: ");
    for (int i=0; i<khoangdau; i++){
        printf ("%c", n[i]);
    }
        printf ("\n");

   printf ("Chu lot: ");
    for (int i=khoangdau+1; i<khoangcuoi; i++){
        printf ("%c", n[i]);
    }
        printf ("\n");

    printf ("Ten: ");
    for (int i=khoangcuoi+1; i<len; i++){
        printf ("%c", n[i]);
        }
    }
else {
    printf ("Invalid");
    }
  }
}



