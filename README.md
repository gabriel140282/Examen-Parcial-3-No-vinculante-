# EXAMEN PARCIAL 3:  Gabriel Kaakedjian y Juan Ignacio González

https://github.com/gabriel140282/Examen-Parcial-3-No-vinculante-.git

# ENUNCIADO EJERCICIOS

## Condiciones de Entrega del Examen de Programación en C++

Estimado estudiante,

Para garantizar una correcta evaluación de tus habilidades y entendimiento en la programación en C++, hemos establecido un conjunto de condiciones que deberás seguir al momento de entregar tus respuestas al examen. La estructura y presentación de tu entrega son esenciales para facilitar el proceso de corrección y asegurarnos de que hemos evaluado todos tus esfuerzos de manera justa.

## Instrucciones para la entrega:

**1.Repositorio en GitHub:**

Todo tu trabajo debe estar contenido en un repositorio en GitHub.
Asegúrate de que el repositorio sea privado al inicio, y podrás hacerlo público después de que finalice el período de revisión del examen (si así lo deseas).

**2.Fichero ZIP:**

Una vez hayas terminado de resolver el examen, crea un archivo ZIP de todo el repositorio.
El nombre del archivo ZIP debe seguir el formato: Apellido_Nombre_ExamenCPP.zip (reemplaza Apellido y Nombre con tu apellido y nombre respectivamente).

**3.Fichero README.md:**

Dentro de tu repositorio, debes incluir un archivo README.md.
Este archivo debe contener:
El link directo a tu repositorio de GitHub.
Una descripción breve de cada uno de los ejercicios resueltos, con referencias a los archivos o carpetas específicos donde se puede encontrar cada solución.
El uso adecuado de Markdown en tu README.md para estructurar y formatear el contenido será valorado positivamente.

**4.Envío:**

Entrega el archivo ZIP a través de la plataforma o método que se te indique (por ejemplo, un sistema de gestión de aprendizaje, correo electrónico, etc.).
Asegúrate de enviar tu trabajo antes de la fecha y hora límite. Las entregas fuera de plazo pueden no ser evaluadas o incurrir en penalizaciones.

**5.Otros aspectos a considerar:**

Asegúrate de que tu código esté bien comentado, organizado y que sea fácil de leer y entender.
Si utilizas alguna referencia externa para resolver algún ejercicio, es esencial que lo cites en tu README.md.
Siguiendo estas condiciones y presentando tu trabajo de manera organizada, nos ayudarás a llevar a cabo un proceso de revisión más eficiente. Deseamos que demuestres todo tu conocimiento y habilidades en este examen. ¡Buena suerte!





## Parte 1: Preguntas de elección múltiple (20%)

***¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?***

a) C utiliza cout y cin mientras que C++ utiliza printf y scanf.

b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.

c) No hay ninguna diferencia.

d) C++ utiliza printf y scanf mientras que C utiliza std::cout y std::cin.

***¿Qué es un espacio de nombres en C++?***

a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.

b) Una manera de definir variables.

c) Una función de la biblioteca estándar.

d) Un tipo de ciclo en C++.

***En programación orientada a objetos en C++, ¿qué es una clase?***

a) Una agrupación de funciones.

b) Un tipo de variable.

c) Un tipo de dato primitivo.

d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

***¿Qué son los templates en C++?***

a) Un tipo especial de clase.

b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.

c) Una forma de definir variables.

d) Una característica específica de C.

## Parte 2: Pregunta de desarrollo de código (80%)


En el marco de la globalización y la creciente tendencia de intercambio académico, las universidades internacionales están experimentando un auge en la diversidad de su población estudiantil. Estos estudiantes provienen de diferentes partes del mundo, con culturas, idiomas y antecedentes educativos distintos. Con tal diversidad, la administración académica enfrenta el desafío de gestionar de manera eficiente y personalizada la información de cada estudiante.

El "Centro Global de Estudios Avanzados" (CGEA) es una de esas universidades internacionales que ha decidido abordar este desafío. Con campus en cinco continentes y una comunidad estudiantil de más de 40,000 alumnos, el CGEA ha identificado la necesidad de modernizar su sistema de gestión académica para ofrecer un mejor servicio a sus estudiantes y, al mismo tiempo, optimizar sus procesos internos.

Para ello, han contratado a una firma de desarrollo de software especializada en soluciones educativas. La primera fase del proyecto consiste en evaluar y decidir qué lenguaje de programación es el más adecuado para implementar el nuevo sistema. Dado que el equipo de desarrollo tiene experiencia tanto en C como en C++, han decidido realizar una comparativa entre ambos lenguajes utilizando una estructura básica: la información del estudiante.

**Instrucciones para la Pregunta de Desarrollo de Código:**



**Rúbrica**

(30%) Implementación de la estructura Estudiante:

La estructura Estudiante está correctamente implementada tanto en C como en C++.
(20%) Implementación de la función mostrarEstudiante():

La función mostrarEstudiante() está correctamente implementada y muestra correctamente todos los campos de una instancia de Estudiante.
(30%) Comparación entre las dos implementaciones:

