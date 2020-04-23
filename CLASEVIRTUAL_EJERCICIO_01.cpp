/*		EJERCICIO - CLASE VIRTUAL
Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados, 
por tal motivo la empresa lo ha contratado para la implementacion de este proyecto, los datos a almacenar son:

	Codigo Empleado,
	Nombre Empleado,
	Puesto,
	Departamento,
	Salario.

	Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion.  
	El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.

*/

//importación de librerías
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//declaración de estructura tipo empleado
struct empleado{
	int codEmpleado;
	string nombreEmpleado;
	string puestoEmpleado;
	string departamento;
	float salario;	
};

void gestiones(){
	//Espacio de registros
	int numRegis = 10;
	int dpto;
	float totalPlanilla = 0.00;
	//Declaración de puntero de tipo estructura
	//estructura *puntero;
	empleado *punteroEmpleado;
	
	//Asignación de espacio a puntero
	punteroEmpleado = new empleado[numRegis];
	
	//Ciclo para el registro de empleados
	for (int i = 0; i < numRegis; i ++){
		system("CLS");
		//Limpiar buffer
		fflush(stdin);
		cin.clear();
		
		//Ingreso de código
		cout << "Ingrese el codigo del empleado #" << i +1 << endl;
		cin >> punteroEmpleado[i].codEmpleado;
		cin.ignore();
		
		cout << "Ingrese el nombre del empleado #" << i +1 << endl;
		getline(cin, punteroEmpleado[i].nombreEmpleado);
		cin.ignore();
		
		cout << "Ingrese el puesto del empleado #" << i+1 << endl;
		cin >> punteroEmpleado[i].puestoEmpleado;
		cin.ignore();
		
		cout << "--------------DEPARTAMENTO--------------" << endl;
		cout << "1. Gerencia" << endl;
		cout << "2. Administracion" << endl;
		cout << "3. Produccion" << endl;
		cout << "Seleccione un departamento: " << endl;
		cin >> dpto;
		
		if(dpto == 1){
			
			punteroEmpleado[i].departamento = "Gerencia";
			
		}else if (dpto == 2){
			
			punteroEmpleado[i].departamento = "Administracion";
			
		}else if (dpto == 3){
			
			punteroEmpleado[i].departamento = "Produccion";
			
		}else{
			
			cout << "Opcion invalida. \nEl empleado #" << i+ 1 << " se registró en el departamento de Produccion." << endl;
			
			punteroEmpleado[i].departamento = "N/A";
			
		}
		
		cout << "Ingrese el salario del empleado #" << i + 1 << endl;
		cin >> punteroEmpleado[i].salario;
		cin.ignore();
		
		totalPlanilla += punteroEmpleado[i].salario;
		
		cout << "EMPLEADO REGISTRADO EXITOSAMENTE!" << endl;
		system("Pause");
	}
	
	system("CLS");
	
	//SALIDA DE REPORTE EN PANTALLA
	cout << "---------------EMPLEADOS REGISTRADOS---------------" << endl;
	for (int i = 0; i < numRegis; i ++){
		cout << "---------------------EMPLEADO #" << i+1 << "---------------------" << endl;
		cout << "CODIGO EMPLEADO: " << punteroEmpleado[i].codEmpleado << endl;
		cout << "NOMBRE         : " << punteroEmpleado[i].nombreEmpleado << endl;
		cout << "PUESTO         : " << punteroEmpleado[i].puestoEmpleado << endl;
		cout << "DEPARTAMENTO   : " << punteroEmpleado[i].departamento << endl;
		cout << "SALARIO        : " << punteroEmpleado[i].nombreEmpleado << endl;
		cout << "-----------------------------------------------------------------" << endl;
	}
	
	
	//Muestra el total a apgar en planilla
	cout << "------------------------------------------------------------------" << endl;
	cout << "\n\nEL TOTAL A PAGAR EN PLANILLA ES: Q." << totalPlanilla << endl;
	cout << "------------------------------------------------------------------" << endl;
}

int main(){

	gestiones();
}
