clear all;
close all; 
clc;
format long g;

p =   [0 0.1 0.6 0.3;
       0.7 0 0.2 0.1;
       0.9 0 0 0.1;
       0.3 0.3 0.4 0];

M = 4;
N = 5;

lam_1_ = 3;

c = [2 2 2 2];
a = [1 1 1 1];
 
u = [1 1 1 1];

%% Initialize w

% A = p' - diag(ones(1, M));
% A(4, :) = [1; 1; 1; 1];
% b = [0; 0; 0; 1];
% w = inv(A) * b;
% w = w';

w = zeros(1,M);
w(1) = 1;
for i = 1 : M
     for j = 1 : M
        w(i) = w(i) + w(j) * p(j, i);
    end
end

w
 
%% Initialize u

for i = 1 : M
    u(i) = w(i) / (c(i) * w(1)) * lam_1_;
end

u

for iteration = 1 : 5
    %% Find L(N)
    [L_N, lam_1_N] = fl1(u, w, c, M, N);
    L_N_1 = fl1(u, w, c, M, N - 1);
    
    %% Find u1
    u(1) = lam_1_ / lam_1_N * u(1);
 
    %% Find u
    for i = 2 : M
       u(i) = u(1)  * (L_N(i) - L_N_1(i)) / (L_N(1) - L_N_1(1)) * (c(1) * a(1)) / (c(i) * a(i));
    end
    
    fprintf('Iteration #%d\nSumm u(i) = %f\nu(i) = [%f, %f, %f, %f]\n\n', iteration, sum(u), u(1), u(2), u(3), u(4));
end
