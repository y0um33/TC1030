# Programación orientada a objetos (TC1030.301)
| Name | Matrícula |
| :---: | :---:|
| Yumee Chung | A01712059 |

# Contexto
Es un supermercado que trata de mostrar el descuento de sus productos, por lo que genera una estructura de clases para poder manejar las categorías de productos: Fruta, Vegetal y Jugo. La interfaz de usuario cambia dependiendo de si el usuario es un cliente o miembro del personal del supermercado. Si el usuario entra como cliente, solo podrá ver la lista de productos. Pero, si el usuario entra como miembro del personal del supermercado, necesitará ingresar el PIN del personal y después podrá ver la lista de productos y agregar nuevos productos.

# Funcionalidad
Un staff del mercado puede:
- Ver la lista de productos
- Agregar nuevos productos

Un cliente del mercado puede:
- Ver la lista de productos

Al inicio va despejar un menu con opciones iniciales para determinar si es un cliente o staff.

# Casos que va dejar de funcionar
- No poner ningún signo(+, -, etc.) en el input del precio o otros inputs numéricos
- La máxima capacidad de productos que tiene el supermercado es 1000, entonces no puede agregar más de 1000

# Consideraciones
- La contraseña para staff es "8956"
- El código está hecho con C++ estándar entonces se compila sin importar mac o window.

# Correciones
- Modificar y corregir la diagrama UML para representar la relación con el contexto
- Modificar el README para informar los casos que hara fallar la programación
