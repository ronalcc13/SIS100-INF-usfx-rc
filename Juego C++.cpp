#include <iostream>
using namespace std;
char cuadri[3][3];
///////////////////
int iniciar(){
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			cuadri[i][j]='-';}}return true;}
////////////////////
int Ganador(){
char jugadorubica=cuadri[1][1];//HORIZONTAL
for(int i=1;i<4;i++){
	for(int j=1;j<4;j++){
		if(cuadri[i][j]=='-'){break;break;}
		if(jugadorubica!=cuadri[i][j]){break;break;}
		jugadorubica=cuadri[i][j];
		if(j==3){
			cout<<"Ha Ganado : "<<jugadorubica<<endl;
			system("color B0");return true;
		}
	}
}
jugadorubica=cuadri[1][1];//VERTICAL
for(int i=1;i<4;i++){
	for(int j=1;j<4;j++){
		if(cuadri[j][i]=='-'){break;break;}
		if(jugadorubica!=cuadri[j][i]){break;break;}
		jugadorubica=cuadri[j][i];
		if(j==3){
			cout<<"Ha Ganado : "<<jugadorubica<<endl;
			system("color 60");return true;
		}
	}
}
jugadorubica=cuadri[1][1];//DIAGONAL IZQ-DER
for(int i=1;i<4;i++){
		if(cuadri[i][i]=='-'){break;}
		if(jugadorubica!=cuadri[i][i]){break;}
		jugadorubica=cuadri[i][i];
		if(i==3){
			cout<<"Ha Ganado : "<<jugadorubica<<endl;
			system("color 83");return true;
		}
}
jugadorubica=cuadri[1][3];//DIAGONAL DER-IZQ
for(int i=3;i>=1;i--){
	if(cuadri[3-i][i]=='-'){break;}
	if(jugadorubica!=cuadri[3-i][i]){break;}
	jugadorubica=cuadri[1-i][i];
	if(i==3){
		cout<<"Ha Ganado : "<<jugadorubica<<endl;
		system("color 27");return true;
	}
	

}
return false;}
////////////////////////
int mesa(){
	for(int i = 1 ; i < 4 ; i ++){
		for(int j = 1 ; j <  4; j++){
			cout<<"    "<< cuadri[i][j];
		}cout<<endl; } 
	return 0;}
//////////////////
int Empate(){
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			if(cuadri[i][j]=='-'){
				return false;
			}
		}}cout<<"Hay un Empate"<<endl<<endl;system("color 37");return true;
}
////////////////
int main(int argc, char *argv[]) {
	char jugador;
	system("color 71");
	cout<<"BIENVENIDO AL JUEGO DE 3 EN LINEA \nQue jugador desea ser X o O : ";
	cin>>jugador;
	
	int fila=1,columna=1;
	iniciar();
	while(!Ganador()&& !Empate()){
		mesa();
		cout<<"Ingrese la fila luego la Columna : "<<jugador<<endl;
		cin>>fila>>columna;
		if(cuadri[fila][columna]!='-'){
			cout<<"Esta casilla esta ocupada, vuelva a ingresar el lugar"<<endl;
		}
		else{
			cuadri[fila][columna]=jugador;
			if(jugador=='X'){
				jugador='O';
			}else{
				jugador='X';
			}
		}
	}
	cout<<endl<<mesa()<<endl;}
