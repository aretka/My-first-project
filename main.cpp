#include <iostream>

int main()
{
    int ilgis=0;
 std::string name, eil1="*", eil2="*", eil3="* ", eil4="*", eil5="*";
 std::cout << "Iveskite varda: ";
 std::cin>> name;

 ilgis+=name.length()+13;
 for(int i=0; i<ilgis; i++)
  {
   eil1+="*";
   eil5+="*";
  }

 for(int i=0; i<ilgis-1; i++)
  {
   eil2+=" ";
   eil4+=" ";
  }
  eil2+="*";
  eil4+="*";

  eil3+="Sveikas, "+name+"! *";

    std::cout << eil1 <<std::endl;
    std::cout << eil2 <<std::endl;
    std::cout << eil3 <<std::endl;
    std::cout << eil4 <<std::endl;
    std::cout << eil5 <<std::endl;
  return 0;


}
