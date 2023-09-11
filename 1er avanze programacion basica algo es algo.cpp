#include <iostream>
#include <string>

using namespace std;//para no poner std

string usuario, contrasena;//el string es para poder almacenar mas caracteres

int main()
{
	cout << "Inicio de sesion\n" << endl;
	cout << "Ingrese su usuario: ";
	getline(cin, usuario);//el getline es para leer los string
	cout << "Ingrese su contraseña: ";
	getline(cin, contrasena);

	int opc_principal;
	do
	{
		system("cls");
		cout << "Bienvenido " << usuario << endl;
		cout << "1.Inicio" << endl;
		cout << "2.Puntos" << endl;
		cout << "3.Datos" << endl;
		cout << "4.Reportes" << endl;
		cout << "5.Salir" << endl;
		cin >> opc_principal;

		switch (opc_principal)
		{
		case 1:
		{
			int opc_inicio;
			do
			{
				system("cls");
				cout << "1.Ir a la pantalla principal" << endl;
				cout << "2.Guardas datos" << endl;
				cout << "3.Cerrar sesion" << endl;
				cout << "4.Salir" << endl;
				cin >> opc_inicio;

				switch (opc_inicio)
				{
				case 1:
				{
					system("cls");
					cout << "volviendo a la pantalla principal...." << endl;
					system("pause");
					break;
				}
				case 2:
				{
					cout << "guardando datos" << endl;
					system("pause");

					break;
				}
				case 3:
				{
					cout << "cerrando sesion" << endl;
					system("pause");
					exit(0);
					break;
				}
				case 4:
				{
					cout << "saliendo" << endl;
					system("pause");
					exit(0);
					break;
				}
				break;
				}

			} while (opc_inicio != 1);
			break;
		}

		case 2:
		{
			int opc_puntos;
			do
			{
				system("cls");
				cout << "1.Capturar puntos por venta" << endl;
				cout << "2.Canje de puntos " << endl;
				cout << "3.Promos" << endl;
				cout << "4.Regresar" << endl;
				cin >> opc_puntos;

				switch (opc_puntos)
				{
				case 1:
				{
					string clientes[] = { "Jose Eduardo","Rocio Lopez","Esteban Ortiz" };
					int monto;
					int puntos;
					int numero_clientes = 3;
					int opc_cliente;
					cout << "Selecciona el cliente:" << endl;
					for (int i = 0; i < numero_clientes; i++)
					{
						cout << i + 1 << ". " << clientes[i] << endl;
					}

					cin >> opc_cliente;

					cout << "De cuanto fue el monto de la venta:" << endl;
					cin >> monto;

					puntos = monto * 0.16;

					cout << numero_clientes << " ha hecho una compra por " << monto << " y se le van a asignar " << puntos << " puntos" << endl;

					break;
				}

				case 2:
				{
					cout << "Canjeando" << endl;
					system("pause");
					break;
				}

				case 3:
				{
					int opc_promos;
					do
					{
						system("cls");
						cout << "1.Alta" << endl;
						cout << "2.Listado" << endl;
						cout << "3.Regresar" << endl;
						cin >> opc_promos;
						switch (opc_promos)
						{
						case 1:
						{
							cout << "Alta de promos" << endl;
							system("pause");
							break;
						}
						case 2:
						{
							cout << "Lista promos" << endl;
							system("pause");
							break;
						}
						case 3:
						{
							break;
						}
						break;
						}
					} while (opc_promos != 3);
					break;
				}

				case 4:
				{
					cout << "Saliendo" << endl;
					break;
				}

				break;
				}

			} while (opc_puntos != 4);
			break;
		}

		case 3:
		{
			string nombre, alias, gmail, telefono;
			int opc_datos, opc_altacliente;
			do
			{
				system("cls");
				cout << "1.Usuarios" << endl;
				cout << "2.Clientes" << endl;
				cout << "3.Sucursales" << endl;
				cout << "4.Regresar" << endl;
				cin >> opc_datos;
				switch (opc_datos)
				{
				case 1:
				{
					system("cls");
					cout << "1.Alta " << endl;
					cout << "2.Listado" << endl;
					break;
				}
				case 2:
				{
					system("cls");
					cout << "1.Alta " << endl;
					cout << "2.Listado" << endl;
					cout << "3.Modificar" << endl;
					cin >> opc_altacliente;

					switch (opc_altacliente)
					{
					case 1:
					{
						system("cls");
						cout << "Nombre:" << endl;
						getline(cin, nombre);

						cout << "Alias" << endl;
						getline(cin, alias);

						cout << "Telefono" << endl;
						getline(cin, telefono);

						cout << "Gmail" << endl;
						getline(cin, gmail);
						break;
					}
					case 2:
					{
						cout << "Nombre:" << nombre << endl;
						cout << "Alias:" << alias << endl;
						cout << "Telefono:" << telefono << endl;
						cout << "Gmail:" << gmail << endl;
						break;

					}
					break;
					}
					break;
				}
				case 3:
				{
					system("cls");
					cout << "1.Alta " << endl;
					cout << "2.Listado" << endl;
					break;
				}
				case 4:
				{
					system("cls");
					break;
				}
				break;
				}

			} while (opc_datos != 4);
			break;

		}

		case 4:
		{
			cout << "1.Puntaje de clientes " << endl;
			cout << "2.Promos canjeadas " << endl;
			cout << "3.Coompras de clientes" << endl;
			break;
		}

		case 5:
		{
			cout << "Saliendo de la app" << endl;
			system("pause");
			exit(0);
			break;
		}

		}
	} while (opc_principal != 5);
}