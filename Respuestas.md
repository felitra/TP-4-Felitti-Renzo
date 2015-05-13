Respuestas

1. For es una única sentencia, la misma asigna a las variables nl y nc el valor cero, luego toma el ingreso desde la entrada estandar de una secuencia de carácteres, y ejecuta una secuencia de pasos, si y solo si dicha secuencia ingresada es distinta a EOF (end of file). 
La "," (coma), es un operador, implica un orden en la evaluación de condiciones. Es decir primero la sentencia situada a la izquierda y luego la situada a la derecha. Existe otra expresion equivalente, la misma sería nl=nc=0 (Asociatividad).

2. Los parentesis son necesarios, ya que establece un orden de evaluación, en nuestro caso primero se ingresa una cadena de texto, y luego se evalua la misma con EOF. Si no tuvieramos los parentesis evaluaria getchar() distinto a EOF, y el resultado lo almacenaria en la variable c.

3. If: Pragmática: evalúa si terminó la repetición con error o no. Semántica: verifica que feof(stdin) sea distinto de 0, de ser asi, invoca a la función Perror.

4. Función Perror: establece como salida estandar un error, es decir, establece que el programa dejo de ejecutarse por un error. Esto puede suceder por varias razones: si la cadena no es un puntero nulo y el carácter apuntado por cadena no es el carácter nulo, la cadena apuntada por cadena seguido de dos puntos (:) y un espacio.

5. !feof(stdin) = ferror(stdin).

Semántica: *feof(stdin): retorna un valor distinto de 0(true) si el flujo termina en EOF, *ferror(stdin): retorna un valor distinto de 0(true) si un error se produjo en el flujo. Estas funciones, no son mutualmente excluyentes, ya que un flujo puede tener 3 estados, estado erróneo, estado de lectura y estado de fin. En nuestro programa, si la expresión !ferror(stdin) es verdadera, se invoca la función perror.

6. El formato %.1f, expresa un operador de casteo, esto implica un cambio del formato en una expresión. Se muestra por la salida que se utilice un número de tipo de dato punto flotante con un mínimo de 1 caracter.

7. Se aplica un casteo con el fin de obtener una mayor precisión como resultado final (promedio).

10. No, ya que este programa no considera la opción vacio, ya que no se puede dividir por cero (0).

11. No, no es precisa, ya que cuenta los carácteres enter "\n".

12. Reemplazar lo que ejecuta if por: if (c=="\n") ++nl; else ++nc; y además se debería establecer un condicional, para contemplar el caso del vacio (0).
