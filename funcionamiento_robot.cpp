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
    cout << "---------- Este es el preiodo autonomo ----------" << endl;
    cout << "Accion 1 - Girar 90 grados a la derecha y avanzar a la mitad de cancha" << endl;
    cout << "Accion 2 - Mover el brazo mecánico arriba y abjo tres veces" << endl;
    cout << "Accion 3 - Posicionar robot en frente de las ruedas" << endl;
    cout << "Selecciona una de estas tres acciones digitando 1, 2 o 3: " ;
    cin >> modo ;
    while (modo > 3 || modo < 1){
      cout << "Por favor selecciona una accion definida: " ;  
      cin >> modo;
    }

    if (modo == 1){
    //Indicar al usiario aue realizara el robot y cuanto tiempo tardara (lo hago mañana)
    }

    if (modo == 2){
    //Indicar al usiario aue realizara el robot y cuanto tiempo tardara (lo hago mañana)    
    }

    if (modo == 3){
    //Indicar al usiario aue realizara el robot y cuanto tiempo tardara (lo hago mañana)    
    }
    return 0;


}