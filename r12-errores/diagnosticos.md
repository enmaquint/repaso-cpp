1) p1.cpp:9:7: error: expected initializer before 'origen'

   Compilador, Sintaxis
   falta un ';' al final de una declaracion anterior
   después de la llave que cierra una clase, arriba de la línea 9
   Poner el ; en la linea 9

2) /usr/bin/ld: undefined reference to `Cuenta::depositar(double)'

   Enlazador
    Probablemente el archivo no tiene un .cpp o si lo tiene pero
    no lo reconoce porque está mal escrito o algo asi, revisar si si está el cpp
    y asegurarse que si se manda a llamar correctamente

3) p3.cpp:6:24: error: cannot convert 'std::string' to 'int'

   Compilador, tipos
   se esta llamando a una funcion que espera un int
   pasandole un std::string, sin conversion valida entre ambos.
   Revisar el tipo del argumento en la linea 6

4) p4.cpp:3:10: error: 'vector' is not a member of 'std'

   Compilador, nombre no declarado
   Probablemente se declaró "Vector" sin haber llamado al #include Vector
   Solo con ponerlo hasta arriba se resuelve el problema

5) /usr/bin/ld: multiple definition of `doble(int)'

   Enlazador
    funcion doble(int) esta definida en dos o mas .cpp distintos
    se resueleve declarando doble(int) solo en el .h y mover el cuerpo en un .cpp
