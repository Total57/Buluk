/*
--- ANGELES ARRIAGA ESTEBAN --- BULUK
---------- Código del Robot ----------
Este código es una simulación del controlamiento de un robot de BULUK
ya que este se ejecutara solamente en la terminal para simular acciones
y reaacciones del robot.
*/

#include <iostream>
#include <vector>
using namespace std ;

int main (){
    int modo = 0;
    cout << "----------- INICIO DEL PERIODO AUTONOMO -----------" << endl;
    cout << "-- Cada opcion realiza una accion diferente en los 15 segundos del autonomo --" << endl;
    cout << "-- Por favor selecciona una se las acciones posteriores --" << endl;
    cout << "Accion 1 - Girar 90 grados a la derecha, avanzar a la mitad de cancha y quedarse estatico" << endl;
    cout << "Accion 2 - Girar 90 grados a la derecha, avanzar a la mitad de cancha y mover el brazo mecánico arriba - abajo y abrir - cerrar la garra" << endl;
    cout << "Accion 3 - Girar 90 grados a la derecha, avanzar a la mitad de cancha y dar un giro de 180 grados para terminar volteando al inicio" << endl;
    cout << "Selecciona una de las tres acciones digitando '1' '2' o '3': " ;
    cin >> modo ;
    while (modo > 3 || modo < 1){
      cout << "Por favor selecciona una accion definida: " ;  
      cin >> modo;
    }

    if (modo == 1){
    cout << "\n---- Los 2 motores NEO de la banda izquierda se activan hacia enfrente por 3 segundos ---- " << endl;
    cout << "---- Los 2 motores NEO de la banda derecha se activan hacia atras al mismo tiempo que los de la izquierda ---- " << endl;
    cout << "---- El Robot dio una vuelta de 90 grados hacia la derecha en su misma posicion ----" << endl;
    cout << "\n---- Los 4 motores NEO de las bandas avanzan hacia enfrente por 7 segundos ---- " << endl;
    cout << "---- El robot esta avanzando hacia el frente para llegar a la linea ----" << endl;
    cout << "\n------ El robot se detiene al cruzar la linea con 3 segundos de sobra ------" << endl;
    }

    if (modo == 2){
    cout << "\n---- Los 2 motores NEO de la banda izquierda se activan hacia enfrente por 3 segundos ---- " << endl;
    cout << "---- Los 2 motores NEO de la banda derecha se activan hacia atras al mismo tiempo que los de la izquierda ---- " << endl;
    cout << "---- El Robot dio una vuelta de 90 grados hacia la derecha en su misma posicion ----" << endl;
    cout << "\n---- Los 4 motores NEO de las bandas avanzan hacia enfrente por 7 segundos ---- " << endl;
    cout << "---- El robot esta avanzando hacia el frente para llegar a la linea ----" << endl;
    cout << "\n------ El robot se detiene al cruzar la linea  ------" << endl;
    cout << "\n---- Los 2 motores NEO del brazo mecanico se activan hacia enfrente por 1 segundo ----" << endl;
    cout << "---- El brazo mecanico se mueve hacia arriba ----" << endl;
    cout << "\n---- Los 2 motores NEO de la articulación del brazo mecanico se activan hacia enfrente por 1 segundo ----" << endl;
    cout << "---- La articulacion de brazo mecanico se mueve hacia arriba ----" << endl;
    cout << "\n---- Los 2 motores de linea roja de la pinza se activan hacia enfrente por 1 segundo ----" << endl;
    cout << "---- La pinza se abre ----" << endl;  
    cout << "\n---- Los 4 motores NEO de brazo y los 2 de linea roja de la pinza se activan hacia atras por 1 segundo "  << endl;
    cout << "\n------ El brazo y la pinza regresan a su posicion inicial con 0 segundos de sobra ------" << endl;
    }

    if (modo == 3){
    cout << "\n---- Los 2 motores NEO de la banda izquierda se activan hacia enfrente por 3 segundos ---- " << endl;
    cout << "\n---- Los 2 motores NEO de la banda derecha se activan hacia atras al mismo tiempo que los de la izquierda ---- " << endl;
    cout << "---- El Robot dio una vuelta de 90 grados hacia la derecha en su misma posicion ----" << endl;
    cout << "\n---- Los 4 motores NEO de las bandas avanzan hacia enfrente por 7 segundos ---- " << endl;
    cout << "---- El robot esta avanzando hacia el frente para llegar a la linea ----" << endl;
    cout << "\n------ El robot se detiene al cruzar la linea ------" << endl;
    cout << "\n---- Los 2 motores NEO de la banda izquierda se activan hacia enfrente por 5 segundos ---- " << endl;
    cout << "---- Los 2 motores NEO de la banda derecha se activan hacia atras al mismo tiempo que los de la izquierda ---- " << endl;
    cout << "---- El Robot dio una vuelta de 180 grados hacia la derecha en su misma posicion ----" << endl;
    cout << "\n------ EL Robot termina volteando a la estación de carga ------ " << endl;
    }
  cout << "\n----------- FIN DEL PERIODO AUTONMO ----------- " << endl;

  // --------------------------------------------------------------------- TELEOPERADO ---------------------------------------------------------------------
  cout << "\n----------- INICIO DEL TELEOPERADO -----------" << endl;
  cout << "\n----------- INSTRUCCIONES  ETC -----------" << endl;
  string boton ;
  cout << "Presiona algun boton existente: " ;
  cin >> boton ;
  while (boton != "finalizar"){

    if (boton == "Axis_1" || boton == "Axis_5" || boton == "POV" || boton == "Button_2" || boton == "Button_1"){
      cout << "-----El boton existe -----" << endl;
    }else{
      cout << "----- El boton no existe -----" << endl;
      cout << "Por favor presiona un boton existente: " ;
      cin >> boton ;
    }


  }
  return 0;
}