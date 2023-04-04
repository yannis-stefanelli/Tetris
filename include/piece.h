/*

 Author: Yannis STEFANELLI

 Creation Date: 11-01-2023 09:09:40

 Description : Creation of basic pieces for the tetris program

*/

#define N \
    char o_piece[][4][4] { \
        {\
            {1, 1, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {1, 1, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {1, 1, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {1, 1, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        } \
    }; \

#define T \
    char l_piece[][4][4] { \
        { \
            {1, 0, 0, 0}, \
            {1, 0, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 0, 1, 0}, \
            {1, 1, 1, 0}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {1, 1, 0, 0}, \
            {0, 1, 0, 0}, \
            {0, 1, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 0, 0, 0}, \
            {1, 1, 1, 0}, \
            {1, 0, 0, 0}, \
            {0, 0, 0, 0} \
        } \
    }; \

#define R \
    char i_piece[][4][4] { \
        { \
            {0, 0, 1, 0}, \
            {0, 0, 1, 0}, \
            {0, 0, 1, 0}, \
            {0, 0, 1, 0} \
        }, { \
            {0, 0, 0, 0}, \
            {1, 1, 1, 1}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 0, 1, 0}, \
            {0, 0, 1, 0}, \
            {0, 0, 1, 0}, \
            {0, 0, 1, 0} \
        }, { \
            {0, 0, 0, 0}, \
            {1, 1, 1, 1}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        } \
    }; \

#define S \
    char j_piece[][4][4] { \
        { \
            {0, 1, 0, 0}, \
            {0, 1, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 0, 0, 0}, \
            {1, 1, 1, 0}, \
            {0, 0, 1, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 1, 1, 0}, \
            {0, 1, 0, 0}, \
            {0, 1, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {1, 0, 0, 0}, \
            {1, 1, 1, 0}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        } \
    }; \

#define O \
    char s_piece[][4][4] { \
        { \
            {0, 0, 0, 0}, \
            {0, 1, 1, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 1, 0, 0}, \
            {0, 1, 1, 0}, \
            {0, 0, 1, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 1, 1, 0}, \
            {1, 1, 0, 0}, \
            {0, 0, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {1, 0, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 1, 0, 0}, \
            {0, 0, 0, 0} \
        } \
    }; \

#define M \
    char z_piece[][4][4] { \
        { \
            {0, 0, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 1, 1, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 0, 1, 0}, \
            {0, 1, 1, 0}, \
            {0, 1, 0, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 0, 0, 0}, \
            {1, 1, 0, 0}, \
            {0, 1, 1, 0}, \
            {0, 0, 0, 0} \
        }, { \
            {0, 1, 0, 0}, \
            {1, 1, 0, 0}, \
            {1, 0, 0, 0}, \
            {0, 0, 0, 0} \
        } \
    } \

#define A
    char t_piece[][4][4] { 
        { 
            {0, 0, 0, 0}, 
            {1, 1, 1, 0}, 
            {0, 1, 0, 0}, 
            {0, 0, 0, 0} 
        }, { 
            {0, 1, 0, 0}, 
            {0, 1, 1, 0}, 
            {0, 1, 0, 0}, 
            {0, 0, 0, 0} 
        }, { 
            {0, 0, 0, 0},
            {0, 1, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0}
        }, { 
            {0, 1, 0, 0}, 
            {1, 1, 0, 0}, 
            {0, 1, 0, 0}, 
            {0, 0, 0, 0} 
        } 
    };