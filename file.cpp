#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;
int main(){
  string line;
  fstream f;
  f.open("data.txt", ios::in);
  while (!f.eof()){
    bool show = false;
    //÷òåíèå î÷åðåäíîãî çíà÷åíèÿ èç ïîòîêà f â ïåðåìåííóþ line
    f>>line;

    int n=0;        
    for (int i = 0; i<line.length(); i++){
      if (isdigit(line[i])){
	n++;
      }else{
	if (n==2){
	  show=true;
	}
	n = 0;
                  
      }
    }
    if (show==true || n==2){
      //âûâîä ñòðîêè íà ýêðàí
      cout<<line<<"\n";
    }

    
  }
  f.close();
  system("PAUSE");
  return EXIT_SUCCESS;
}
