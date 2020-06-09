# SenaCppNivelIII


Para compilación multiplataforma

Usar mingw-w64 en sistemas linux para compilar ejecutables windows

    x86_64-w64-mingw32-g++-posix --static main.cpp Venta.cpp -o actividad3.exe



## Actividad 3
### Arreglos con objetos

Se requiere una aplicación que permita calcular el promedio de ventas de los primeros 4
meses del año, de un listado de vendedores. El sistema debe recibir inicialmente la
cantidad de vendedores, y después preguntar por cada vendedor, el nombre, y el valor de
las ventas realizadas en los meses 1, 2, 3 y 4.

Vendedor  |  Mes 1     |  Mes 2     |   Mes 3     |  Mes 4
______________________________________________________________
Mauricio  |  $1950000  |  $1900000  |   $1374000  |  $1208300
______________________________________________________________
Oscar     |  $5343212  |  $1032212  |   $1232399  |  $1235222
______________________________________________________________
Francisco |  $5375554  |  $9567787  |   $5553221  |  $1230312
______________________________________________________________


Al finalizar de digitar todos los vendedores, el sistema debe arrojar un informe por
vendedor, el promedio de los 4 meses. También debe arrojar el promedio de todos los
vendedores.


Recuerde que en un arreglo no se pueden tener diferentes tipos de datos. En este caso
requerirá por lo menos dos arreglos:
    Uno para almacenar los nombres
    y otro para almacenar las ventas mensuales de cada vendedor.
