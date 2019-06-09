clc; clearvars

f1 = @(X) 3*X(1)+2*X(2);
f2 = @(X) 5.5*X(3) + 3*X(4);
f3 = @(X) 6 - X(1) - 2*X(2) - X(3) - 2*X(4) ;

z1 = @(N) -f1(N); 
z2 = @(N) -f2(N); 

A = [1,2,1,2;
    2,1,2,1;
    1,-1,1,- 1;
    1.8 , 1.2 , -2.2 , -1.2];
b = [6; 8; 4; 0];

lb = [0; 0; 0; 0];

[x_1, z1_opt] = fmincon(z1, lb, A, b, [], [], lb);
[x_2, z2_opt] = fmincon(z2, lb, A, b, [], [], lb);
[x_3, f3_opt] = fmincon(f3, lb, A, b, [], [], lb);


% add convolution
z1_norm = @(N) z1(N)/abs(z1_opt);
f2_norm = @(N) z2(N)/abs(z2_opt);
z3_norm = @(N) f3(N)/abs(f3_opt);

f = @(N) 0.4*z1_norm(N) +0.2*f2_norm(N) + 0.4*z3_norm(N);

A = [1,2,1,2;
    2,1,2,1;
    1,-1,1,- 1;
    1.8 , 1.2 , -2.2 , -1.2;
    -3,-2,0,0;
    -1,-2,-1,-2];
b = [6; 8; 4; 0; -5; 5.999];

[N, f_opt] = fmincon(f, lb, A, b, [], [], lb,[], [],optimset('Display','iter'))