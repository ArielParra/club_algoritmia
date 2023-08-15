---
marp: true
title: Entorno de desarrollo en c++
theme: default
paginate: true
---
<style scoped>h1, h2, h3 {color: #3b4252;}</style>

![bg opacity:.3](./rabithole.png)

# <!--fit--> Entorno de desarrollo en c++
## Por Ariel Parra.

---

<!-- tema -->
<style>
h1 {color: #81a1c1;}
h1 strong {color: #4c566a;}
h2 {color: #81a1c1;}
a[href]{color: #5e81ac;}
section {background: #d8dee9;text-align: justify;color: #3b4252;}
img {background-color: transparent!important;}
img[alt~="center"] {display: block;margin: 0 auto;}
table {text-align: center; margin-left: auto; margin-right: auto;} 
th { background-color: #81a1c1; color: #e5e9f0}
td { background-color: #e5e9f0;}
</style>

# . terminal

Un emulador de terminal permite al usuario acceder todas las  aplicaciones del sistema operativo con interfaces de texto, en ingles: command-line interfaces (CLI) o text user interface (TUI) applications.
En nuestro caso es donde correremos el compilador y ejecutaremos nuestros algortimos.

cmd/powershell:
powershellv7:
git bash:
windows terminal:
alacritty:
termux: es una aplicación de entorno Linux que funciona sin root para android
ish: es un emulador del sistema operativo alpine linux para dispositivos con iOS/iPadOS

---

# . Package manager

Un gestor de paquetes es una colección de herramientas de software que automatizan el proceso de instalación, actualización, configuración y eliminación de programas en una computadora.

Windows: scoop, winget.
MacOSX: homebrew.
linux: apt, pacman, etc.
ios: apk (ish).
android: pkg (termux).

---

# . compiladores 
g++: es el compilador de c++ del proyecto GNU, este es de codigo abierto y es portable, por lo que es el que usaremos en el curso.
para windows hay dos opciones recomendadas usar MIngw64 o usar g++ bajo linux con WSL.

Clang/llvm:

MSVC C++: es el compilador propietario de Microsoft echo especificamente para su IDE Vstudio, la desventaja de este esque ocupas una licencia para usarlo y esta directamente enfoqcado para Windows.

oneAPI DPC++/C++:


comparacion de velocidades:


---

# . IDEs
Integrated development environment o en español Entorno de desarrollo integrado

# codeblocks

# vscode

Es un IDE extendible desarrollado por Microsoft bajo la licencia MIT con Electron, el cual es un framework para desarrollar aplicaciones de escritorio con HTML, CSS y JavaScript por esta misma este hay una version en linea https://vscode.dev/

extensiones: C/C++, error lens, prettier, glasslt-VSC, vim.
temas:nord, catputchin
# vscodium

VSCodium es una distribución binaria hecha por la comunidad y licenciada de manera libre del editor VS Code, este surge ya que vscode aunque tenga un codigo fuente publico, los binarios que distribuyen tienen telemetria activada por defecto.
la diferencia principal con vscode es la tienda [open-vsx](https://open-vsx.org/) en lugar de la de [microsoft](https://marketplace.visualstudio.com/VSCode)  y la remote window. 

extensiones: las mismas que vscode exceptuando el compilador aqui recomiendo codeLLDB yclangd.

---

# git y github

ssh

---

# busquedas en internet

paginas de documentacion de c++
[libretranslate](https://libretranslate.com/?)

---

# Referencias

https://stackoverflow.com/questions/771756/what-is-the-difference-between-cygwin-and-mingw/771774#771774

https://en.wikipedia.org/wiki/Integrated_development_environment

https://vscodium.com

https://code.visualstudio.com/docs/cpp/config-mingw

https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent?platform=windows

https://wiki.termux.com/wiki/Main_Page
https://en.wikipedia.org/wiki/Terminal_emulator
https://en.wikipedia.org/wiki/Visual_Studio_Code
https://en.wikipedia.org/wiki/Package_manager