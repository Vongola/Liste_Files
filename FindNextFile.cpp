
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void FindTxtFiles()
{
  HANDLE hFind;
  WIN32_FIND_DATA FindData;
  bool files = true;

  cout << "Fichiers TXT." << endl << endl;

  hFind = FindFirstFile("*.txt", &FindData);

  cout << FindData.cFileName << endl;
  cout << "" << endl;

}

void FindXlsxFiles()
{
  HANDLE hFindxlsx;
  WIN32_FIND_DATA FindData;
  bool files = true;

  cout << "Fichiers xlsx." << endl << endl;

  hFindxlsx = FindFirstFile("*.xlsx", &FindData);

  cout << FindData.cFileName << endl;
  cout << "" << endl;

}


int main(int argc, char* argv[])
{

  FindXlsxFiles();
  FindTxtFiles();
  system("pause");
  return 0;
}
