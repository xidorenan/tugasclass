#include<iostream>
#include<string>

using namespace std;

class os{
	public:
		void opensource(string bebas);
		int versi;
		string tipe;
};

int main(){
	ox debian,redhat,ubuntu,fedora;
	
	debian.tipe="mudah dimengerti";
	redhat.tipe="Support dalam tranfer";
	ubuntu.tipe="Tampilan keren";
	fedora.tipe="Lisensi berbayar";
	
	cout<<(ubuntu.tipe);
	ubuntu.opensource(" 13.1");
	fedora.opensource(" 11.0");
}
void os::opensource(string bebas){
	cout<<" Open Source"<<bebas<<"!!"<<endl;
}
