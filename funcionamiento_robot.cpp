/*
--- ANGELES ARRIAGA ESTEBAN --- BULUK
---------- Código del Robot ----------
Este código es una simulación del controlamiento de un robot de BULUK
ya que este se ejecutara solamente en la terminal para simular acciones
y reaacciones del robot.
*/

#include <iostream>
#include <vector>
using namespace std;


int POV (){
  int direccion ;
  int tiempo ;
  int distancia ;
  cout << "\n---- 'POV' controla el movimiento general del robot por lo que hay 4 posibles direcciones (Cada una asociada a un numero) ----" << endl;
  cout << "- Adelante = 0\n- Atras = 180\n- Giro Derecha = 90\n- Giro Izquierda = 270" << endl;
  cout << "---- En caso de no digitar una direccion valida, el programa no funcionara ----" << endl;
  cout << "\nIngresa la direccion digitando el numero al que esta asociado:  " ;
  cin >> direccion ;
  cout << "\nIngresa los segundos que durara la accion: " ;
  cin >> tiempo ;
  distancia = tiempo * 10 ;
  if (direccion == 0){
    cout << "\n---- Los 4 motores NEO de las bandas avanzan hacia enfrente por " << tiempo << " segundos ----" << endl;
    cout << "---- El robot se desplaza hacia enfrente " << distancia << " centimetros ----" << endl;
  } 
  if (direccion == 180){
    cout << "\n---- Los 4 motores NEO de las bandas avanzan hacia atras por " << tiempo << " segundos ----" << endl;
    cout << "---- El robot se desplaza hacia atras " << distancia << " centimetros ----" << endl;    
  }
  if (direccion == 90){
    cout << "\n---- Los 2 motores NEO de la banda izquierda avanzan hacia adelante por " << tiempo << " segundos ----" << endl;
    cout << "---- Los 2 motores NEO de la banda derecha avanzan hacia atras al mismo tiempo que los de la izquierda ---- " << endl;
    cout << "---- El robot gira sobre su propio eje hacia la derecha ----" << endl;
  }
  if (direccion == 270){
    cout << "\n---- Los 2 motores NEO de la banda derecha avanzan hacia adelante por " << tiempo << " segundos ----" << endl;
    cout << "---- Los 2 motores NEO de la banda izquierda avanzan hacia atras al mismo tiempo que los de la derecha ---- " << endl;
    cout << "---- El robot gira sobre su propio eje hacia la izquierda ----" << endl;
  }
  return 0;
}

int Axis_1 (){
  int mov ;
  int tiempo ;
  cout << "\n---- 'Axis_1' controla el movimiento del brazo mecanico por lo que hay 2 posibles movimientos (Cada una asociada a un numero) ----" << endl;
  cout << "- Arriba = -1\n- Abajo = 1" << endl;
  cout << "---- En caso de no digitar una movimiento valido, el programa no funcionara ----" << endl;
  cout << "\nIngresa el movimiento, digitando el numero al que esta asociado:  " ;
  cin >> mov ;
  cout << "\nIngresa los segundos que durara la accion: " ;
  cin >> tiempo ;
  if (mov == -1){
  cout << "\n---- Los 2 motores NEO del brazo mecanico se mueven hacia atras por " << tiempo << " segundos ----" << endl; // Esto es debido al sistema de engranajes y basndas del robot
  cout << "---- El brazo mecanico se mueve hacia arriba ----" << endl;
  }
  if (mov == 1){
  cout << "\n---- Los 2 motores NEO del brazo mecanico se mueven hacia adelante por " << tiempo << " segundos ----" << endl; // Esto es debido al sistema de engranajes y basndas del robot
  cout << "---- El brazo mecanico se mueve hacia abajo ----" << endl;
  }
  return 0;
}

