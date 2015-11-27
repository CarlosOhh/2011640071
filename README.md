# 2011640071
Repositorio para SOTR.

En este repositorio se subiran los archivos que serán entregados para la materia de Sistemas Operativos en Tiempo Real.


Las tareas a entregar son:


1. Evidencia 0 - Significado de extensiones y como importar conio.h con directivas
2. El programa debera imprimir Lunes, Martes, Miercoles, etc. segun 
el dia que corresponda a la fecha. La funcion debe funcionar bien 
para cualquier fecha de este mes (En el semestre actual, 
agosto-diciembre de 2015, Septiembre del anio 2015).


En la carpeta de exámen se encuentran los archivos para ejecutar una función en lenguaje C a partir de ensamblador. Tres datos numericos son enviados, y posteriormente se calcula su promedio. No se utilizó una variable global, en su lugar se hizo uso de la dirección de un apuntador. El valor del resultado se regreso para que este fuera visto en el registro HEX.

Para ejecutar el programa clone la carpeta Examen, acceda a ella y ejecute

sudo run

Posteriormente, teclee la letra "c" en el shell para que el programa continue.

"c"

Una vez que el programa se ejecuto, cierre la ventana apague la maquina virtual generada presionando el botón de Power.

Finalmente teclee

cat bochslog.txt

Y busque que en la direccion EAX este el valor del promedio de los tres numeros descritos en el archivo loader.s

push dword 0X00000004                           ; arg3
push dword 0X0000000B                           ; arg2
push dword 0X00000003                           ; arg1
