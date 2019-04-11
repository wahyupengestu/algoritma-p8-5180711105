#include<iostream>

using namespace::std;
struct hasil
{double uts,uas,tugas,absen,total;
char nhuruf;
string nama,nim;};

hasil hsl;


void nama ()
{
    cout<<"\nNAMA   : ";
    cin>>hsl.nama;
    cout<<"NIM  : ";
    cin>>hsl.nim;
}

void masukan()
{
  cout<<"masukan input nilai uts :";cin>>hsl.uts;
    cout<<"masukan input nilai uas :";cin>>hsl.uas;
    cout<<"masukan input nilai tugas :";cin>>hsl.tugas;
    cout<<"masukan input nilai absen :";cin>>hsl.absen;
    hsl.total=(hsl.uts*20/100)+(hsl.uas*30/100)+(hsl.tugas*35/100)+(hsl.absen*15/100);
    cout<<"nilai total :"<<hsl.total<<endl;

    if(hsl.total>=81)
        hsl.nhuruf='A';
    else if (hsl.total>=61)
        hsl.nhuruf='B';
    else if (hsl.total>=41)
        hsl.nhuruf='C';
    else if (hsl.total>=21)
        hsl.nhuruf='D';
    cout<<"nilai huruf :"<<hsl.nhuruf<<endl;
}
main()
{
    nama();
    masukan();
}


