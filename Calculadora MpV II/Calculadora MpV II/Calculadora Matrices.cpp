#include <iostream>
#include <locale.h>

using namespace std;

int opción = 0, m = 0, n = 0;

int main() {

	setlocale(LC_CTYPE, "Spanish"); // Nos permite el uso de los acentos y carácteres del idioma español.

	cout << "¡Bienvenido a la aplicación CALCULADORA DE MATRICES!\n\n";

	cout << "Seleccione una de las siguientes:\n\n";

	cout << "OPERACIONES CON MATRICES:\n\n";
	cout << "1. Suma (a + b).\n";
	cout << "2. Resta (a + (-b)).\n";
	cout << "3. Multiplicación por un escalar.\n";
	cout << "4. Multiplicación entre matrices.\n";

	cout << "\nDigite una opción: ";
	cin >> opción;

	switch (opción) {

		case 1:{

			system("cls");

			int a[100][100], b[100][100], suma[100][100];

			cout << "Escriba la cantidad de renglones (entre 1 y 100): ";
			cin >> m;

			cout << "Escriba la cantidad de columnas (entre 1 y 100): ";
			cin >> n;

			// Guardar elementos de la primer matriz.
			cout << endl << "Introduzca los elementos de la primera matriz: " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					cout << "Digite el elemento a" << i + 1 << j + 1 << " : ";
					cin >> a[i][j];
				}
			}

			// Guardar elementos de la segunda matriz.
			cout << endl << "Introduzca los elementos de la segunda matriz: " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					cout << "Digite el elemento b" << i + 1 << j + 1 << " : ";
					cin >> b[i][j];
				}
			}

			// Añadir las dos matrices.
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					suma[i][j] = a[i][j] + b[i][j];
				}
			}

			// Mostrar la matriz resultante.
			cout << endl << "La suma de las matrices es: " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					cout << suma[i][j] << "  ";

					if (j == n - 1) {
						cout << endl;
					}
				}
			}
			break;
		}

		case 2: {
			system("cls");

			int a[100][100], b[100][100], resta[100][100];

			cout << "Escriba la cantidad de renglones (entre 1 y 100): ";
			cin >> m;

			cout << "Escriba la cantidad de columnas (entre 1 y 100): ";
			cin >> n;

			// Guardar elementos de la primer matriz.
			cout << endl << "Introduzca los elementos de la primera matriz: " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					cout << "Digite el elemento a" << i + 1 << j + 1 << " : ";
					cin >> a[i][j];
				}
			}

			// Guardar elementos de la segunda matriz.
			cout << endl << "Introduzca los elementos de la segunda matriz: " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					cout << "Digite el elemento b" << i + 1 << j + 1 << " : ";
					cin >> b[i][j];
				}
			}

			// Inverso aditivo de la segunda matriz.
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					b[i][j] = b[i][j] * (-1);
				}
			}


			// Añadir las dos matrices.
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					resta[i][j] = a[i][j] + b[i][j];
				}
			}

			// Mostrar la matriz resultante.
			cout << endl << "La resta de las matrices es: " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					cout << resta[i][j] << "  ";

					if (j == n - 1) {
						cout << endl;
					}
				}
			}
			break;
		}

		case 4: {

			system("cls");


			int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

			cout << "Escriba la cantidad de renglones de la primera matriz: ";
			cin >> r1;

			cout << "Escriba la cantidad de columnas de la primera matriz: ";
			cin >> c1;

			cout << "\nEscriba la cantidad de renglones de la segunda matriz: ";
			cin >> r2;

			cout << "Escriba la cantidad de columnas de la segunda matriz: ";
			cin >> c2;


			// Si la cantidad de columnas de la primera matriz no es igual a la cantidad de renglones de la segunda matriz:

			while (c1 != r2)
			{
				cout << "\nLa cantidad de columnas de la primera matriz no es igual a la cantidad de renglones de la segunda matriz.";

				cout << "\nEscriba la cantidad de renglones de la primera matriz: ";
				cin >> r1;

				cout << "Escriba la cantidad de columnas de la primera matriz: ";
				cin >> c1;

				cout << "\nEscriba la cantidad de renglones de la segunda matriz: ";
				cin >> r2;

				cout << "Escriba la cantidad de columnas de la segunda matriz: ";
				cin >> c2;
			}

			// Guardar los elementos de la primera matriz.
			cout << endl << "Introduzca los elementos de la primera matriz:" << endl;
			for (i = 0; i < r1; i++) {
				for (j = 0; j < c1; j++)
				{
					cout << "Digite el elemento a" << i + 1 << j + 1 << " : ";
					cin >> a[i][j];
				}
			}

			// Guardar los elementos de la segunda matriz.
			cout << endl << "Introduzca los elementos de la segunda matriz:" << endl;
			for (i = 0; i < r2; i++) {
				for (j = 0; j < c2; j++) {
					cout << "Digite el elemento b" << i + 1 << j + 1 << " : ";
					cin >> b[i][j];
				}
			}

			// Inicializando elementos de la matriz mult a 0.
			for (i = 0; i < r1; i++) {
				for (j = 0; j < c2; j++) {
					mult[i][j] = 0;
				}
			}

			// Multiplicación de matriz a y b y guardándolo en mult.
			for (i = 0; i < r1; i++) {
				for (j = 0; j < c2; j++) {
					for (k = 0; k < c1; k++) {
						mult[i][j] += a[i][k] * b[k][j];
					}
				}
			}

			// Imprimir el resultado.
			cout << endl << "La matriz resultante es: " << endl;
			for (i = 0; i < r1; i++) {
				for (j = 0; j < c2; j++) {
					cout << " " << mult[i][j];
					if (j == c2 - 1) {
						cout << endl;
					}
				}
			}

			break;
		}
	}

	return 0;
}