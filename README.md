# SenaCppNivelIII

Para compilación multiplataforma

Usar mingw-w64 en sistemas linux para compilar ejecutables windows

    x86_64-w64-mingw32-g++-posix --static main.cpp NumeroImaginario.cpp -o Actividad4.exe



## Actividad 4
### Desarrollo de un programa que permita las operaciones matemáticas
básicas con objetos personalizados en C++


Se requiere un programa que permita realizar las 4 operaciones matemáticas básicas
(suma, resta, multiplicación y división) con números imaginarios, para esto, el aprendiz
deberá implementar una clase personalizada llamada NumeroIrracional o NumeroImaginario
la cual deberá contener dos atributos de tipo double, el primero llamado parte entera,
y el segundo parte imaginaria; también la clase deberá implementar dos constructores,
uno por defecto y uno parametrizado para iniciar las características del objeto;
sus respectivos métodos de acceso a los datos.

Luego de implementada la clase, el aprendiz deberá implementar otra clase que contenga
el método main, en donde realizara la sobrecarga de los 4 operadores básicos que le
permitirán las operaciones sobre los objetos de tipo NumeroIrracional o NumeroImaginario.
Todas las operaciones que se realicen en el método main deberán ser registradas en un
archivo de texto a manera de log.
