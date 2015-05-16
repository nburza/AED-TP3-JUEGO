/*NICOLAS BURZA
02052015
JUEGO
*/

#include <iostream>

using namespace std;

int main (){
	cout << "Trivial CMD" << endl;
	cout << "Pulse cualquier tecla para empezar a jugar" << endl;
	cout << "Pulse 0 para salir del juego" << endl;
	char a;
	cin >> a;
	int puntaje=0;
	if (a==0){
		cout << "Su puntaje es: " << puntaje << endl;
		return 0;
	}
	else{
		while(puntaje<150){
		cout << "A continuacion, elija una categoria" << endl;
		cout << "1. Historia" << endl;
		cout << "2. Deportes" << endl;
		cout << "3. Geografia" << endl;
		cout << "0. Salir del juego" << endl;
		int b;
		cin >> b;
		switch (b){
			case 1:
				cout<<"En que ano fueron derribadas las Torres Gemelas?"<<endl;
				cout<<"1.2003"<<endl;
				cout<<"2.1999"<<endl;
				cout<<"3.2000"<<endl;
				cout<<"4.2001"<<endl;
				int c;
				cin>>c;
				if(c==4){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"En que ano tuvo lugar el ataque a Pearl Harbor?"<<endl;
				cout<<"1.1939"<<endl;
				cout<<"2.1940"<<endl;
				cout<<"3.1941"<<endl;
				cout<<"4.1942"<<endl;
				int d;
				cin>>d;
				if(d==3){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"Quienes fueron los sans-culottes de la Revolución Francesa?"<<endl;
				cout<<"1.La burguesia durante la Revolucion"<<endl;
				cout<<"2.La principal masa social revolucionaria"<<endl;
				cout<<"3.El nombre despectivo de los burgueses"<<endl;
				cout<<"4.Ninguna es correcta"<<endl;
				int e;
				cin>>e;
				if(e==2){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"Cuantos soldados argentinos murieron en la Guerra de las Malvinas?"<<endl;
				cout<<"1.649"<<endl;
				cout<<"2.200"<<endl;
				cout<<"3.987"<<endl;
				cout<<"4.1452"<<endl;
				int f;
				cin>>f;
				if(f==1){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"Quién pronuncio la frase: 'Bebamos de la copa de la destruccion'?"<<endl;
				cout<<"1.Margaret Tatcher"<<endl;
				cout<<"2.Mussolini"<<endl;
				cout<<"3.Gengis Kan"<<endl;
				cout<<"4.Berlusconi"<<endl;
				int g;
				cin>>g;
				if(g==3){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				break;
			case 2:
				cout<<"Cual es el estilo de natacion mas rapido?"<<endl;
				cout<<"1.Crol"<<endl;
				cout<<"2.Espalda"<<endl;
				cout<<"3.Mariposa"<<endl;
				cout<<"4.Pecho"<<endl;
				int m;
				cin>>m;
				if(m==1){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"Cuantos jugadores componen un equipo de rugby?"<<endl;
				cout<<"1.11"<<endl;
				cout<<"2.12"<<endl;
				cout<<"3.15"<<endl;
				cout<<"4.21"<<endl;
				int n;
				cin>>n;
				if(n==3){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"En que pais se invento el voleibol?"<<endl;
				cout<<"1.Gran Bretaña"<<endl;
				cout<<"2.Francia"<<endl;
				cout<<"3.Rusia"<<endl;
				cout<<"4.Estados Unidos"<<endl;
				int o;
				cin>>o;
				if(o==4){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"Que seleccion acumula mayor cantidad de expulsados en  mundiales de futbol?"<<endl;
				cout<<"1.Argentina"<<endl;
				cout<<"2.Brasil"<<endl;
				cout<<"3.Italia"<<endl;
				cout<<"4.Camerun"<<endl;
				int p;
				cin>>p;
				if(p==1){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"De que deporte es el longboard una de las modalidades?"<<endl;
				cout<<"1.Skateboard"<<endl;
				cout<<"2.Snowboard"<<endl;
				cout<<"3.Alpinismo"<<endl;
				cout<<"4.Surf"<<endl;
				int q;
				cin>>q;
				if(q==1){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				break;
			case 3:
				cout<<"Cual es la ciudad mas austral del mundo?"<<endl;
				cout<<"1.Sidney"<<endl;
				cout<<"2.Melbourne"<<endl;
				cout<<"3.Usuahia"<<endl;
				cout<<"4.El Calafate"<<endl;
				int w;
				cin>>w;
				if(w==3){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"A que pais pertenece la isla de Tasmania?"<<endl;
				cout<<"1.Estados Unidos"<<endl;
				cout<<"2.Australia"<<endl;
				cout<<"3.Portugal"<<endl;
				cout<<"4.Ninguna es correcta"<<endl;
				int x;
				cin>>x;
				if(x==3){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"En cual de los siguientes paises NO hay ningun desierto?"<<endl;
				cout<<"1.Espana"<<endl;
				cout<<"2.Chile"<<endl;
				cout<<"3.Mongolia"<<endl;
				cout<<"4.Alemania"<<endl;
				int y;
				cin>>y;
				if(y==4){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"Cual es el codigo internacional para Cuba?"<<endl;
				cout<<"1.CA"<<endl;
				cout<<"2.CU"<<endl;
				cout<<"3.CB"<<endl;
				cout<<"4.Ninguna es correcta"<<endl;
				int z;
				cin>>z;
				if(z==2){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				cout<<"En que pais situarias la ciudad de Cali?"<<endl;
				cout<<"1.Colombia"<<endl;
				cout<<"2.Venezuela"<<endl;
				cout<<"3.Costa Rica"<<endl;
				cout<<"4.Chile"<<endl;
				int aa;
				cin>>aa;
				if(aa==1){
					cout<<"La respuesta es correcta"<<endl;
					puntaje+=10;
				}
				else{
					cout<<"La respuesta es incorrecta"<<endl;
				}
				break;
			case 0:
				cout<<"Su puntaje es: "<<puntaje<<endl;
				return 0;
		}
	}
}
}
