CC      := gcc
CFLAGS  := -Wall -Wextra -Werror
 
COLLEEN_DIR := Colleen
GRACE_DIR   := Grace
SULLY_DIR   := Sully
 
COLLEEN := $(COLLEEN_DIR)/Colleen
GRACE   := $(GRACE_DIR)/Grace
SULLY   := $(SULLY_DIR)/Sully
 
# Cible par defaut : compile les trois programmes
all: colleen grace sully
 
colleen: $(COLLEEN)
$(COLLEEN): $(COLLEEN_DIR)/Colleen.c
	$(CC) $(CFLAGS) $< -o $@
 
grace: $(GRACE)
$(GRACE): $(GRACE_DIR)/Grace.c
	$(CC) $(CFLAGS) $< -o $@
 
sully: $(SULLY)
$(SULLY): $(SULLY_DIR)/Sully.c
	$(CC) $(CFLAGS) $< -o $@
 
# clean : supprime UNIQUEMENT les fichiers generes par l'execution
#         (la colonie de Sully). On ne touche PAS a Grace_kid.c : c'est
#         un fichier source a rendre.
clean:
	rm -f $(SULLY_DIR)/Sully_*.c
	rm -f $(SULLY_DIR)/Sully_0 $(SULLY_DIR)/Sully_1 $(SULLY_DIR)/Sully_2
	rm -f $(SULLY_DIR)/Sully_3 $(SULLY_DIR)/Sully_4 $(SULLY_DIR)/Sully_5
 
# fclean : clean + supprime les binaires compiles
fclean: clean
	rm -f $(COLLEEN) $(GRACE) $(GRACE_DIR)/Grace_kid $(SULLY)
 
re: fclean all
 
.PHONY: all colleen grace sully clean fclean re