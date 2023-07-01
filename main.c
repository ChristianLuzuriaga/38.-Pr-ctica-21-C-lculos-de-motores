#include <stdio.h>
#include <stdlib.h>

struct cilindro {
    float diametro;
    float carrera;
};

struct motor {
    int identificador;
    struct cilindro cilindrol;
    int num_cilindros;
    float cilindrada;
};

int main() {
    struct motor motor1;
    printf("Introduce el identificador: ");
    scanf("%d", &motor1.identificador);
    printf("Introduce el diámetro del cilindro (mm): ");
    scanf("%f", &motor1.cilindrol.diametro);
    printf("Introduce la carrera del cilindro (mm): ");
    scanf("%f", &motor1.cilindrol.carrera);
    printf("Introduce el número de cilindros: ");
    scanf("%d", &motor1.num_cilindros);

    motor1.cilindrada = (motor1.num_cilindros * (motor1.cilindrol.carrera / 10) * 3.14159 *
                        ((motor1.cilindrol.diametro / 2) * (motor1.cilindrol.diametro / 2))) / 1000;

    printf("Identificador: %d\n", motor1.identificador);
    printf("Diámetro (mm): %.2f\n", motor1.cilindrol.diametro);
    printf("Carrera (mm): %.2f\n", motor1.cilindrol.carrera);
    printf("Número de cilindros: %d\n", motor1.num_cilindros);
    printf("Cilindrada: %.2f\n", motor1.cilindrada);

    
}
