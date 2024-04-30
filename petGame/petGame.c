#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int sevgi;
int sosyallik;
int eglence;
int uyku;
int saglik;
int hijyen;
int tuvalet;
int egitim;
int tokluk;
int huzur;

char *isimler[10] = {"tokluk", "sevgi","tuvalet", "hijyen", "egitim","uyku","eglence","sosyallik","saglik","huzur"};
int duzeyler[10] = {5,5,5,5,5,5,5,5,5,5};

void kontrolEt(int *duzeyler) {
  for(int i = 0; i < 10; i++) {
    if (duzeyler[i] > 10) {
      duzeyler[i] = 10;
    } else if (duzeyler[i] < 0) {
      duzeyler[i] = 0;
    }
  }
}

void sahibiTarafindanSevilmek(int *psayilar){
    printf("Cok mutluyumm!!\n\n");

    psayilar[1]=psayilar[1]+3;
    psayilar[6]=psayilar[6]+2;
    psayilar[9]=psayilar[9]+2;

    for(int i=0;i<10;i++){
        if(i==8 || i==1){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);
}
void yabanciBiriTarafindanSevilmek(int *psayilar){
    printf("Iyi birine benziyor galiba.\n\n");

    psayilar[1]=psayilar[1]+3;
    psayilar[6]=psayilar[6]+1;
    psayilar[9]=psayilar[9]+1;

    for(int i=0;i<10;i++){
        if(i==8 || i==1){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);
}

void karsiCinsTarafindanSevilmek(int *psayilar){
    printf("Galiba beni begendi:)\n\n");

    psayilar[1]=psayilar[1]+5;
    psayilar[6]=psayilar[6]+2;
    psayilar[7]=psayilar[7]+2;
    psayilar[9]=psayilar[9]+3;


        for(int i=0;i<10;i++){
        if(i==8 || i==1){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);
}

void uykuVakti(int *psayilar) {

    if (psayilar[5] < 10) {

    printf("Talya icin uyku vakti!!\n");
    printf("Talya gece guzelce uyudu.\n");
    printf("Sanirim biraz aciktik!!\n\n");
    psayilar[5]=psayilar[5]+3;
    psayilar[0]=psayilar[0]-2;
    psayilar[2]=psayilar[2]+2;

     uykuVakti(psayilar);
    }


    else
    {
    psayilar[5]=10;
    }

kontrolEt(duzeyler);
}


void zorlaUyandir(int *psayilar){
    printf("Beni simdi niye uyandirdin?\n\n");
    int sec7;

    printf("Kanepe senin yatagin degil!!\n");
    printf("1-Sahibinin yaninda uyu\n2-Kulubende uyu\n3-Sominenin yanindaki yastiga gec.\n");
    scanf("%d",&sec7);

switch(sec7){

case 1:
    printf("Tamam yanina geliyorum:(((\n.");

    break;

    case 2:
        printf("PEKI, kulubeme geciyorum.\n");
    break;

    case 3:
        printf("sicak yastikta uyumak benim isime gelir:)))\n");


    break;
    }
           psayilar[5]= psayilar[5]+2;
           psayilar[9]=psayilar[9]-2;

        for(int i=0;i<10;i++){
        if(i==8){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);
}

void geziVakti(int *psayilar){
    printf("Sanirim yine gezmeye cikiyoruz.Simdiden esnemeye basladim...\n");
    psayilar[3]=psayilar[3]-2;
    psayilar[6]=psayilar[6]+2;
    psayilar[7]=psayilar[7]+2;
    psayilar[5]=psayilar[5]-1;
    psayilar[9]=psayilar[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==5){
           psayilar[i]= psayilar[i];
        }
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);}


void yemekYemek(int *psayilar) {
    int secim, adet;
    char str[10];

    printf("Menu:\n");
    printf("1-Kemik\n2-Yas mama\n3-Copten ye\n\n");
    printf("Yiyecek seciniz:");
    scanf("%d", &secim);

    printf("Kac tane yemek istersin?");
    scanf("%s", str);

    adet = atoi(str);

    switch (secim) {
        case 1:
            psayilar[0] = psayilar[0] + (1 * adet);
            psayilar[5] = psayilar[5] + 2;
            psayilar[2] = psayilar[2] + 2;
            psayilar[8] = psayilar[8] + 2;

            printf("Talya kemigi zevkle yedi.\n\n");
            for (int i = 0; i < 10; i++) {
                if (i == 8 || i == 0) {
                    psayilar[i] = psayilar[i];
                } else {
                    psayilar[i] = psayilar[i] - 1;
                }
            }

            break;

        case 2:
            psayilar[0] = psayilar[0] + (0.5 * adet);
            psayilar[5] = psayilar[5] + 1;
            psayilar[2] = psayilar[2] + 1;
            psayilar[8] = psayilar[8] + 1;
            printf("Talya yas mamayi keyifle yedi.\n");
            for (int i = 0; i < 10; i++) {
                if (i == 8 || i == 0) {
                    psayilar[i] = psayilar[i];
                } else {
                    psayilar[i] = psayilar[i] - 1;
                }
            }
            break;

        case 3:
            psayilar[0] = psayilar[0] + 1;
            psayilar[5] = psayilar[5] + 1;
            psayilar[2] = psayilar[2] + 2;
            psayilar[8] = psayilar[8] - 4;
            printf("Talya copu karistirip bir seyler yedi. Sanirim midesinde bir sorun var.\n\n");
            for (int i = 0; i < 10; i++) {
                if (i == 8 || i == 0) {
                    psayilar[i] = psayilar[i];
                } else {
                    psayilar[i] = psayilar[i] - 1;
                }
            }
            break;
    }
        kontrolEt(duzeyler);

}

void suIcmek(int *psayilar){
    printf("Buz gibi su!!Ne iyi geldi bu yaz gunu\n\n");

    psayilar[0]=psayilar[0]+1;
    psayilar[2]=psayilar[2]+3;
    psayilar[8]=psayilar[8]+1;

        for(int i=0;i<10;i++){
        if(i==8 || i==0){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void YeniLezzetlerDenemek(int *psayilar){
    int yeni;

    printf("Yeni ve de farkli tatlara acigiz galiba!Ama sen yine de dikkat et,biraz hassassin.\n");
    printf("Ne denemek istersin?\n1-Ananas\n2-Uzak dogu yoresel kopek yemegi\n");
    scanf("%d",&yeni);

    switch(yeni){
case 1:
    printf("Bu cok guzel bir seymis.Neden daha once denemedik?\n\n");

    psayilar[0]= psayilar[0]+3;
    psayilar[8]= psayilar[8]+1;

    break;

case 2:
    printf("Aman Tanrim,FELAKET.Sanirim kusacagim.");

    psayilar[0]= psayilar[0]-1;
    psayilar[8]= psayilar[8]-2;

    break;
    }

       for(int i=0;i<10;i++){
        if(i==8 || i==0){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }

    kontrolEt(duzeyler);
}

void kopekParkinaGitmek(int *psayilar){

    int secim;
    int secim2;
    int secim3;
    //bas:
    printf("1-COCO\n2-BUDDY\n3-BELLA\n");
    printf("Hangi arkadasinla oynamak istersin?\n");
    scanf("%d",&secim);

        switch(secim){
            case 1:
                printf("Talya en yakin arkadasi COCO'yla vakit geciriyor.\n");
                psayilar[1]=psayilar[1]+3;
                psayilar[7]=psayilar[7]+4;
                psayilar[6]=psayilar[6]+3;
                psayilar[5]=psayilar[5]-1;
                psayilar[9]=psayilar[9]+2;
                break;

            case 2:
                printf("Talya hoslandigi köpekle vakit geciriyor.\nOncesinde cok suslendi.\n");
                psayilar[1]=psayilar[1]+5;
                psayilar[7]=psayilar[7]+4;
                psayilar[6]=psayilar[6]+3;
                psayilar[5]=psayilar[5]-1;
                psayilar[9]=psayilar[9]+2;
                break;

            case 3:
                printf("Talya Bella'yi sevmiyor.Talya'nin onunla vakit gecirmesini istedigine emin misin?\n");
                printf("1-EVET\n2-HAYIR\n");
                scanf("%d",&secim2);

          if (secim2==1){
                printf("Talya Bella'yla vakit gecirmeye istekli.\n");
                psayilar[1]=psayilar[1]+2;
                psayilar[7]=psayilar[7]+4;
                psayilar[6]=psayilar[6]+2;
                psayilar[5]=psayilar[5]-1;
          }
            else if(secim2==2){
                printf("Talya Bella'yla vakit gecirmek istemedigini hatirladi.\n");
                printf("1-COCO\n2-BUDDY\n");
                printf("Hangi arkadasinla oynamak istersin?\n");

                scanf("%d",&secim3);

                   if(secim3==1){
                    printf("Talya en yakin arkadasi COCO'yla vakit geciriyor.\n");
                    psayilar[1]=psayilar[1]+3;
                    psayilar[7]=psayilar[7]+4;
                    psayilar[6]=psayilar[6]+3;
                    psayilar[5]=psayilar[5]-1;
                    psayilar[9]=psayilar[9]+2;
                   }


                    else if(secim3==2) {
                    printf("Talya hoslandigi köpekle vakit geciriyor.\nOncesinde cok suslendi.\n");
                    psayilar[1]=psayilar[1]+5;
                    psayilar[7]=psayilar[7]+4;
                    psayilar[6]=psayilar[6]+3;
                    psayilar[5]=psayilar[5]-1;
                    psayilar[9]=psayilar[9]+2;


                }}

    break;
    }



    for(int i=0;i<10;i++){
        if(i==8 || i==7){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);


}

void evdeDurmak(int *psayilar){


    printf("Sanirim bugun sikici bir gun olacak:(\n\n");
    psayilar[7]=psayilar[7]-3;
    psayilar[6]=psayilar[6]-1;
    psayilar[5]=psayilar[5]+2;
    psayilar[9]=psayilar[9]-3;

        for(int i=0;i<10;i++){
        if(i==8 || i==7){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);
}


void asikOlmak(int *psayilar){
    int asik;
    printf("Sanirim birileri asik olmus.Bana soylemek istedigin bir seyler var mi?\n\n");
    printf("1-EVET\n2-HAYIR");
    scanf("%d",&asik);
    switch(asik){
case 1:
    printf("Sanirim yakalandim.Buddy'le gecen parkta oynadigimiz gun ben biraz ondan hoslanmis olabilirim.\n");
     psayilar[1]=psayilar[1]+3;
      psayilar[9]=psayilar[9]+2;
    break;
case 2:
        printf("Malesef kimseye asik degilim.Deniyorum fakat olmuyor.Bu biraz canimi sikiyor olabilir.Ve canim cikolata istiyor.\n");
        psayilar[1]=psayilar[1]-2;
        psayilar[9]=psayilar[9]-2;
        psayilar[0]=psayilar[0]-2;

    break;

    }

        for(int i=0;i<10;i++){

        if(i==8 || i==7){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);
}

void veterinereGitmek(int *psayilar){
    printf("Yine mi doktora gidiyoruz!!\n\n");
        psayilar[3]=psayilar[3]-2;
        psayilar[8]=psayilar[8]+3;
        psayilar[9]=psayilar[9]-2;

        for(int i=0;i<10;i++){


        if(i==8){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);

}

void cezaVermek(int *psayilar){
    int ceza;

    printf("Cezalisin!!!\n");
    printf("1-Tum odalari camur yapmissin bugun eve girmek yasak sana.Bahcede kalacaksin.\n2-Mama kabini neden doktun? Bugun yemek yok sana!!\n");
    scanf("%d",&ceza);
    switch(ceza){
case 1:
    printf("Talya bahcede kaldigi icin hastalandi.Cabuk iksir icmeli\n");
    psayilar[0]= psayilar[0]-3;
    psayilar[8]= psayilar[8]-2;
    psayilar[9]= psayilar[9]-2;


    break;

case 2:
    printf("Talya ac kaldigi icin iyi hissetmiyor.Cabuk tokluk iksiri icmesi lazim.\n");
    psayilar[0]= psayilar[0]-2;
    psayilar[8]= psayilar[8]-3;
    psayilar[9]= psayilar[9]-2;


    break;

    }

        for(int i=0;i<10;i++){
        if(i==8){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);

}


 void genclikIksiri(int *psayilar){
     int iksir;
        printf("Sanirim biraz takviyeye ihtiyacim var.\n\n");
        printf("Hangi iksirden icmek istiyorsun?\n");
        printf("1-Saglik iksiri\n2-Bilgecan dede iksiri\n3-Tokluk iksiri\n");
        scanf("%d",&iksir);

        switch(iksir){
        case 1:
        printf("Saglik iksiri icildi.Saglik,hijyen ve huzur duzeyleri fullendi.\n");

        psayilar[3]=10;
        psayilar[8]=10;
        psayilar[9]=10;

        break;

        case 2:
            printf("Bilgecan Dede iksiri icildi.Saglik,hijyen,huzur,tokluk,sevgi,uyku duzeyleri fullendi.Tuvalet duzeyi sifirlandi.\n");
        psayilar[0]=10;
        psayilar[1]=10;
        psayilar[2]=0;
        psayilar[3]=10;
        psayilar[4]=10;
        psayilar[5]=10;
        psayilar[9]=10;
        break;

        case 3:
            printf("Tokluk iksiri icildi.Tokluk ve huzur duzeyleri fullendi.\n");
        psayilar[0]=10;
        psayilar[9]=10;

        break;

        }
    kontrolEt(duzeyler);
}

void sahibiyleOynamak(int *psayilar){
    printf("su anda dunyada benden mutlusu yokk!!\n\n");
   psayilar[5]=psayilar[5]+2;
        psayilar[0]=psayilar[0]-2;
        psayilar[6]=psayilar[6]+3;
        psayilar[1]=psayilar[1]+3;
        psayilar[9]=psayilar[9]+2;

        for(int i=0;i<10;i++){

        if(i==8 || i==6){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void digerHayvanlarlaVakitGecirme(int *psayilar){
    printf("Seni yakalayacagim dostum gel buraya o kemik benimm!!\n\n");

        psayilar[5]=psayilar[5]+2;
        psayilar[0]=psayilar[0]-1;
        psayilar[6]=psayilar[6]+2;
        psayilar[1]=psayilar[1]+2;
        psayilar[9]=psayilar[9]+2;

        for(int i=0;i<10;i++){

        if(i==8 || i==6){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void denizdeYuzmek(int *psayilar){
    printf("Ben bu sporu yapiyorum galiba:)\n\n");

        psayilar[1]=psayilar[1]+2;
        psayilar[6]=psayilar[6]+3;
        psayilar[0]=psayilar[0]-2;
        psayilar[5]=psayilar[5]+3;
        psayilar[3]=psayilar[3]-1;
        psayilar[9]=psayilar[9]+2;


        for(int i=0;i<10;i++){
        if(i==8 || i==6){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
kontrolEt(duzeyler);
}

void dus(int *psayilar){
    printf("Cokta pislenmistim.Bu iyi geldi.\n\n");
        psayilar[5]=psayilar[5]+2;
        psayilar[3]=psayilar[3]+2;
        psayilar[8]=psayilar[8]+2;
        psayilar[9]=psayilar[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==3){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void bakim(int *psayilar){
    printf("Genclestim resmen bu kadar mi fark eder!!\n\n");
            psayilar[3]=psayilar[3]+5;
            psayilar[8]=psayilar[8]+3;
            psayilar[9]=psayilar[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==3){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void camurdaOynamak(int *psayilar){
    printf("Bu sefer camurda oynamana izin veriyorum.Ama sadece bu seferlik!!Bazen kirlenmek guzeldir!!\n\n");
            psayilar[3]=psayilar[3]-2;
            psayilar[8]=psayilar[8]-2;
            psayilar[9]=psayilar[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==3){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void ihtiyacyurusu(int *psayilar){
    int sec4;
    printf("Ihtiyac icin ufak bir yuruyususe cikmamiz lazim!!\n");
    printf("1-Agacin dibi tuvalet icin sana uygun mu?\n2-Surada kumluk var orasi nasil?\n");
    scanf("%d",&sec4);
    switch(sec4){
   case 1:
       printf("Talya agacin dibine tuvaletini yapti.\n");

        psayilar[2]=psayilar[2]-5;
        psayilar[9]=psayilar[9]+2;
        psayilar[3]=psayilar[3]-3;


    case 2:
    printf("Talya kumluk alana tuvaletini yapti.\n");
    }

        psayilar[2]=psayilar[2]-5;
        psayilar[9]=psayilar[9]+2;
        psayilar[3]=psayilar[3]-3;


        for(int i=0;i<10;i++){
        if(i==8 || i==2){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void tuvaletiYapmak(int *psayilar){
    printf("Sanirim Talya'nin tuvalete gitmesi gerek.");
        psayilar[2]=psayilar[2]-4;
        psayilar[3]=psayilar[3]+2;
        psayilar[9]=psayilar[9]+2;

        for(int i=0;i<10;i++){
        if(i==8 || i==2){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }

kontrolEt(duzeyler);
    printf("Kendimi daha iyi hissediyorum.\n\n");
}

void tuvaletEgitimi(int *psayilar){
    printf("Talya'nin bu egitime ihtiyaci var.Her yerde tuvaletini yapmamayi ogrenmeli.\n\n");

        psayilar[2]=psayilar[2]-3;
        psayilar[4]=psayilar[4]+3;


        for(int i=0;i<10;i++){
        if(i==8 || i==2){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }
    kontrolEt(duzeyler);
}

void hocaylaEgitim(int *psayilar){
    printf("Bakalim bugun neler ogrenecez:)\n\n");
       psayilar[4]=psayilar[4]+3;
       psayilar[5]=psayilar[5]-1;
       psayilar[0]=psayilar[0]-1;
       psayilar[6]=psayilar[6]-1;
       psayilar[7]=psayilar[7]+1;

        for(int i=0;i<10;i++){
        if(i==8 || i==4){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }

   kontrolEt(duzeyler);
}

void rehberlikEgitimi(int *psayilar){
     printf("Bugun Talya'nin duyarli bir kopek olmasi icin engelli bireyler icin rehberlik egitimi var.\n");
      psayilar[4]=psayilar[4]+3;
      psayilar[6]=psayilar[6]-1;
      psayilar[7]=psayilar[7]+1;
      psayilar[5]=psayilar[5]-1;
      psayilar[0]=psayilar[0]-1;

     psayilar[3]=psayilar[3]-3;

        for(int i=0;i<10;i++){
        if(i==8 || i==4){
           psayilar[i]= psayilar[i];
        }
        else{
            psayilar[i]= psayilar[i]-1;
        }
        }

    kontrolEt(duzeyler);
}

void korumaEgitimi(int *psayilar){
    printf("Ben varken sahibime kimse dokunamaz!!\n\n");

      psayilar[4]=psayilar[4]+3;
      psayilar[6]=psayilar[6]-1;
      psayilar[7]=psayilar[7]+1;
      psayilar[5]=psayilar[5]-1;
      psayilar[0]=psayilar[0]-1;

        for(int i=0;i<10;i++){
        if(i==8 || i==4){
           psayilar[i]= psayilar[i];
}
        else{
            psayilar[i]= psayilar[i]-1;
        }
    }

kontrolEt(duzeyler);
}

void drawBox(int width, int height, const char* text) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("*");
            } else if (i == height / 2 && j == (width - strlen(text)) / 2) {

                printf("%s", text);
                j += strlen(text) - 1;
            } else {
                printf(" ");
            }
        }
        printf("\n");
}
}


int main()
{
    system("color 5");


int width = 80;
    int height =  20;

    char welcomeText[] = "DOGGIE OYUNUNA HOSGELDINIZ KOPEGIN ADI TALYA";


    drawBox(width,height,welcomeText);

    int ihtiyaclar,duzey;



    int duzeyler[10] = {5,5,5,5,5,5,5,5,5,5};
    int *psayilar[10] = { &duzeyler[0], &duzeyler[1], &duzeyler[2], &duzeyler[3], &duzeyler[4],&duzeyler[5],&duzeyler[6] ,&duzeyler[7],&duzeyler[8],&duzeyler[9]};

    char isimler[10][30] = {"tokluk", "sevgi", "tuvalet", "hijyen", "egitim","uyku","eglence","sosyallik","saglik","huzur"};


    char ihtiyac[28][100] = {"Sahibi Tarafindan Sevilmek","Yabanci Biri Tarafindan Sevilme","Karsi Cins Tarafindan Sevilme","Uyku Vakti","Zorla Uyandir","Gezi Vakti","Yemek yemek","Su icmek","Yeni Lezzetler Denemek","Kopek Parkinda Vakit Gecirme","Evde Durma","Asik Olmak","Veterinere GitmeK","Ceza Vermek","Genclik Iksiri","Sahibi Ile Vakit Gecirme","Diger Hayvanlarla Vakit Gecirme","Denizde Yuzme","Dus Almak","Kisisel Bakim","Camurda Oynamak","Ihtiyac Yurusu","Tuvalete Cikma","Tuvalet Egitimi","Hocayla Egitime Gitme","Rehberlik Egitimi","Koruma Egitimi","cikis"};

while(1){

printf("\n\n");

        printf("DUZEYLER\n");
        for(int i=0;i<10;i++){
            printf("%s duzeyi= %d\n",isimler[i],duzeyler[i]);
        }

        printf("\n\n");
        for (int i = 0; i <=27; i++) {
            printf("%d. islem = %s\n", i+1,ihtiyac[i] );

        }

        int indis;

        printf("Lutfen giderilecek ihtiyaci girin.1-28 arasinda bir deger giriniz. (cikis icin 28 e basiniz.): ");
        scanf("%d", &indis);

        if (indis == 28) {
            printf("Kendine iyi bak.Seni ozleyecegim...\n");
            return 0;
        } else if (indis < 1 || indis > 28) {
            printf("Gecersiz bir secim yaptiniz. Lutfen tekrar deneyin.\n");
            continue;
        }


    switch(indis-1) {

            case 0:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[0]);
            sahibiTarafindanSevilmek(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 1:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[1]);
            yabanciBiriTarafindanSevilmek(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 2:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[2]);
            karsiCinsTarafindanSevilmek(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 3:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[3]);
            int sayac1=0;
            uykuVakti(duzeyler);
            kontrolEt(duzeyler);

            break;

            case 4:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[4]);
            zorlaUyandir(duzeyler);
            kontrolEt(duzeyler);

            break;

            case 5:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[5]);
            geziVakti(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 6:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[6]);
            yemekYemek(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 7:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[7]);
            suIcmek(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 8:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[8]);
            YeniLezzetlerDenemek(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 9:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[9]);
            kopekParkinaGitmek(duzeyler);
             kontrolEt(duzeyler);
            break ;

            case 10:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[10]);
            evdeDurmak(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 11:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[11]);
            asikOlmak(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 12:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[12]);
            veterinereGitmek(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 13:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[13]);
            cezaVermek(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 14:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[14]);
            genclikIksiri(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 15:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[15]);
            sahibiyleOynamak(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 16:
            printf("Giderilecek ihtiyac: %s\n", ihtiyac[16]);
            digerHayvanlarlaVakitGecirme(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 17:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[17]);
            denizdeYuzmek(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 18:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[18]);
            dus(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 19:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[19]);
            bakim(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 20:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[20]);
            camurdaOynamak(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 21:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[21]);
            ihtiyacyurusu(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 22:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[22]);
            tuvaletiYapmak(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 23:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[23]);
            tuvaletEgitimi(duzeyler);
             kontrolEt(duzeyler);
            break;

            case 24:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[24]);
            hocaylaEgitim(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 25:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[25]);
            rehberlikEgitimi(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 26:
            printf("Giderilek ihtiyac: %s\n", ihtiyac[26]);
            korumaEgitimi(duzeyler);
            kontrolEt(duzeyler);
            break;

            case 27:
            printf("cikis yapilmistir.gule gule...tekrar bekleriz\n", ihtiyac[27]);
            kontrolEt(duzeyler);
            break;
}

            if (duzeyler[8]<=0){
                for(int i=0;i<9;i++){
                    printf("%s duzeyi= %d\n",isimler[i],duzeyler[i]);
                }
                printf("Talya yasam fonksiyonlarini yitirdi.Oyun sonlandi.\n ");
            return 0;
            }

            if(duzeyler[0]>=10){
                for(int i=0;i<9;i++){
                    printf("%s duzeyi= %d\n",isimler[i],duzeyler[i]);
                }
            printf("Talya fazla yemekten zehirlendi ve yasamini yitirdi.Oyun sonlandi.\n ");
            return 0;
            }

            if(duzeyler[0]==0 && duzeyler[5]<=0){
                for(int i=0;i<9;i++){
                    printf("%s duzeyi= %d\n",isimler[i],duzeyler[i]);
                }
            printf("Talya aclik ve uykusuzluktan yasamini yitirdi.Oyun sonlandi.\n ");
            return 0;
            }

            if(duzeyler[0]==0){
                for(int i=0;i<9;i++){
                    printf("%s duzeyi= %d\n",isimler[i],duzeyler[i]);
                }
            printf("Talya acliktan yasamini yitirdi.Oyun sonlandi.\n ");
            return 0;
            }

            if(duzeyler[5]<=0 ){
                for(int i=0;i<9;i++){
                    printf("%s duzeyi= %d\n",isimler[i],duzeyler[i]);
                }
            printf("Talya uykusuzluktan yasamini yitirdi.Oyun sonlandi.\n ");
            return 0;
            }

}

return 0;}