int Axis_5 (){
  int mov ;
  int tiempo ;
  cout << "\n---- 'Axis_5' controla la articulacion media del brazo mecanico por lo que hay 2 posibles movimientos (Cada una asociada a un numero) ----" << endl;
  cout << "- Arriba = -1\n- Abajo = 1" << endl;
  cout << "---- En caso de no digitar una movimiento valido, el programa no funcionara ----" << endl;
  cout << "\nIngresa el movimiento, digitando el numero al que esta asociado:  " ;
  cin >> mov ;
  cout << "\nIngresa los segundos que durara la accion: " ;
  cin >> tiempo ;
  if (mov == -1){
  cout << "\n---- Los 2 motores NEO de la articulacion del brazo mecanico se mueven hacia atras por " << tiempo << " segundos ----" << endl;
  cout << "---- El brazo mecanico se mueve hacia arriba ----" << endl;
  }
  if (mov == 1){
  cout << "\n---- Los 2 motores NEO del brazo mecanico se mueven hacia enfrente por " << tiempo << " segundos ----" << endl;
  cout << "---- El brazo mecanico se mueve hacia abajo ----" << endl;
  return 0;
  }
}

int main (){
    int modo = 0;
    cout << "-------------------------------------- INICIO DEL PERIODO AUTONOMO --------------------------------------" << endl;
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
    cout << "\n---- Los 2 motores NEO del brazo mecanico se activan hacia atras por 1 segundo ----" << endl;
    cout << "---- El brazo mecanico se mueve hacia arriba ----" << endl;
    cout << "\n---- Los 2 motores NEO de la articulación del brazo mecanico se activan hacia atras por 1 segundo ----" << endl;
    cout << "---- La articulacion de brazo mecanico se mueve hacia arriba ----" << endl;
    cout << "\n---- Los 2 motores de linea roja de la pinza se activan hacia enfrente por 1 segundo ----" << endl;
    cout << "---- La pinza se abre ----" << endl;  
    cout << "\n---- Los 4 motores NEO de brazo activan hacia enfrente y los 2 motores de linea roja de la pinza se activan hacia atras por 1 segundo "  << endl;
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
    cout << "\n------ EL Robot termina volteando a la estaciOn de carga ------ " << endl;
    }
  cout << "-------------------------------------- FIN DEL PERIODO AUTONOMO -------------------------------------- " << endl;
  // --------------------------------------------------------------------- AUTONOMO ---------------------------------------------------------------------

  // --------------------------------------------------------------------- TELEOPERADO ---------------------------------------------------------------------
  cout << "\n-------------------------------------- INICIO DEL TELEOPERADO --------------------------------------" << endl;
  cout << "--- En el teleoperado el usuario debera de digitar un boton cada que se desee hacer una accion. A continuacion, los botones existentes ---" << endl;
  cout << "\n- POV - Controla el desplazamiento general del robot\n- Axis_1 - Controla el movimiento del brazo mecanico\n- Axis_5 - Controla la articulacion del brazo mecanico\n- Button_2 - Abre la pinza\n- Button_1 - Cierra la pinza" << endl;
  string boton ;
  cout << "\nDigita algun boton existente: " ;
  cin >> boton ;
  while (boton != "finalizar"){

    if (boton == "POV" || boton == "Axis_5" || boton == "Axis_1" || boton == "Button_2" || boton == "Button_1")
    {
      cout << "\n-----El boton existe -----" << endl;
      
      if (boton == "POV"){
        cout << POV () ;
      }

      if (boton == "Axis_5"){
        cout << Axis_5 () ;
      }

      if (boton == "Axis_1"){
        cout << Axis_1 () ;
      }

      if (boton == "Button_2"){
        cout << "Acciones boton Button_2" << endl ;
      }
      
      if (boton == "Button_1"){
        cout << "Acciones boton Button_1" << endl ;
      }

      cout << "\nDigita el siguiente boton existente o digita 'finalizar' para terminar el programa: " ;
      cin >> boton ;
    }else{
      cout << "----- El boton no existe -----" << endl;
       cout << "- POV - Controla el desplazamiento general del robot\n- Axis_1 - Controla el movimiento del brazo mecanico\n- Axis_5 - Controla la articulacion del brazo mecanico\n- Button_2 - Abre la pinza\n- Button_1 - Cierra la pinza" << endl;
      cout << "Por favor digita un boton existente: " ;
      cin >> boton ;
    }
  }
  return 0;
}