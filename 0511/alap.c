#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

#define version 1.0


void help(string languages[], int count) {
	printf("Alap kód generáló v%.2f, Varga Zsolt\n\n", version);
	
	printf("Használat: alap <programozási_nyelv> [kapcsoló]\n\n");
	
	printf("-h, --help		Használati útmutató\n");
	printf("-v, --version		Verzió információk\n");
	printf("--stdout		Ne hozzon létre fáljt, csak a képernyőre írjon\n\n");
	
	printf("Elérhető nyelvek:\n\n");
	
	
	for (int i=0; i<count; i++) {
		printf("* %s		      - %s forráskód [main.%s]\n", languages[i], languages[i], languages[i]);
	}
}


void program_iras(string nyelv, int stdoutactive) {
	string c[10];
	c[0] = "#include <stdio.h>\n";
	c[1] = "int main() {\n";
	c[2] = "	printf(\"Hello world!\\n\");\n";
	c[3] = "	return 0;\n";
	c[4] = "}\n";
	
	string sh[10];
	sh[0] = "#!/bin/bash\n";
	sh[1] = "echo \"Hello world!\"\n";
	
	string py[10];
	py[0] = "print(\"Hello world!\")\n";
	
	string cpp[10];
	cpp[0] = "#include <iostream>\n";
	cpp[1] = "int main() {\n";
	cpp[2] = "	std::cout << \"Hello world!\\n\";\n";
	cpp[3] = "	return 0;\n";
	cpp[4] = "}\n";
	
	string cs[10];
	cs[0] = "using System;\n\n";
	cs[1] = "class Program {\n";
	cs[2] = "	static void Main() {\n";
	cs[3] = "		Console.WriteLine(\"Hello world!\");\n";
	cs[4] = "	}\n";
	cs[5] = "}\n";
	
	if (stdoutactive == 0) {	//Legyen fálj!
		char filename[50];
		sprintf(filename, "main.%s", nyelv);
		FILE *filetest = fopen(filename, "r");
		if (filetest != NULL) {
			printf("Hiba: A %s programozási nyelvhez már létezik alap fájl!\n", nyelv);
			exit(1);
			fclose(filetest);
			return;
		}
		
		FILE *file = fopen(filename, "w");
		if (file == NULL) {
			printf("Hiba: A fálj létrehozása sikertelen!\n");
			exit(1);
		} else {
			printf("Fálj létrehozása sikeres: %s\n",filename);
		}
		
		
		
		int szamlalo = 0;
		if (nyelv == "c") {
			for (szamlalo;szamlalo < 5; szamlalo++) {
				fprintf(file, "%s",c[szamlalo]);
			}
		} else if (nyelv == "sh") {
			for (szamlalo;szamlalo < 2; szamlalo++) {
				fprintf(file, "%s",sh[szamlalo]);
			}
		} else if (nyelv == "py") {
			for (szamlalo;szamlalo < 1; szamlalo++) {
				fprintf(file, "%s",py[szamlalo]);
			}
		} else if (nyelv == "cpp") {
			for (szamlalo;szamlalo < 5; szamlalo++) {
				fprintf(file, "%s",cpp[szamlalo]);
			}
		} else if (nyelv == "cs") {
			for (szamlalo;szamlalo < 6; szamlalo++) {
				fprintf(file, "%s",cs[szamlalo]);
			}
		}
		fclose(file);
	} else if (stdoutactive == 1) {
		int szamlalo = 0;
		if (nyelv == "c") {
			for (szamlalo;szamlalo < 5; szamlalo++) {
				printf("%s",c[szamlalo]);
			}
		} else if (nyelv == "sh") {
			for (szamlalo;szamlalo < 2; szamlalo++) {
				printf("%s",sh[szamlalo]);
			}
		} else if (nyelv == "py") {
			for (szamlalo;szamlalo < 1; szamlalo++) {
				printf("%s",py[szamlalo]);
			}
		} else if (nyelv == "cpp") {
			for (szamlalo;szamlalo < 5; szamlalo++) {
				printf("%s",cpp[szamlalo]);
			}
		} else if (nyelv == "cs") {
			for (szamlalo;szamlalo < 6; szamlalo++) {
				printf("%s",cs[szamlalo]);
			}
		}
	}
}


int main(int argc, string argv[]) {
	int stdoutprint = 0;
	string nyelvek[10];
	
	//Programozási nyelvek:
	
	nyelvek[0] = "c";
	nyelvek[1] = "sh";
	nyelvek[2] = "py";
	nyelvek[3] = "cpp";
	nyelvek[4] = "cs";


	
	
	
	int darab = 0;
	while (nyelvek[darab] != NULL) {
		darab++;
	} 

		
	if (argc < 2 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0 ) {	//Ha help, vagy nincs argumentum megadva, akkor help:
		help(nyelvek, darab);
		return 0;
	}
	
	if (argc > 1) {
		if (argc > 2 && strcmp(argv[2], "--stdout") == 0) {
			stdoutprint = 1;
		}
		
		if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0) {
			printf("Alap kód generáló v%.2f, Varga Zsolt\n", version);
			printf("Készült a Programozás 1 tantárgy keretein belül.\n");
			return 0;
		}
		
		
		for (int k = 0; k<darab; k++) {
			if (strcmp(argv[1], nyelvek[k]) == 0) {
				program_iras(nyelvek[k], stdoutprint);
				return 0;
			}
		}
		
		printf("Hiba: Hiányzó programozási nyelv, vagy hibás parancs!\n");
		printf("Segítséghez használd a -h vagy --help kapcsolót!\n");
		//help(nyelvek, darab);
		
	}
	return 0;
}
