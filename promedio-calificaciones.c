#include <stdio.h>

int main() {
    // Declarar variables
    float calificacion1, calificacion2, calificacion3;
    float suma, promedio;

    // Pedir las calificaciones
    printf("Introduce la calificación de la primera materia: ");
    scanf("%f", &calificacion1);

    printf("Introduce la calificación de la segunda materia: ");
    scanf("%f", &calificacion2);

    printf("Introduce la calificación de la tercera materia: ");
    scanf("%f", &calificacion3);

    // Calcular la suma y el promedio
    suma = calificacion1 + calificacion2 + calificacion3;
    promedio = suma / 3;

    // Mostrar el promedio
    printf("El promedio es: %.2f\n", promedio);

    // Determinar si aprueba o reprueba
    if (promedio >= 70) {
        printf("Aprobado\n");
    } else {
        printf("Reprobado\n");
    }

    return 0;
}

