#include <iostream>

int main()
{
    int ilgis=0, n;
 std::string name, visoseiles="";
 std::cout << "Iveskite varda: ";
 std::cin>> name;
 while(true)
 {
     std::cout << "Iveskite remelio ploti: ";
     std::cin >>n;
     if(n<3 || n%2==0)
     std::cout<<"Pasirinkimas netinkamas"<<std::endl;
     else
        break;
 }

 if(name[name.length()-1]=='s')
     ilgis+=name.length()+14;
  else
        ilgis+=name.length()+13;

 for(int i=0; i<ilgis; i++)
  {
   visoseiles+="*";
  }
  visoseiles+="\n";

  for(int p=0; p<(n-3)/2; p++)
  {
      visoseiles+="*";
     for(int i=0; i<ilgis-2; i++)
      {
       visoseiles+=" ";
      }
      visoseiles=visoseiles+"*"+"\n";
  }
  if(name[name.length()-1]=='s')
  {
      visoseiles+="* Sveikas, "+name+"! *"+"\n";
  }
  else{
      visoseiles+="* Sveika, "+name+"! *"+"\n";
  }
  for(int p=0; p<(n-3)/2; p++)
  {
      visoseiles+="*";
     for(int i=0; i<ilgis-2; i++)
      {
       visoseiles+=" ";
      }
      visoseiles=visoseiles+"*"+"\n";
  }
  for(int i=0; i<ilgis; i++)
  {
   visoseiles+="*";
  }
   std::cout<<visoseiles;
  return 0;


}
