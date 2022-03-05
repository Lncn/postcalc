# Command Line Postfix Calculator

Simple command line postfix calculator!

## Build

    make

## Usage

    ./postfix "<expression>"

# Examples

    ./postfix "2 2 +"
    4
    ./postfix "2 22 +"
    24
    ./postfix "-2 22 +"
    20
    ./postfix "4 -2 -"
    6

## Test

    make test
