
# string_type

## Adds String type to C programs

### Disclaimer

This is not intended to be used in an enterprise setting or really in any project. There are no guarantees on memory safety nor security. This is a work-in-progress and things are subject to change. USE AT OWN RISK!

### Usage

The entire project is just a header and C file. You can download them, add them to your project, and just compile.

### API quick reference

`create_string();` - Creates an empty string

`delete_string(String);` - Deallocates string

`print_string(String);` - Prints `String` to `stdout`

`create_from_static(char*)` - Creates `String` from `char*`

`resize(String, int)` - Resizes `String` to a new length

`concat(String, String)` - Concatenates two `Strings`
