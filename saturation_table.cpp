// This program approximates the saturation curves for a family of refrigerants.
// Written on 02-DEC-2019 by Tony Scarcia
// ver 1.0 - uses table output instead of individual value
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	int choice1, choice2, cont = 1;
	float P, T, increment;
    cout << "Refrigerant Saturation Calculator v1.0" << endl;
    cout << "Written by Tony Scarcia (2019)" << endl << endl;
	while (cont) {
		cout << "[1] R12" << endl;
		cout << "[2] R22" << endl;
		cout << "[3] R32" << endl;
		cout << "[4] R134A" << endl;
		cout << "[5] R245fa" << endl;
		cout << "[6] R513a" << endl;
		cout << "[7] R1233zd" << endl;
		cout << "[8] R123" << endl;
		cout << endl << "Choose a Refrigerant [1-8] ";
		cin >> choice1;
		switch (choice1) {
		case 1: cout << "Refrigerant R12" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2] ";
			cin >> choice2;
			if (choice2 == 1) {
				// slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = 0; P <= 250; P+=increment) {
                	// for values of P more than 220
                    if (P > 220) {
                        cout << std::fixed << setw(7) << setprecision(3) << 2.6937e-12 * pow(P, 5) - 5.8079e-09 * pow(P, 4) + 5.1793e-06 * pow(P, 3) - 2.5863e-03 * pow(P, 2) + 9.5958e-01 * P + 1.6032e01 << setw(14) << setprecision(1) << P <<  endl;
                        }
                    // for values of P from 40 to 220
                    if (P >= 40 && P <= 220) {
                        cout << std::fixed << setw(7) << setprecision(3) << 2.3233e-10 * pow(P, 5) - 1.8750e-07 * pow(P, 4) + 6.2983e-05 * pow(P, 3) - 1.1921e-02 * pow(P, 2) + 1.7332e+00 * P - 1.0543e01 << setw(14) << setprecision(1) << P << endl;
                    }
                    // for values of P from 0 to 40
                    if (P >= 0 && P < 40) {
                        cout << std::fixed << setw(7) << setprecision(3) << 2.1097e-07 * pow(P, 5) - 2.8799e-05 * pow(P, 4) + 1.7223e-03 * pow(P, 3) - 6.7181e-02 * pow(P, 2) + 2.8582e+00 * P - 2.1669e01 << setw(14) << setprecision(1) << P << endl;
				}
			}
            }
			if (choice2 == 2) {
				// slightly different routine here -- table style
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = 0; T <= 250; T += increment) {
                    // for values of T more than 145
                    if (T > 145) {
                        cout << std::fixed << setw(7) << setprecision(3) << 7.0638e-09 * pow(T, 5) - 5.8423e-06 * pow(T, 4) + 1.9496e-03 * pow(T, 3) - 3.1436E-01 * pow(T, 2) + 2.6622E+01 * T - 8.4434E+02 << setw(14) << setprecision(1) << T << endl;
                    }
                    // for values of T from 45 to 145
                    if (T >= 45 && T <= 145) {
                        cout << std::fixed << setw(7) << setprecision(3) << -1.2654e-10 * pow(T, 5) + 6.8968e-08 * pow(T, 4) + 5.0735E-06 * pow(T, 3) + 4.9765E-03 * pow(T, 2) + 4.6899E-01 * T + 9.7956 << setw(14) << setprecision(1) << T << endl;
                    }
				// for values of T less than 45
                    if (T < 45) {
                        cout << std::fixed << setw(7) << setprecision(3) << 5.4079e-10 * pow(T, 5) + 4.6280e-08 * pow(T, 4) + 2.0789e-05 * pow(T, 3) + 6.5512e-03 * pow(T, 2) + 8.1391e-01 * T + 2.3968e+01 << setw(14) << setprecision(1) << T << endl;
                    }
                }
            }
			break;
		case 2: cout << "Refrigerant R22" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2] ";
			cin >> choice2;
			if (choice2 == 1) {
				// slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = 0; P <= 500; P+=increment) {
                    // for values of P more than 355
                    if (P > 355) {
                        cout << std::fixed << setw(7) << setprecision(3) << 4.6600e-13 * pow(P, 5) - 1.4404e-09 * pow(P, 4) + 1.8453e-06 * pow(P, 3) - 1.3241E-03 * pow(P, 2) + 6.9147E-01 * P + 3.2056E+00 << setw(14) << setprecision(1) << P << endl;
                    }
                    // for values of P from 75 to 355
                    if (P >= 75 && P <= 355) {
                        cout << std::fixed << setw(7) << setprecision(3) << 2.3116e-11 * pow(P, 5) - 3.0635e-08 * pow(P, 4) + 1.6826E-05 * pow(P, 3) - 5.1585E-03 * pow(P, 2) + 1.1803E+00 * P - 2.1322E+01 << setw(14) << setprecision(1) << P << endl;
                    }
                    // for values of P less than 45
                    if (P < 75) {
                        cout << std::fixed << setw(7) << setprecision(3) << 2.5253e-08 * pow(P, 5) - 6.5350E-06 * pow(P, 4) + 7.0266E-04 * pow(P, 3) - 4.3981E-02 * pow(P, 2) + 2.4415E+00 * P - 4.0949E+01 << setw(14) << setprecision(1) << P << endl;
                    }
				}
			}
			if (choice2 == 2) {
				// slightly different routine here -- table style
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = 0; T <= 250; T += increment) {
                    // for values of T more than 145
                    if (T > 145) {
                        cout << std::fixed << setw(8) << setprecision(3) << 7.0551e-09 * pow(T, 5) - 5.2232e-06 * pow(T, 4) + 1.5800E-03 * pow(T, 3) - 2.2306E-01 * pow(T, 2) + 1.7545E+01 * T - 4.5538E+02 << setw(13) << setprecision(1) << T << endl;
                    }
                    // for values of T from 45 to 145
                    if (T >= 45 && T <= 145) {
                        cout << std::fixed << setw(8) << setprecision(3) << 2.4832e-10 * pow(T, 5) - 5.9830e-08 * pow(T, 4) + 3.1198e-05 * pow(T, 3) + 6.3407e-03 * pow(T, 2) + 8.0475e-01 * T + 2.4342E+01 << setw(13) << setprecision(1) << T << endl;
                    }
                    // for values of T less than 45
                    if (T < 45) {
                        cout << std::fixed << setw(8) << setprecision(3) << 5.4079e-10 * pow(T, 5) + 4.6280e-08 * pow(T, 4) + 2.0789e-05 * pow(T, 3) + 6.5512e-03 * pow(T, 2) + 8.1391e-01 * T + 2.3968e+01 << setw(13) << setprecision(1) << T << endl;
                    }
				}
			}
			break;
		case 3: cout << "Refrigerant R32" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2] ";
			cin >> choice2;
			if (choice2 == 1) {
				// slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = 0; P <= 500; P+=increment) {
                    // for values of P more than 200
                    if (P > 200) {
                        cout << std::fixed << setw(7) << setprecision(3) << 1.6002E-07 * pow(P, 3) - 0.00039 * pow(P, 2) + 0.42851 * P - 7.133 << setw(14) << setprecision(1) << P << endl;
                    }
                    // for values of P less than 200
                    if (P <= 200) {
                        cout << std::fixed << setw(7) << setprecision(3) << -1.808E-07 * pow(P, 4) + 9.7306E-05 * pow(P, 3) - 0.020112 * pow(P, 2) + 2.3371 * P - 89.055 << setw(14) << setprecision(1) << P << endl;
                    }
				}
			}
			if (choice2 == 2) {
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = -50; T <= 250; T += increment) {
                    // for values of T more than 0
                    if (T > 0) {
                        cout << std::fixed << setw(8) << setprecision(3) << 2.3819E-07 * pow(T, 4) - 1.5707E-05 * pow(T, 3) + 0.014836 * pow(T, 2) + 1.1909 * T + 64.592 << setw(13) << setprecision(1) << T << endl;
                    }
                    // for values of T less than 0
                    if (T < 0) {
                        cout << std::fixed << setw(8) << setprecision(3) << 2.0277E-05 * pow(T, 3) + 9.0363E-03 * pow(T, 2) + 1.2785 * T + 63.685 << setw(13) << setprecision(1) << T << endl;
                    }
				}
			}
			break;
		case 4: cout << "Refrigerant R134a" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2] ";
			cin >> choice2;
			if (choice2 == 1) {
				// slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = 0; P <= 500; P+=increment) {
					// for values of P more than 250
					if (P > 250) {
						cout << std::fixed << setw(7) << setprecision(3) << 1.15879997e-011 * pow(P, 5) - 2.12589999e-008 * pow(P, 4) + 0.000015737 * pow(P, 3) - 0.0060878 * pow(P, 2) + 1.4884 * P - 19.949 << setw(14) << setprecision(1) << P << endl;
					}
					// for values of P from 40 to 250
					if (P >= 40 && P <= 250) {
						cout << std::fixed << setw(7) << setprecision(3) << 1.60410000e-010 * pow(P, 5) - 1.41409998e-7 * pow(P, 4) + 0.000051367 * pow(P, 3) - 0.010342 * pow(P, 2) + 1.5544 * P - 3.1862 << setw(14) << setprecision(1) << P << endl;
					}
					// for values of P less than 40
					if (P < 40) {
						cout << std::fixed << setw(7) << setprecision(3) << 7.93840016e-008 * pow(P, 5) - 0.000017258 * pow(P, 4) + 0.0013896 * pow(P, 3) - 0.063623 * pow(P, 2) + 2.7321 * P - 15.136 << setw(14) << setprecision(1) << P << endl;
					}
				}
			}
			if (choice2 == 2) {
				// slightly different routine here -- table style
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = 0; T <= 250; T += increment) {
					// for values of T more than 145
					if (T > 145) {
						cout << std::fixed << setw(7) << setprecision(3) << -8.50969997e-008 * pow(T, 5) + 0.000072702 * pow(T, 4) - 0.02474 * pow(T, 3) + 4.209 * pow(T, 2) - 355.25 * T + 12004.0 << setw(14) << setprecision(1) << T << endl;
					}
					// for values of P from 45 to 145
					if (T >= 45 && T <= 145) {
						cout << std::fixed << setw(7) << setprecision(3) << -1.96010000e-010 * pow(T, 5) + 9.70830030e-008 * pow(T, 4) + 8.56509996e-006 * pow(T, 3) + 0.0057092 * pow(T, 2) + 0.43874 * T + 7.2097 << setw(14) << setprecision(1) << T << endl;
					}
					// for values of T less than 45
					if (T < 45) {
						cout << std::fixed << setw(7) << setprecision(3) << 1.93309990e-009 * pow(T, 5) - 1.33559993e-007 * pow(T, 4) + 0.000025698 * pow(T, 3) + 0.0046314 * pow(T, 2) + 0.48411 * T + 6.36 << setw(14) << setprecision(1) << T << endl;
					}
				}
			}
			break;
		case 5: cout << "Refrigerant R245fa" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2] ";
			cin >> choice2;
			if (choice2 == 1) {
				// slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = 0; P <= 500; P+=increment) {
                    // for all values of P in the valid range
                    if (P > 0) {
                        cout << std::fixed << setw(7) << setprecision(3) << 3.0e-06 * pow(P, 3) + 0.0003 * pow(P, 2) + 0.0158 * P << setw(14) << setprecision(1) << P << endl;
                    }
				}
			}
			if (choice2 == 2) {
				// slightly different routine here -- table style
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = 0; T <= 250; T += increment) {
                    // for values of T more than 219
                    if (T > 219) {
                        cout << std::fixed << setw(7) << setprecision(3) << -6.3094e-09 * pow(T, 5) + 7.4924e-06 * pow(T, 4) - 3.5311e-03 * pow(T, 3) + 8.3773E-01 * pow(T, 2) - 9.8680E+01 * T + 4.6500E+03 << setw(14) << setprecision(1) << T << endl;
                    }
                    // for values of P from 162 to 219
                    if (T > 162 && T <= 219) {
                        cout << std::fixed << setw(7) << setprecision(3) << 5.8629e-10 * pow(T, 5) - 5.7748e-07 * pow(T, 4) + 2.4609e-04 * pow(T, 3) - 4.6343e-02 * pow(T, 2) + 4.8071E+00 * T - 1.9733E+02 << setw(14) << setprecision(1) << T << endl;
                    }
                    // for values of P from 60 to 162
                    if (T > 60 && T <= 162) {
                        cout << std::fixed << setw(7) << setprecision(3) << -2.0822e-12 * pow(T, 5) + 1.3437e-08 * pow(T, 4) + 9.1269e-06 * pow(T, 3) + 9.7525e-04 * pow(T, 2) + 1.0733e-01 * T - 1.1706e+01 << setw(14) << setprecision(1) << T << endl;
                    }
                    // for values of T less than 60
                    if (T < 60) {
                        cout << std::fixed << setw(7) << setprecision(3) << 8.0E-06 * pow(T, 3) + 0.0013 * pow(T, 2) + 0.0886 * T - 11.399 << setw(14) << setprecision(1) << T << endl;
                    }    
				}
			}
			break;
		case 6: cout << "Refrigerant R513a" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2] ";
			cin >> choice2;
			if (choice2 == 1) {
				// slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = -50; P <= 500; P+=increment) {
                    // for values of P more than 100
                    if (P > 100) {
                        cout << std::fixed << setw(9) << setprecision(3) << 8.00E-7 * pow(P, 3) - 0.0011 * pow(P, 2) + 0.7018 * P + 24.653 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of P from 0 to 100
                    if (P >= 0 && P <= 100) {
                        cout << std::fixed << setw(9) << setprecision(3) << 8.00E-5 * pow(P, 3) - 0.0191 * pow(P, 2) + 2.1214 * P - 18.62 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of p less than 0
                    if (P < 0) {
                        cout << std::fixed << setw(9) << setprecision(3) << 0.0061 * pow(P, 3) - 0.0585 * pow(P, 2) + 2.7288 * P - 20.374 << setw(12) << setprecision(1) << P << endl;
                    }
				}
			}
			if (choice2 == 2) {
				// slightly different routine here -- table style
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = -50; T <= 250; T += increment) {
					// for values of T more than 0
					if (T > 0) {
						cout << std::fixed << setw(7) << setprecision(3) << 3.00E-05 * pow(T, 3) + 0.003 * pow(T, 2) + 0.6286 * T + 8.2412 << setw(14) << setprecision(1) << T << endl;
					}
					// for values of T less than 0
					if (T <= 0) {
						cout << std::fixed << setw(7) << setprecision(3) << 2.00E-05 * pow(T, 3) + 0.0047 * pow(T, 2) + 0.5391 * T + 9.1874 << setw(14) << setprecision(1) << T << endl;
					}	
				}
			}
			break;
		case 7: cout << "Refrigerant R1233zd" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2]" << endl;
			cin >> choice2;
			if (choice2 == 1) {
				// slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = 0; P <= 150; P+=increment) {
                    // for values of P less than 0.27
                    if (P < 0.27) {
                        cout << std::fixed << setw(9) << setprecision(3) << 599.74 * pow(P, 2) + 399.72 * P - 120.22 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of P from 0.27 to 1.10
                    if (P >= 0.27 && P < 1.10) {
                        cout << std::fixed << setw(9) << setprecision(3) << -36.938 * pow(P, 2) + 108.74 * P - 80.303 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of P from 1.10 to 9.32
                    if (P >= 1.10 && P < 9.32) {
                        cout << std::fixed << setw(9) << setprecision(3) << 0.0047 * pow(P, 5) - 0.1481 * pow(P, 4) + 1.8756 * pow(P, 3) - 12.523 * pow(P, 2) + 54.573 * P - 51.478 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of P from 9.32 to 20.08
                    if (P >= 9.32 && P < 20.08) {
                        cout << std::fixed << setw(9) << setprecision(3) << -0.1276 * pow(P, 2) + 8.3516 * P + 33.535 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of P from 20.08 to 38.70
                    if (P >= 20.08 && P < 38.70) {
                        cout << std::fixed << setw(9) << setprecision(3) << -0.0341 * pow(P, 2) + 4.6642*P + 70.472 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of P from 38.70 to 79.81
                    if (P >= 38.70 && P < 79.81) {
                        cout << std::fixed << setw(9) << setprecision(3) << -0.0099 * pow(P, 2) + 2.7387*P + 109.43 << setw(12) << setprecision(1) << P << endl;
                    }
                    // for values of P more than 79.81
                    if (P >= 79.81) {
                        cout << std::fixed << setw(9) << setprecision(3) << -0.0031 * pow(P, 2) + 1.6600*P + 152.72 << setw(12) << setprecision(1) << P << endl;
                    }
                }
            }    
			if (choice2 == 2) {
				// slightly different routine here -- table style
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = -100; T <= 100; T += increment) {
                    // for values of T more than 0
                    if (T > 0) {
                        cout << std::fixed << setw(7) << setprecision(3) << 4.015e-15 * pow(T, 6) - 5.236e-12 * pow(T, 5) + 5.6190e-09 * pow(T, 4) + 1.406E-06 * pow(T, 3) + 3.160E-04 * pow(T, 2) + 2.996E-2 * T + 1.2418 << setw(14) << setprecision(1) << T << endl;
                    }
                    // for values of T from -55 to 0
                    if (T > -55 && T <= 0) {
                        cout << std::fixed << setw(7) << setprecision(3) << 1.2937 * pow(2.71828183, (0.0277*T)) << setw(14) << setprecision(1) << T << endl;
                    }
                    // for values of T less than -55
                    if (T < -55) {
                        cout << std::fixed << setw(7) << setprecision(3) << 1.8564 * pow(2.71828183, (0.0343*T)) << setw(14) << setprecision(1) << T << endl;
                    }    
				}
			}
			break;
		case 8: cout << "Refrigerant R123" << endl;
			cout << "[1] Solve for Temperature" << endl;
			cout << "[2] Solve for Pressure" << endl;
			cout << endl << "Choose Temperature or Pressure [1-2] ";
			cin >> choice2;
			if (choice2 == 1) {
                // slightly different routine here -- table style
				cout << "Enter pressure increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Temperature	Pressure" << endl;
				cout << "(DEG F)		(PSIG)" << endl;
				for (P = -50; P <= 250; P+=increment) {
					// for values of P more than 100
					if (P > 100) {
						cout << std::fixed << setw(7) << setprecision(3) << -0.0008 * pow(P, 2) + 0.7928 * P + 142.6 << setw(14) << setprecision(1) << P << endl;
					}
					// for values of P from 0 to 100
					if (P >= 0 && P <= 100) {
						cout << std::fixed << setw(7) << setprecision(3) << 0.0001 * pow(P, 3) - 0.0234 * pow(P, 2) + 2.6315 * P + 84.412 << setw(14) << setprecision(1) << P << endl;
					}
					// for values of P less than 0
					if (P < 0) {
						cout << std::fixed << setw(7) << setprecision(3) << -0.0091 * pow(P, 4) - 0.2001 * pow(P, 3) - 1.6318 * pow(P, 2) - 0.6415 * P + 79.91 << setw(14) << setprecision(1) << P << endl;
					}
				}
			}
			if (choice2 == 2) {
				// slightly different routine here -- table style
				cout << "Enter temperature increment value: ";
				cin >> increment;
				while (increment < 0.1) {
					cout << "Value must be greater than or equal to 0.1: ";
					cin >> increment;
				}
				cout << endl;
				cout << "Pressure	Temperature" << endl;
				cout << "(PSIG)		(DEG F)" << endl;
				for (T = -50; T <= 250; T += increment) {
					// for values of T more than 150
					if (T > 150) {
						cout << std::fixed << setw(7) << setprecision(3) << .0083 * pow(T, 2) - 2.0879 * T + 166.04 << setw(14) << setprecision(1) << T << endl;
					}
					// for values of T from 0 to 150
					if (T >= 0 && T <= 150) {
						cout << std::fixed << setw(7) << setprecision(3) << 1.00E-08 * pow(T, 4) + 5.00E-06 * pow(T, 3) + 0.0007 * pow(T, 2) + 0.059 * T - 12.710 << setw(14) << setprecision(1) << T << endl;					}
					// for values of T less than 0
					if (T < 0) {
						cout << std::fixed << setw(7) << setprecision(3) << 7.00e-09 * pow(T, 4) + 3.00e-06 * pow(T, 3) + 0.0006 * pow(T, 2) + 0.0568 * T - 12.713 << setw(14) << setprecision(1) << T << endl;
					}
				}
			}
			break;
		}
		cout << endl << "Press 1 to Continue, 0 to to Quit" << endl;
		cin >> cont;
	}
}
