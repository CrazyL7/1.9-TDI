#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <bits/stdc++.h>
#include <istream>
using namespace std;
int main() {
  char s;
  string info, ok, Atbilde1, Atbilde2, Atbilde3, Atbilde4, Atbilde5, Atbilde6, Atbilde7, Atbilde8, Atbilde9, Atbilde10, punkts, atrasanas = "sk", saraksts[10] = {"a","b","c","d","e","g","h","i","j","k"}, saraksts2[6] = {"sk","s1","s2","s3","s4","s5"};
  bool laiks, apmekletie[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int number, laika, procenti = 100, punktaattalums, atrasanasattalums, attalums,stop1 = 0,stop2 = 0,stop3 = 0,stop4 = 0,stop5 = 0,stop6 = 0,stop7 = 0,stop8 = 0,stop9 = 0,stop10 = 0,APunkti = 5, loopviens = 0, izveletais, ap, at, nepprocenti, app=0, progattalumslietus, progattalumssaule;
  //V1 Spēlēs nosaukums, autori, noteikumi un taustiņš, kas jāspiež.
  cout<<"Levitceptors. Kristers Tomsons, Lauris Siksna, Roberts Būmeistars. Noteikumi: Labos laika apstākļos auto nobrauc 140km, bet lietus 80km. Katrā kontrolpunktā, uzlādes stacijā dotie uzdevumi ir jāpilda. Lai sāktu spēli ievadi s: ";
  //V1 Uzspiežot s sākas spēle. Notiek loop, un tad kad ievadītais simbols ir s, tad loops beidzas.
  while (s != 's') {
    cin>>s;}
  //V2 Šeit tiek lasīts fails.
  ifstream lasitinfo("info.txt");
  cout<<"\n";
  while (getline (lasitinfo, info)) {
  cout<<info<<endl;}
  lasitinfo.close(); 
  sleep(3);

  
  //Loops sākas
  while(app != 8 && atrasanas != "k"){
    //V3 Tiek veidota tabula. (Kā šo varētu optimizēt?)
    string pirmarinda = "\n    sk  a   b   c   d   e   g   h   i   j   k    s1  s2  s3  s4  s5";
    string otrarinda = "   __________________________________________________________________";
    string tresarinda = "sk| 0   20  40  60  80  100 120 140 160 180 200  40  80  120 160 200 ";
    string ceturtarinda = "a | 20  0   20  40  60  80  100 120 140 160 180  20  60  100 140 180 ";
    string piektarinda = "b | 40  20  0   20  40  60  80  100 120 140 160  0   40  80  120 160 ";
    string sestarinda = "c | 60  40  20  0   20  40  60  80  100 120 140  20  20  60  100 140 ";
    string septitarinda = "d | 80  60  40  20  0   20  40  60  80  100 120  40  0   40  80  120 ";
    string astotarinda = "e | 100 80  60  40  20  0   20  40  60  80  100  60  20  20  60  100 ";
    string devitarinda = "g | 120 100 80  60  40  20  0   20  40  60  80   80  40  0   40  80 ";
    string desmitarinda = "h | 140 120 100 80  60  40  20  0   20  40  60   100 60  20  20  60 ";
    string vienpadrinda = "i | 160 140 120 100 80  60  40  20  0   20  40   120 80  40  0   40 ";
    string divpadrinda = "j | 180 160 140 120 100 80  60  40  20  0   20   140 100 60  20  20 ";
    string trispadrinda = "k | 200 180 160 140 120 100 80  60  40  20  0    160 120 80  40  0 ";

    cout <<pirmarinda<<endl<<otrarinda<<endl<<tresarinda<<endl<<ceturtarinda<<endl<<piektarinda<<endl<<sestarinda<<endl<<septitarinda<<endl<<astotarinda<<endl<<devitarinda<<endl<<desmitarinda<<endl<<vienpadrinda<<endl<<divpadrinda<<endl<<trispadrinda<<endl;
    //V4 Liek ievadīt nākamo posma galapunktu.
    loopviens = 0;
    while(loopviens != 1){
      progattalumslietus = procenti / 1.25;
      progattalumssaule = procenti / 0.7142857142857143;
      cout<<endl<<"Tu ar "<<procenti<<"% lielu uzlādi ar kuru var nobraukt lietus laikā: "<<progattalumslietus<<"km, taču saulainā laikā: "<<progattalumssaule<<"km, atrodies punktā: "<<atrasanas<<". Ievadi lūdzu nākošo galapunktu: ";
      cin>>punkts;
      //v5 Pārbauda vai punkts eksistē, tad viņš nosaka vai punkts jau nav apmeklēts.
      if((punkts == "sk")||(punkts == "a")||(punkts == "b")||(punkts == "c")||(punkts == "d")||(punkts == "e")||(punkts == "g")||(punkts == "h")||(punkts == "i")||(punkts == "j")||(punkts == "k")||(punkts == "s1")||(punkts == "s2")||(punkts == "s3")||(punkts == "s4")||(punkts == "s5")){
        cout<<"Tu esi izvēlējies galapunktu "<<punkts<<"\n";
      }else{
        cout<<"Tāds punkts neeksistē\n";
        continue;
      }
      // Šeit aprēķināsies cik tad nobrauca vienā reizē
    for(ap=0,at=20;ap!=9;ap=ap+1,at=at+20){
      if(punkts==saraksts[ap]){
        izveletais = ap;
        punktaattalums = at;}
      }
    for(ap=0,at=0;ap!=5;ap=ap+1,at=at+40){
      if(punkts==saraksts2[ap]){
        izveletais=-1;
        punktaattalums = at;}
      }
    for(ap=0,at=20;ap!=9;ap=ap+1,at=at+20){
      if(atrasanas == saraksts[ap]){
      atrasanasattalums = at;}
    }
    for(ap=0,at=0;ap!=5;ap=ap+1,at=at+40){
      if(atrasanas == saraksts2[ap]){
      atrasanasattalums = at;}
    }
    attalums = punktaattalums - atrasanasattalums;
    if(attalums < 0){
      attalums = attalums / -1;
    }
    if((izveletais == 0) && (apmekletie[0] == 1) ){
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 1) && (apmekletie[1] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 2) && (apmekletie[2] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 3) && (apmekletie[3] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 4) && (apmekletie[4] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 5) && (apmekletie[5] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 6) && (apmekletie[6] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 7) && (apmekletie[7] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 8) && (apmekletie[8] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else if((izveletais == 9) && (apmekletie[9] == 1) ) {
          cout<<"Tu esi izvēlējies punktu, kuru jau esi apmeklējis.\n";
        }else{
          loopviens = loopviens + 1;
        }
    }
    //V8 Tiek notieks kādi laikaapstākļi būs, ja "laika" = 0 tad ir saulains un ja 1 tad lietus. Šeit pārliku, jo liekas, ka ir loģiskāk, interesantāk, ka laiks var mainīties katrā ceļu posmā.
      srand(time(NULL));
    number = rand() % 10;
     if (number<5){
       (laika = 0);
       cout<<"\nIr uznācis lietus!";
     }else if (number>5){
      (laika = 1);
       cout<<"\nSāk spīdēt saule!";
     }
    //Ja nebūs pietiekoši procenti, tad neļauj nekur aizbraukt.
    if(laika==1){
      nepprocenti = 0.7142857142857143 * attalums;
    }else{
      nepprocenti = 1.25 * attalums;
    }
    if(procenti - nepprocenti < 0){
      cout<<"\nTev nepietiek uzlādes!\n";
      continue;
    }
      
    //v7 Aprēķina uzlādes līmeni saistībā ar laika apstākļiem un attālumu.
    if(laika==1){
      procenti = procenti - 0.7142857142857143 * attalums;
    }else{
      procenti = procenti - 1.25 * attalums;
    }
    cout<<"\nTu nobrauci "<<attalums<<"km garu attālumu.\n";
    //Šis ir pagaidu variants, tad kad uzprogrammēs tās visas stacijas, tad vaig ielikt, ka ja ir attālums, kuram nepietiek elektrības, tad loops beidzas, un mašīna neaizbrauc uz izvēlēto punktu, bet viņai ir jābrauc uzlādi
    atrasanas = punkts;
    //Šis reģistrē, ka izvēlētais punkts ir apmeklēts.
    for(ap=0;ap!=8;ap=ap+1){
      if(atrasanas == saraksts[ap]){
        apmekletie[ap]=1;}
    }
        
    while (stop1 != 1 && punkts == "a"){
      if (punkts == "a"){
cout<<"Tu atrodies pie kalpaka tilta\n"<<"Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kam par godu nosaukts tilts?\n";
  getline(cin,Atbilde1);
        }if (Atbilde1 == "Oskaram Kalpakam" || Atbilde1 == "oskaram kalpakam" && punkts == "a"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop1 = 1;break;
  }else { 
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop1 = 0;
    }
  }
  
    
  while (stop2 != 1 && punkts =="b"){
  if (punkts == "b"){
cout<<"Tu atrodies Saraiķos\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kāda muiža atrodas šajā pilsētā?\n";
  getline(cin,Atbilde2);
 }if  (Atbilde2 == "Saraiķu"||Atbilde2 == "saraiķu"||Atbilde2 == "Saraiķu muiža"||Atbilde2 == "saraiķu muiža"||Atbilde2 == "Saraiķu Muiža"  && punkts == "b"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop2 = 1;break;
  }else {
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop2 = 0;
    }
    }
    while (stop3 != 1 && punkts == "c"){
  if (punkts == "c"){
cout<<"Tu atrodies pāvilostā\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kāds kuģis atrodas pilsētas centrā?\n";
  getline(cin,Atbilde3);
  }if (Atbilde3 == "Dole"||Atbilde3 == "dole"&& punkts == "c"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop1 = 1;break;
  }else { 
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop1 = 0;
    }
  }
  
    
  while (stop4 != 1 && punkts =="d"){
  if (punkts == "d"){
cout<<"Tu atrodies alsungā\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kādā novadā atrodas šī pilšeta?\n";
  getline(cin,Atbilde4);
 }if  (Atbilde4 == "Ventspils"||Atbilde4 == "ventspils"||Atbilde4 == "Ventspils Novads"||Atbilde4 == "Ventspils novads"||Atbilde4 == "ventspils novads" && punkts == "d"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop2 = 1;break;
  }else {
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop2 = 0;
    }
    }
        while (stop5 != 1 && punkts == "e"){
  if (punkts == "e"){
cout<<"Tu atrodies Užavā\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kādu alu ražo užavā?\n";
  getline(cin,Atbilde5);
  }if (Atbilde5 == "Užavas alu" || Atbilde5 == "užavas alu" || Atbilde5 == "užavas" || Atbilde5 == "Užavas" && punkts == "e"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop1 = 1;break;
  }else { 
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop1 = 0;
    }
  }
  
    
  while (stop6 != 1 && punkts =="g"){
  if (punkts == "g"){
cout<<"Tu atrodies Ventspilī\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Cik officiāli ir govis ventspilī?\n";
  getline(cin,Atbilde6);
 }if  (Atbilde6 == "28" && punkts == "g"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop2 = 1;break;
  }else {
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;
    }
    }
    while (stop7 != 1 && punkts == "h"){
  if (punkts == "h"){
cout<<"Tu atrodies Usmā\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kāds ezers atrodas blakus usmai?\n";
  getline(cin,Atbilde7);
  }if (Atbilde7 == "Usmas ezers"||Atbilde7 == "usmas ezers"||Atbilde7 == "usmas"||Atbilde7 == "Usmas" && punkts == "h"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop1 = 1;break;
  }else { 
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop1 = 0;
    }
  }
  
    
  while (stop8 != 1 && punkts =="i"){
  if (punkts == "i"){
cout<<"Tu atrodies Kuldīgā\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kāda upe tek cauri kuldīgai?\n";
  getline(cin,Atbilde8);
 }if  (Atbilde8 == "Ventas"||Atbilde8 == "Ventas upe"||Atbilde8 == "ventas upe"||Atbilde8 == "ventas"||Atbilde8 == "venta"||Atbilde8 == "Venta"&& punkts =="i"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop2 = 1;break;
  }else {
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop2 = 0;
    }
    }
        while (stop9 != 1 && punkts == "j"){
  if (punkts == "j"){
cout<<"Tu atrodies Aizputē\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kāda upe tek cauri aizputei?\n";
  getline(cin,Atbilde9);
  }if (Atbilde9 == "Tebra"||Atbilde9 == "tebra"||Atbilde9 == "Tebras upe"||Atbilde9 == "tebras upe"&& punkts == "j"){
    cout<<"Pareizi!\n";
    APunkti = APunkti + 3;stop1 = 1;break;
  }else { 
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop1 = 0;
    }
  }
    
  while (stop10 != 1 && punkts =="k"){
  if (punkts == "k"){
cout<<"Tu atrodies Čakstes laukumā\n"<<" Tev ir jaatrisina uzdevums par šo vietu!\n";
  cout<<"Kam par godu nosaukts Čakstes laukums?\n";
  getline(cin,Atbilde10);
 }if  (Atbilde10 == "Jānis Čakste" && punkts == "k"){
    cout<<"Pareizi!";
    APunkti = APunkti + 3;stop2 = 1;break;
  }else {
    cout<<"Nepareizi! Pameiģini vēlreiz! Pārliecinies ka pareizi ieraksīji\n";APunkti = APunkti - 1;stop2 = 0;
    }
    }
    if (procenti >= 14){
      continue;
}else if (procenti < 14) {//uzmanību
 
  cout<<"Mašīna apstājās. Baterija ir izlādējusies! Tālāka kustība nav iespējama. Jāsauc evakuātors! "<<"\n";
  
  cout<<"Evakuātors ieradās! Uz kuru uzlādes staciju laižam?(s1;s2;s3;s4;s5) ";
  cin>>punkts;
 if((punkts == "s1") || (punkts == "s2") || (punkts == "s3") || (punkts == "s4") || (punkts == "s5")){
  cout<<"Tevi atveda uz staciju "<<punkts<<" \n ";
    APunkti = APunkti - 3;
    procenti = 100;
   continue;
    }
    }
  for(ap=0,app=0;ap!=8;ap=ap+1){
if(apmekletie[ap]==1){
      app=app+1;
    }
  }
  } 
  //loops beidzas
  if(atrasanas == "k"){
    cout<<"\nSpēle beidzas! Tu esi veiksmīgi pabeidzis spēli!\n";
    cout<<"Tu esi ieguvis "<<APunkti<<" lielu punktu daudzumu!";
    }else{
    cout<<"Spēle beidzas! Tā kā neatrodies k punktā, tad spēle ir izgāzusies";
    }
  return (0);
}
