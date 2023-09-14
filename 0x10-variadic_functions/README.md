Variadic Functions

Library: stdarg.h
Initializing a list: va_list args => where args is the name of the initialized list
starting to instert the arguments into the list: va_start(va_list_name[args], first_argument_count)
getting the arguments: va_arg(va_list_name, type_i.e_int)
Reallocating the memory: va_end(va_list_name)
