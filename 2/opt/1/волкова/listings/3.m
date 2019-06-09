clc; clearvars

f = @(X) 5.5*X(3) + 3*X(4);

z = @(N) -f(N); 

% Функциональные ограичения 
A = [1,2,1,2;
    2,1,2,1;
    1,-1,1,- 1;
    1.8 , 1.2 , -2.2 , -1.2;
    -3,-2,0,0;
    -1,-2,-1,-2];
b = [6; 8; 4; 0; -5; 5.999];

% Поиск оптимумов частных критериев
[x, opt] = fmincon(z, [0; 0; 0; 0], A, b, [], [], [0; 0; 0; 0],[], [],optimset('Display','iter'))
