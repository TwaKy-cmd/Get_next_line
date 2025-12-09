This project has been created as part of the 42 curriculum by khebert

/* French README

Description : 

Get_next_line est un projet consistant a afficher un texte avec ses retours a la ligne, contrairement a un printf qui affichera sur une seul ligne, Get_next_line est en capacite de comprendre l'emplacement de chaque nouvelle ligne et d'afficher la sortie exactement de la meme facon qu'on l'ecrirait dans un .txt !

Instructions :

Pour pouvoir tester le projet il vous faudra creer un fichier test.txt et un main dans la fonction, ensuite vous n'avez plus qu'a compiler, pour la compilation il vous faudra compiler tout les .c (*.c) et votre main si celui ci est a part ! Si vous souhaitez personnaliser la BUFFER_SIZE veuillez entrer ce flag supplementaire dans la compilation : -D BUFFER_SIZE=43

Resources :

L'IA n'a pas etait utiliser pour ce projet !

*/

/* English README

Description: 

Get_next_line is a project consisting of displaying a text with its line breaks, unlike a printf that will display on a single line, Get_next_line is able to understand the location of each new line and display the output exactly as it would be written in a . txt!

Instructions:

To be able to test the project, you will need to create a test.txt file and a hand in the function, then you only have to compile, for compilation you will need to compile all the . c (*.c) and your hand if this one is on the side! If you want to customize the BUFFER_SIZE please enter this additional flag in the compilation: -D BUFFER_SIZE=43

Resources:

The AI was not used for this project !

*/

Usage examples : 

/* For .txt

khebert is a goat of code
in a world
i love 42 and i love coding
im born to code.

/* For main.c

    int	main(void)
    {
	    int		fd;
	    char	*line;

    	fd = open("test.txt", O_RDONLY);
    	if (fd < 0)
    		return (1);
    	while ((line = get_next_line(fd)) != NULL)
    	{
    		printf("NEXT LINE -> %s", line);
    		free(line);
    	}
	    close(fd);
	    return (0);
    }