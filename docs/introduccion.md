# Storylines By

## Objetivo
Generar historias alternativas con la selección o creación de personajes, eventos y una "ruleta aleatoria".

## Requerimientos

Capacidades a proporcionar en base a las necesidades de los usuarios.

- Distinguir entidades <u>personajes</u> y <u>eventos</u>.
- Poder incluir entidades eficientemente, a través de guardar y cargar desde fichero.
- Ruleta o algoritmo aleatorio para toma de decisiones.
- Respetar el menú con opciones
    1.  Generar historia
        - Con selección u opciones
        - Aleatorio
    2.  Personajes
        - Crear personaje
        - Listar personajes
        - Cargar personajes
        - Guardar personajes
        - Atrás (regresa al menú superior)
    3.  Eventos
        - Crear evento
        - Listar eventos
        - Ordenar evento
        - Guardar eventos
        - Atrás (regresa al menú superior)
    4. Idioma (language)
    0. Salir (finaliza el programa)

> **Generar historia**
 > Supone ir por cada evento, contar una descripción de lo que está ocurriendo y dar una serie de opciones dónde el usuario interactúe.

> **Personajes y Eventos**
 > Formulario de creación de Personaje y Evento, listado, guardar y cargar a fichero.

> **Idioma**
 > Cambiar idioma del aplicativo.

### Restricciones

Restricciones que "*Storylines By*" debe respetar:

- Lenguaje de alto nivel C++.
- Terminal o línea de comandos.
- Seguridad y eficiencia sobre memoria.


### Más información

Sistema operativo: Linux.
Herramientas: VS Code, GCC v14, C++ 23, Git.
Backup: [Github](https://github.com/ddnovan/storylines-by).
Registro/planificación: Github Projects.


## Contenido:

### Creación de **Personajes** y **Eventos**:

Opción de crear personajes con diferentes atributos (nombre, grupo, habilidades, historia personal, etc.).

Opción de crear eventos que puedan influir en la historia (por ejemplo, "visitar un sitio", "enfermedad", "reencuentro con un viejo amigo", etc.).

### Generador Aleatorio:

Puedes usar una "ruleta" o generador aleatorio para combinar personajes y eventos. Así, cada vez que se ejecute el programa, se genera una historia única (puede usarse probabilidad)

### Opciones Personalizadas:

Los usuarios pueden elegir entre diferentes tipos de géneros o temáticas (por ejemplo: supervivencia, drama, acción).

La historia puede ser interactiva, permitiendo que los usuarios tomen decisiones en momentos clave, lo que afectaría el curso de la trama.

## **...**