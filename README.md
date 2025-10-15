# 📘 Parcial 2 - Sistema de Pedidos para Papelería

## 🧩 Descripción General
El presente programa fue desarrollado en **C++** con el objetivo de gestionar los pedidos realizados por los clientes de una papelería local. 
El sistema permite registrar maximo tres pedidos y consultar su información sin utilizar estructuras de datos compuestas como arreglos o listas.

---

## ⚙️ Funcionalidades Principales

1. **Registrar pedido:**  
   Permite ingresar los datos de un nuevo pedido:  
   - Nombre del cliente  
   - Productos solicitados  
   - Fecha del pedido  
   - Estado (pendiente o entregado)

2. **Consultar pedidos:**  
   Muestra en pantalla todos los pedidos registrados con su respectiva información.

3. **Buscar pedido por cliente:**  
   Solicita el nombre del cliente y muestra el pedido correspondiente si existe.

4. **Generar reporte:**  
   Separa los pedidos en dos categorías:
   - Pedidos **entregados**  
   - Pedidos **pendientes**

5. **Salir:**  
   Finaliza la ejecución del programa.

---

## 🧠 Explicación del Desarrollo

El programa utiliza tres grupos de variables (`cliente1`, `cliente2`, `cliente3`, etc.) para guardar los datos de cada pedido.  
Se usa un menú con opciones dentro de un bucle `do-while`, y la selección se maneja con un `switch`.

Cada opción del menú ejecuta una parte del código:
- La opción 1 registra los pedidos (hasta 3).
- La opción 2 muestra todos los pedidos guardados.
- La opción 3 busca un cliente específico.
- La opción 4 genera el reporte de entregados y pendientes.