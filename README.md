# tl1-tp1-2024-paulaNerea

# Archivo .gitignore 📝​
_Omitir archivos o carpetas que no necesitamos en un repositorio es clave para el correcto funcionamiento del mismo, esto podemos hacerlo creando un archivo .gitignore._

## ¿Qué es?

Un archivo  **.gitignore** es un archivo de texto que le dice a Git qué otros archivos y carpetas de un proyecto debe ignorar. Cada línea en este archivo, especifica una un patrón a omitir. 

## ¿Cómo agregarlo a tu repo?

Para crear un archivo ```.gitignore``` en el directorio raiz de un proyecto, crea un archivo de texto y llámalo ```.gitignore``` (no olvides el ```.``` al principio). Después de esto podrás editarlo para ignorar archivos según lo necesites.

### ¿Cómo configurar tu archivo .gitignore?

Las entradas en este archivo pueden seguir un modelo similar. Se utilizan los siguientes caracteres bases para su configuración: 

- ```*``` se usa para encontrar coincidencias. Es un "comodín". Podemos usarlo como una “propiedad” dentro de las omisiones. Por ejemplo, si queremos omitir todos los archivos tipo texto dentro del programa: 

```
*.txt
```

- ```/``` se usa para ignorar las rutas relativas al archivo ```.gitignore```. Con este catacter, especificas una ruta dentro del programa para omitir. Puede ser una carpeta o archivos específicos. Por ejemplo: 

```
/temp
```

- ```#``` se usa para añadir comentarios al archivo ```.gitignore```.

## Autor ✒️

- Leal Villanueva Paula Nerea



