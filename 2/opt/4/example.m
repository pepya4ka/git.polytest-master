function example
% ���������� 

S = 8;
N = 4;                                                          % ����� ������ � ����
M = 3;                                                          % ����� �����


p = [0   0.1  0.3;...
    0.2  0    0.2;...
    0.4  0.1  0  ];

m = [5;4;7];                                               % ����� ������� � i� ����
c = [4 2 3];                                                % ����������� ����
a = [2;3;4];                                              % ���� ������������

%% ��������� ������������ w

for j = 1:M
    test(j,1) = 0;
end
test(1,1) = 1;

w = fsolve(@wfun,test);

    function F = wfun(w)
        for j = 1:M
            sum_t = 0;
            for i = 1:M
                sum_t = sum_t + w(i)*p(i,j);
            end
            F(j) = sum_t - w(j);
        end
        F = [F(1); F(2); F(3); sum(w) - 1];
    end

u =w;

%% find lambda
function [ lambda ] = findlambda(w,u)
    for i = 1:M
        P_old(i,1) = 1;
        u(i) = u(i)^a(i);
    end
        
    for r = 1:N
        % step 1
        for i = 1:M
            sum_1 = 0;
            for n = 1:r
                if (n >= m(i))  
                    u(i) = m(i)*u(i);
                else
                    u(i) = n*u(i);
                end
               
                sum_1 = sum_1 + (n/u(i))*P_old(i,n);
            end
          t(i) = sum_1;
        end

        % step 2
        s=0;
        for i = 1:M
            s = s + (w(i)*t(i))/w(1);  
        end
        lambda = r/s;
    
        % step 3
        for i = 1:M   
            if (n >= m(i))  
                u(i) = m(i)*u(i);
            else
                u(i) = n*u(i);
            end
            
            for n = 1:r
                P(i,n+1) = ((w(i)*lambda)/(w(1)*u(i)))*P_old(i,n);
            end
            
            sum = 0;
            for n = 1:r
                sum = sum + P(i,n);
            end
        
            P(i,1) = 1 - sum;

        end
        P_old = P;
    end  
end

%% �����������
for i = 1:M
    lb(i,1) = 0;
end

fun = @(x)(-findlambda(w,x));
% ����������� � ���������������� �����������, ������������� � ����������� �����
[my_u,fval] = fmincon(fun,w,[],[],c,S,lb,[],[],optimoptions('fmincon','Algorithm','sqp'))

end