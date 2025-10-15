#include <iostream>
#include <string>
using namespace std;
int main() {
    string cliente1 = "", cliente2 = "", cliente3 = "";
    string productos1 = "", productos2 = "", productos3 = "";
    string fecha1 = "", fecha2 = "", fecha3 = "";
    string estado1 = "", estado2 = "", estado3 = "";
    int opcion;
    bool salir = false;
    do {
        cout << "\n===== SISTEMA DE PEDIDOS - PAPELERIA =====\n";
        cout << "1. Registrar pedido\n";
        cout << "2. Consultar pedidos\n";
        cout << "3. Buscar pedido por cliente\n";
        cout << "4. Generar reporte\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();
        switch (opcion) {
            case 1: {
                cout << "\n--- Registro de Pedido ---\n";
                if (cliente1 == "") {
                    cout << "Nombre del cliente: "; getline(cin, cliente1);
                    cout << "Productos solicitados: "; getline(cin, productos1);
                    cout << "Fecha: "; getline(cin, fecha1);
                    cout << "Estado (pendiente/entregado): "; getline(cin, estado1);
                } else if (cliente2 == "") {
                    cout << "Nombre del cliente: "; getline(cin, cliente2);
                    cout << "Productos solicitados: "; getline(cin, productos2);
                    cout << "Fecha: "; getline(cin, fecha2);
                    cout << "Estado (pendiente/entregado): "; getline(cin, estado2);
                } else if (cliente3 == "") {
                    cout << "Nombre del cliente: "; getline(cin, cliente3);
                    cout << "Productos solicitados: "; getline(cin, productos3);
                    cout << "Fecha: "; getline(cin, fecha3);
                    cout << "Estado (pendiente/entregado): "; getline(cin, estado3);
                } else {
                    cout << "Ya se registraron los 3 pedidos permitidos.\n";
                }
                break;}
            case 2: {
                cout << "\n--- Consultar Todos los Pedidos ---\n";
                if (cliente1 != "") cout << "Cliente: " << cliente1 << "\nProductos: " << productos1 << "\nFecha: " << fecha1 << "\nEstado: " << estado1 << "\n\n";
                if (cliente2 != "") cout << "Cliente: " << cliente2 << "\nProductos: " << productos2 << "\nFecha: " << fecha2 << "\nEstado: " << estado2 << "\n\n";
                if (cliente3 != "") cout << "Cliente: " << cliente3 << "\nProductos: " << productos3 << "\nFecha: " << fecha3 << "\nEstado: " << estado3 << "\n\n";
                if (cliente1 == "" && cliente2 == "" && cliente3 == "") cout << "No hay pedidos registrados.\n";
                break;}
            case 3: {
                cout << "\n--- Buscar Pedido por Cliente ---\n";
                string buscar;
                cout << "Ingrese el nombre del cliente: ";
                getline(cin, buscar);
                bool encontrado = false;
                if (cliente1 == buscar) {
                    cout << "Cliente: " << cliente1 << "\nProductos: " << productos1 << "\nFecha: " << fecha1 << "\nEstado: " << estado1 << "\n";
                    encontrado = true;
                } else if (cliente2 == buscar) {
                    cout << "Cliente: " << cliente2 << "\nProductos: " << productos2 << "\nFecha: " << fecha2 << "\nEstado: " << estado2 << "\n";
                    encontrado = true;
                } else if (cliente3 == buscar) {
                    cout << "Cliente: " << cliente3 << "\nProductos: " << productos3 << "\nFecha: " << fecha3 << "\nEstado: " << estado3 << "\n";
                    encontrado = true;}
                if (!encontrado) cout << "Cliente no encontrado.\n";
                break;}
            case 4: {
                cout << "\n--- Reporte de Pedidos ---\n";
                cout << "\n>> ENTREGADOS:\n";
                if (estado1 == "entregado") cout << " - " << cliente1 << "\n";
                if (estado2 == "entregado") cout << " - " << cliente2 << "\n";
                if (estado3 == "entregado") cout << " - " << cliente3 << "\n";
                cout << "\n>> PENDIENTES:\n";
                if (estado1 == "pendiente") cout << " - " << cliente1 << "\n";
                if (estado2 == "pendiente") cout << " - " << cliente2 << "\n";
                if (estado3 == "pendiente") cout << " - " << cliente3 << "\n";
                break;}
            case 5:
                salir = true;
                break;
            default:
                cout << "Opcion invalida.\n";}
    } while (!salir);
    cout << "\nSaliendo del sistema...\n";
    return 0;}
