Respuestas

1. For es una �nica sentencia, la misma asigna a las variables nl y nc el valor cero, luego toma el ingreso desde la entrada estandar de una secuencia de car�cteres, y ejecuta una secuencia de pasos, si y solo si dicha secuencia ingresada es distinta a EOF (end of file). 
La "," (coma), es un operador, implica un orden en la evaluaci�n de condiciones. Es decir primero la sentencia situada a la izquierda y luego la situada a la derecha. Existe otra expresion equivalente, la misma ser�a nl=nc=0 (Asociatividad).

2. Los parentesis son necesarios, ya que establece un orden de evaluaci�n, en nuestro caso primero se ingresa una cadena de texto, y luego se evalua la misma con EOF. Si no tuvieramos los parentesis evaluaria getchar() distinto a EOF, y el resultado lo almacenaria en la variable c.

3. If: Pragm�tica: eval�a si termin� la repetici�n con error o no. Sem�ntica: verifica que feof(stdin) sea distinto de 0, de ser asi, invoca a la funci�n Perror.

4. Funci�n Perror: establece como salida estandar un error, es decir, establece que el programa dejo de ejecutarse por un error. Esto puede suceder por varias razones: si la cadena no es un puntero nulo y el car�cter apuntado por cadena no es el car�cter nulo, la cadena apuntada por cadena seguido de dos puntos (:) y un espacio.

5. !feof(stdin) = ferror(stdin).

Sem�ntica: *feof(stdin): retorna un valor distinto de 0(true) si el flujo termina en EOF, *ferror(stdin): retorna un valor distinto de 0(true) si un error se produjo en el flujo. Estas funciones, no son mutualmente excluyentes, ya que un flujo puede tener 3 estados, estado err�neo, estado de lectura y estado de fin. En nuestro programa, si la expresi�n !ferror(stdin) es verdadera, se invoca la funci�n perror.

6. El formato %.1f, expresa un operador de casteo, esto implica un cambio del formato en una expresi�n. Se muestra por la salida que se utilice un n�mero de tipo de dato punto flotante con un m�nimo de 1 caracter.

7. Se aplica un casteo con el fin de obtener una mayor precisi�n como resultado final (promedio).

10. No, ya que este programa no considera la opci�n vacio, ya que no se puede dividir por cero (0).

11. No, no es precisa, ya que cuenta los car�cteres enter "\n".

12. Reemplazar lo que ejecuta if por: if (c=="\n") ++nl; else ++nc; y adem�s se deber�a establecer un condicional, para contemplar el caso del vacio (0).