Se proporciona una comparación clara y correcta entre las implementaciones de C y C++.
(20%) Calidad del código:

Todo el código está bien comentado, bien organizado, sigue buenas prácticas de programación y se compila sin errores ni advertencias en CLion.

**Importante:**

Todos los códigos deben ser originales. Se utilizarán herramientas de detección de plagio para verificar la originalidad del código.
El código debe estar bien documentado y organizado.
Se debe incluir un archivo README con instrucciones sobre cómo compilar y ejecutar el programa.
El código debe compilarse sin errores ni advertencias en CLion.

**Estructura del Estudiante:**

1. C++:

Implementa una estructura llamada Estudiante con los campos: nombre, edad, y promedio.
Desarrolla la función mostrarEstudiante() que muestre todos los campos de la estructura.

2. C:

Realiza una implementación equivalente en el lenguaje C.
Comparativa:

Discute las diferencias clave entre las dos implementaciones.

**Gestión de Materias:**

Dado que cada estudiante tiene un conjunto de materias, expande tu implementación para incluir la gestión de las mismas.

1. C++:

Añade a la estructura Estudiante una lista o vector de materias en las que está inscrito.
Implementa funciones para agregar, eliminar y mostrar estas materias.

2. C:

Realiza una implementación equivalente en el lenguaje C.

**Registro de Asistencia:**

Es vital para la universidad llevar un control de la asistencia de sus estudiantes.

1. C++:

Diseña una clase o estructura Asistencia que contenga: fecha, materia y estado (asistió, falta, tardanza).
Integra esta estructura con Estudiante y desarrolla funciones para registrar y mostrar la asistencia.

2. C:

Realiza una implementación equivalente en el lenguaje C.

**Manejo de Excepciones:**

El sistema debe ser capaz de manejar situaciones inesperadas, como errores en el formato de la fecha, materias no registradas, etc.

1. C++:

Implementa excepciones personalizadas para manejar estos escenarios.
Demuestra su uso con bloques try, catch.

2. C:

Aunque C no tiene un sistema integrado de manejo de excepciones como C++, discute cómo podrías manejar errores y situaciones inesperadas en este lenguaje.
Conclusión:

Con base en tu experiencia y las implementaciones desarrolladas:

¿Cuál de los dos lenguajes consideras más adecuado para el proyecto del CGEA?

¿Qué recomendaciones harías al equipo de desarrollo del CGEA para la siguiente fase del proyecto?

# Parte 1: Preguntas de elección múltiple (20%)
1. ¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?

**b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.**

2. ¿Qué es un espacio de nombres en C++?

**c) Una función de la biblioteca estándar.**

3. En programación orientada a objetos en C++, ¿qué es una clase?

**d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).**

4. ¿Qué son los templates en C++?

**b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.**

# Preguntas Conclusión

¿Cuál de los dos lenguajes consideras más adecuado para el proyecto del CGEA?

**Ya que el proyecto del CGEA cuenta con estructuras complejas como Estudiantes, materias, asistencia y manejo de errores consideramos que es más adecuado el uso de C++ debido a su soporte para orientación a objetos, manejo de excepciones, y herramientas modernas para trabajar con estructuras complejas y listas dinámicas como arrays y el uso de memoria automatizada. Además, C++, presenta un código más limpio y claro que C, evitando de esta forma posibles errores.**

¿Qué recomendaciones harías al equipo de desarrollo del CGEA para la siguiente fase del proyecto?

Nosotros recomendaríamos al equipo de desarrollo del CGEA que para la siguiente fase del proyecto se centrarán en:

***Crear un Diseño modular y escalable:*** Implementar un diseño basado en módulos para separar la gestión de estudiantes, materias y asistencia. Usar un patrón de diseño como Modelo-Vista-Controlador (MVC) para mantener la lógica del sistema organizada y adaptable a futuras ampliaciones.

***Implementación de seguridad y validación de datos:*** Asegurarte de validar todos los datos de entrada (nombres, fechas, materias) y manejar los errores mediante excepciones (en C+ +) o códigos de error claros (en C) (personalmente recomendamos C++). Implementar prácticas de seguridad como encriptación para proteger la información personal de los estudiantes. 

***Pruebas automatizadas y monitoreo de desempeño:*** Integrar herramientas de pruebas continuas para garantizar la funcionalidad y estabilidad de cada módulo. Usar herramientas como Valgrind o AddressSanitizer para detectar fugas de memoria y optimizar el rendimiento.

***Gestión centralizada de bases de datos:*** Diseñar una base de datos relacional bien estructurada (por ejemplo, usando MySQL o PostgreSQL) para manejar las relaciones entre estudiantes, materias y asistencia. Considerar un ORM (Object-Relational Mapping) en caso de usar C++ para simplificar el manejo de datos.

***Documentación clara y colaboración eficiente:*** Mantener una documentación técnica actualizada que incluya diagramas de arquitectura, estructuras de datos y guías para los
desarrolladores. Recomendamos el uso de herramientas de colaboración como Git/Github para hacer que la colaboración sea aún más eficiente.
