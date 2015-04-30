#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){

	srand(time(NULL));
	cout << "Nombre del juego" << endl;
	cout << "Pulse cualquier tecla para empezar a jugar" << endl;
	cout << "Pulse 0 para salir del juego" << endl;
	char a;
	cin >> a;
	int puntaje;
	if (a==0){
		cout << "Su puntaje es: " << puntaje << endl;
		return 0;
	}
	else{
		cout << "A continuacion, elija una categoria" << endl;
		cout << "1. Historia" << endl;
		cout << "2. Deportes" << endl;
		cout << "3. Geografia" << endl;
		cout << "4. Entretenimiento" << endl;
		cout << "5. Ciencia" << endl;
		cout << "0. Salir del juego" << endl;
		int b;
		cin >> b;
		do{
			int num=(rand()%10)+1;
			switch (b){
				case 1:
					switch (num){
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
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 2:
							cout<<"En que ano tuvo lugar el ataque a Pearl Harbor?"<<endl;
							cout<<"1.1939"<<endl;
							cout<<"2.1940"<<endl;
							cout<<"3.1941"<<endl;
							cout<<"4.1942"<<endl;
							int d;
							cin>>d;
							if(d==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 3:
							cout<<"Quienes fueron los sans-culottes de la Revolución Francesa?"<<endl;
							cout<<"1.La burguesia durante la Revolucion"<<endl;
							cout<<"2.La principal masa social revolucionaria"<<endl;
							cout<<"3.El nombre despectivo de los burgueses"<<endl;
							cout<<"4.Ninguna es correcta"<<endl;
							int e;
							cin>>e;
							if(e==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 4:
							cout<<"Cuantos soldados argentinos murieron en la Guerra de las Malvinas?"<<endl;
							cout<<"1.649"<<endl;
							cout<<"2.200"<<endl;
							cout<<"3.987"<<endl;
							cout<<"4.1452"<<endl;
							int f;
							cin>>f;
							if(f==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 5:
							cout<<"Quién pronunció la frase: 'Bebamos de la copa de la destrucción'?"<<endl;
							cout<<"1.Margaret Tatcher"<<endl;
							cout<<"2.Mussolini"<<endl;
							cout<<"3.Gengis Kan"<<endl;
							cout<<"4.Berlusconi"<<endl;
							int g;
							cin>>g;
							if(g==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 6:
							cout<<"Con que emperador estuvo casada Cleopatra?"<<endl;
							cout<<"1.Ptolomeo XIV"<<endl;
							cout<<"2.Julio Cesar"<<endl;
							cout<<"3.Marco Antonio"<<endl;
							cout<<"4.Todas son correctas"<<endl;
							int h;
							cin>>h;
							if(h==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 7:
							cout<<"El Renacimiento marcó el inicio de la Edad..."<<endl;
							cout<<"1.Moderna"<<endl;
							cout<<"2.Antiguedad clasica"<<endl;
							cout<<"3.Contemporanea"<<endl;
							cout<<"4.Media"<<endl;
							int i;
							cin>>i;
							if(i==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 8:
							cout<<"Que pais fue dirigido por Stalin?"<<endl;
							cout<<"1.Union Sovietica"<<endl;
							cout<<"2.Cuba"<<endl;
							cout<<"3.Alemania"<<endl;
							cout<<"4.Polonia"<<endl;
							int j;
							cin>>j;
							if(j==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 9:
							cout<<"Cuantos siglos duro el Siglo de Oro?"<<endl;
							cout<<"1.Dos"<<endl;
							cout<<"2.Uno"<<endl;
							cout<<"3.Tres"<<endl;
							cout<<"4.Medio"<<endl;
							int k;
							cin>>k;
							if(k==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 10:
							cout<<"Quien libero a Argentina, Chile y Peru?"<<endl;
							cout<<"1.Ernesto 'Che' Guevara"<<endl;
							cout<<"2.Manuel Belgrano"<<endl;
							cout<<"3.Jose de San Martin"<<endl;
							cout<<"4.Simon Bolivar"<<endl;
							int l;
							cin>>l;
							if(l==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
					}			
					break;				
				case 2:
					switch (num){
						case 1:
							cout<<"Cual es el estilo de natacion mas rapido?"<<endl;
							cout<<"1.Crol"<<endl;
							cout<<"2.Espalda"<<endl;
							cout<<"3.Mariposa"<<endl;
							cout<<"4.Pecho"<<endl;
							int m;
							cin>>m;
							if(m==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 2:
							cout<<"Cuantos jugadores componen un equipo de rugby?"<<endl;
							cout<<"1.11"<<endl;
							cout<<"2.12"<<endl;
							cout<<"3.15"<<endl;
							cout<<"4.21"<<endl;
							int n;
							cin>>n;
							if(n==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 3:
							cout<<"En que pais se invento el voleibol?"<<endl;
							cout<<"1.Gran Bretaña"<<endl;
							cout<<"2.Francia"<<endl;
							cout<<"3.Rusia"<<endl;
							cout<<"4.Estados Unidos"<<endl;
							int o;
							cin>>o;
							if(o==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 4:
							cout<<"Que seleccion acumula mayor cantidad de expulsados en  mundiales de futbol?"<<endl;
							cout<<"1.Argentina"<<endl;
							cout<<"2.Brasil"<<endl;
							cout<<"3.Italia"<<endl;
							cout<<"4.Camerun"<<endl;
							int p;
							cin>>p;
							if(p==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 5:
							cout<<"De que deporte es el longboard una de las modalidades?"<<endl;
							cout<<"1.Skateboard"<<endl;
							cout<<"2.Snowboard"<<endl;
							cout<<"3.Alpinismo"<<endl;
							cout<<"4.Surf"<<endl;
							int q;
							cin>>q;
							if(q==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 6:
							cout<<"Cuantos puntos vale un tiro libre encestado en baloncesto?"<<endl;
							cout<<"1.Uno"<<endl;
							cout<<"2.Dos"<<endl;
							cout<<"3.Tres"<<endl;
							cout<<"4.Depende"<<endl;
							int r;
							cin>>r;
							if(r==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 7:
							cout<<"Cual es el estadio de futbol con mayor capacidad en America?"<<endl;
							cout<<"1.Estadio Azteca (Mexico)"<<endl;
							cout<<"2.Estadio Maracana (Brasil)"<<endl;
							cout<<"3.Estadio Monumental (Argentina)"<<endl;
							cout<<"4.Estadio Morumbi (Brasil)"<<endl;
							int s;
							cin>>s;
							if(s==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 8:
							cout<<"Que tipo de competicion es el Giro de Italia?"<<endl;
							cout<<"1.Una competicion de vela"<<endl;
							cout<<"2.Una carrera ciclista"<<endl;
							cout<<"3.Un maraton"<<endl;
							cout<<"4.Una carrera automovilistica"<<endl;
							int t;
							cin>>t;
							if(t==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 9:
							cout<<"Como se llama la zona de hierba rasa donde esta ubicado el hoyo en golf?"<<endl;
							cout<<"1.Esplanada"<<endl;
							cout<<"2.Campo"<<endl;
							cout<<"3.Terreno"<<endl;
							cout<<"4.Green"<<endl;
							int u;
							cin>>u;
							if(u==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 10:
							cout<<"Quien fue el campeon del mundial de futbol 2002?"<<endl;
							cout<<"1.Italia"<<endl;
							cout<<"2.Alemania"<<endl;
							cout<<"3.Brasil"<<endl;
							cout<<"4.Espana"<<endl;
							int v;
							cin>>v;
							if(v==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
					}
					break;
				case 3:
					switch (num){
						case 1:
							cout<<"Cual es la ciudad mas austral del mundo?"<<endl;
							cout<<"1.Sidney"<<endl;
							cout<<"2.Melbourne"<<endl;
							cout<<"3.Usuahia"<<endl;
							cout<<"4.El Calafate"<<endl;
							int w;
							cin>>w;
							if(w==3){
							cout<<"La respuesta es correcta"<<endl;
							puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 2:
							cout<<"A que pais pertenece la isla de Tasmania?"<<endl;
							cout<<"1.Estados Unidos"<<endl;
							cout<<"2.Australia"<<endl;
							cout<<"3.Portugal"<<endl;
							cout<<"4.Ninguna es correcta"<<endl;
							int x;
							cin>>x;
							if(x==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 3:
							cout<<"En cual de los siguientes paises NO hay ningun desierto?"<<endl;
							cout<<"1.Espana"<<endl;
							cout<<"2.Chile"<<endl;
							cout<<"3.Mongolia"<<endl;
							cout<<"4.Alemania"<<endl;
							int y;
							cin>>y;
							if(y==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 4:
							cout<<"Cual es el codigo internacional para Cuba?"<<endl;
							cout<<"1.CA"<<endl;
							cout<<"2.CU"<<endl;
							cout<<"3.CB"<<endl;
							cout<<"4.Ninguna es correcta"<<endl;
							int z;
							cin>>z;
							if(z==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 5:
							cout<<"En que pais situarias la ciudad de Cali?"<<endl;
							cout<<"1.Colombia"<<endl;
							cout<<"2.Venezuela"<<endl;
							cout<<"3.Costa Rica"<<endl;
							cout<<"4.Chile"<<endl;
							int aa;
							cin>>aa;
							if(aa==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 6:
							cout<<"Cual de estas caracteristicas no pertenece al clima Mediterraneo?"<<endl;
							cout<<"1.Veranos secos y calurosos"<<endl;
							cout<<"2.Es un tipo de clima templado"<<endl;
							cout<<"3.Lluvias muy abundantes"<<endl;
							cout<<"4.Variables temperaturas en primavera"<<endl;
							int ab;
							cin>>ab;
							if(ab==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 7:
							cout<<"Cual es principal celebracion holandesa?"<<endl;
							cout<<"1.Navidad"<<endl;
							cout<<"2.La llegada del verano"<<endl;
							cout<<"3.El dia de la Reina"<<endl;
							cout<<"4.Halloween"<<endl;
							int ac;
							cin>>ac;
							if(ac==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 8:
							cout<<"Con cuantos paises limita Argentina?"<<endl;
							cout<<"1.Tres"<<endl;
							cout<<"2.Cuatro"<<endl;
							cout<<"3.Cinco"<<endl;
							cout<<"4.Seis"<<endl;
							int ad;
							cin>>ad;
							if(ad==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 9:
							cout<<"Que es la UA?"<<endl;
							cout<<"1.Union Austrohungara"<<endl;
							cout<<"2.Union Africana"<<endl;
							cout<<"3.Union Americana"<<endl;
							cout<<"4.Union Afroamericana"<<endl;
							int ae;
							cin>>ae;
							if(ae==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 10:
							cout<<"Cual es la capital de Suiza?"<<endl;
							cout<<"1.Berna"<<endl;
							cout<<"2.Zurich"<<endl;
							cout<<"3.Ginebra"<<endl;
							cout<<"4.Basilea"<<endl;
							int af;
							cin>>af;
							if(af==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
					}
					break;
				case 4:
					switch (num){
						case 1:
							cout<<"Que premiada serie de television tiene como protagonista a un publicista?"<<endl;
							cout<<"1.Mad Men"<<endl;
							cout<<"2.Shameless"<<endl;
							cout<<"3.Game of Thrones"<<endl;
							cout<<"4.Downton Abbey"<<endl;
							int ag;
							cin>>ag;
							if(ag==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 2:
							cout<<"Como se llamaba el personaje que interpretaba John Travolta en 'Grease'?"<<endl;
							cout<<"1.Danny Puno"<<endl;
							cout<<"2.Danny Zuko"<<endl;
							cout<<"3.Danny Grease"<<endl;
							cout<<"4.Danny Chulo"<<endl;
							int ah;
							cin>>ah;
							if(ah==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 3:
							cout<<"En que ano se estreno la pelicula de Disney 'Pinocho'?"<<endl;
							cout<<"1.1940"<<endl;
							cout<<"2.1950"<<endl;
							cout<<"3.1952"<<endl;
							cout<<"4.1946"<<endl;
							int ai;
							cin>>ai;
							if(ai==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 4:
							cout<<"Cual es el verdadero nombre de Alejandro Sanz?"<<endl;
							cout<<"1.Alejandro Sanchez Gutierrez"<<endl;
							cout<<"2.Alexander Santiago Seguiz"<<endl;
							cout<<"3.Alejandro Alberto Sanzon"<<endl;
							cout<<"4.Alejandro Sánchez Pizarro"<<endl;
							int aj;
							cin>>aj;
							if(aj==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 5:
							cout<<"Cuantos premios Grammy ha ganado Britney Spears?"<<endl;
							cout<<"1.Uno"<<endl;
							cout<<"2.Dos"<<endl;
							cout<<"3.Tres"<<endl;
							cout<<"4.Ninguno"<<endl;
							int ak;
							cin>>ak;
							if(ak==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 6:
							cout<<"Como se llamaba el personaje que interpretaba Al Pacino en 'Scarface'?"<<endl;
							cout<<"1.Sonny Montana"<<endl;
							cout<<"2.Tony Montana"<<endl;
							cout<<"3.Michael Corleone"<<endl;
							cout<<"4.Frank Slade"<<endl;
							int al;
							cin>>al;
							if(al==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 7:
							cout<<"Por cual de estas peliculas gano Clint Eastwood el premio Oscar al mejor director?"<<endl;
							cout<<"1.Million Dollar Baby"<<endl;
							cout<<"2.Cartas desde Iwo Jima"<<endl;
							cout<<"3.Mystic River"<<endl;
							cout<<"4.Los puentes de Madison"<<endl;
							int am;
							cin>>am;
							if(am==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 8:
							cout<<"Como se llama el protagonista de la saga Indiana Jones?"<<endl;
							cout<<"1.Jack Nicholson"<<endl;
							cout<<"2.Michael Fox"<<endl;
							cout<<"3.Harrison Ford"<<endl;
							cout<<"4.Robin Williams"<<endl;
							int an;
							cin>>an;
							if(an==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 9:
							cout<<"Que personaje del videojuego Mortal Kombat tiene poderes de hielo?"<<endl;
							cout<<"1.Scorpion"<<endl;
							cout<<"2.Reptile"<<endl;
							cout<<"3.Sub-Zero"<<endl;
							cout<<"4.Motaro"<<endl;
							int ao;
							cin>>ao;
							if(ao==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 10:
							cout<<"Como se llama el pajaro simbolo de los Juegos del Hambre?"<<endl;
							cout<<"1.Lechuza"<<endl;
							cout<<"2.Sinsajo"<<endl;
							cout<<"3.Gale"<<endl;
							cout<<"4.Llamas"<<endl;
							int ap;
							cin>>ap;
							if(ap==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
					}
					break;
				case 5:
					switch (num){
						case 1:
							cout<<"Cual de las siguientes enfermedades ataca al higado?"<<endl;
							cout<<"1.Hepatitis"<<endl;
							cout<<"2.Diabetes"<<endl;
							cout<<"3.Artrosis"<<endl;
							cout<<"4.Cifoescoliosis"<<endl;
							int aq;
							cin>>aq;
							if(aq==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 2:
							cout<<"Cual es la funcion principal del intestino grueso?"<<endl;
							cout<<"1.La absorción de nutrientes"<<endl;
							cout<<"2.La digestion mecanica de los alimentos"<<endl;
							cout<<"3.La absorcion de agua"<<endl;
							cout<<"4.La digestion química de alimentos"<<endl;
							int ar;
							cin>>ar;
							if(ar==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 3:
							cout<<"Que cambio de estado ocurre en la sublimacion?"<<endl;
							cout<<"1.De solido a liquido"<<endl;
							cout<<"2.De solido a gaseoso"<<endl;
							cout<<"3.De gaseoso a liquido"<<endl;
							cout<<"4.De liquido a solido"<<endl;
							int as;
							cin>>as;
							if(as==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 4:
							cout<<"De donde se saca la sacarina?"<<endl;
							cout<<"1.Del aceite de girasol"<<endl;
							cout<<"2.Del azucar"<<endl;
							cout<<"3.Del carbon"<<endl;
							cout<<"4.Del azufre"<<endl;
							int at;
							cin>>at;
							if(at==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 5:
							cout<<"Cuantas caras tiene un icosaedro?"<<endl;
							cout<<"1.16"<<endl;
							cout<<"2.8"<<endl;
							cout<<"3.24"<<endl;
							cout<<"4.20"<<endl;
							int au;
							cin>>au;
							if(au==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 6:
							cout<<"Cual es el cervido de mayor tamano?"<<endl;
							cout<<"1.El alce"<<endl;
							cout<<"2.El corzo"<<endl;
							cout<<"3.El ciervo"<<endl;
							cout<<"4.El pudu"<<endl;
							int av;
							cin>>av;
							if(av==1){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 7:
							cout<<"Que es el calostro?"<<endl;
							cout<<"1.Un hueso de la espina dorsal"<<endl;
							cout<<"2.Una hormona"<<endl;
							cout<<"3.Una parte del intestino grueso"<<endl;
							cout<<"4.La primera leche materna"<<endl;
							int aw;
							cin>>aw;
							if(aw==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 8:
							cout<<"Cual es el hueso mas pequeno del cuerpo?"<<endl;
							cout<<"1.El yunque"<<endl;
							cout<<"2.La falange"<<endl;
							cout<<"3.El estribo"<<endl;
							cout<<"4.Ninguna es correcta"<<endl;
							int ax;
							cin>>ax;
							if(ax==3){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 9:
							cout<<"Que estudia la icitologia?"<<endl;
							cout<<"1.Los insectos"<<endl;
							cout<<"2.Las erupciones cutaneas"<<endl;
							cout<<"3.Las rocas"<<endl;
							cout<<"4.Los peces"<<endl;
							int ay;
							cin>>ay;
							if(ay==4){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
						case 10:
							cout<<"Cual es el mamifero mas grande conocido hasta la actualidad?"<<endl;
							cout<<"1.Cachalote"<<endl;
							cout<<"2.Ballena Azul"<<endl;
							cout<<"3.Elefante"<<endl;
							cout<<"4.Rinoceronte"<<endl;
							int az;
							cin>>az;
							if(az==2){
								cout<<"La respuesta es correcta"<<endl;
								puntaje+10;
							}
							else{
								cout<<"La respuesta es incorrecta"<<endl;
							}
							break;
					}
					break;
				case 0:
					cout<<"Su puntaje es: "<<puntaje<<endl;
					return 0;
			}
		}while(b!=0);
	}
}	

