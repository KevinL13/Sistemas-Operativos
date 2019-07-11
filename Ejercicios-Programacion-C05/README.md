1. [pregunta1.c](pregunta1.c)
La variable x entra en el proceso hijo con el valor de 100 tal y como fue declarada antes, y en caso de que tanto el proceso padre como el proceso hijo vayan a modificar la x , ambos modificaran el valor de 100.

2. [pregunta2.c](pregunta2.c)
Tanto el proceso padre como el proceso hijo  pueden acceder al archivo y si ambos escriben en el archivo al mismo tiempo puede quedar intercalado lo que escriban ambos. 

3. [pregunta3.c](pregunta3.c)
Sí, se puede hacer que el proceso hijo escriba primero que el proceso padre poniendo un sleep() en el proceso padre.

4. [pregunta4.c](pregunta4.c)
Hay varias variantes para ser usadas dependiendo de  los datos

5. [pregunta5.c](pregunta5.c)
wait() retorna el id del proceso hijo que termino , en caso de ponerlo en el proceso hijo este renornaria -1 porque no hay proceso hijo del proceso hijo.

6. [pregunta6.c](pregunta6.c)
waitpid() es util cuando se quiere esperar por un proceso hijo en especifico. 

7. [pregunta7.c](pregunta7.c)
Si despues de que el hijo cierra el standar output trata de imprimir algo en pantalla este no aparecera. 
