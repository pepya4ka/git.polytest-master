clc; clearvars

a11 = 0.4*M11; b11 = 1.6*M11;
a12 = 0.4*M12; b12 = 1.6*M12;
a13 = 0.4*M13; b13 = 1.6*M13;
a26 = 0.4*M26; b26 = 1.6*M26;
a34 = 0.4*M34; b34 = 1.6*M34;
a41 = 0.4*M41; b41 = 1.6*M41;
a42 = 0.4*M42; b42 = 1.6*M42;
a45 = 0.4*M45; b45 = 1.6*M45;
a56 = 0.4*M56; b56 = 1.6*M56;
a57 = 0.4*M57; b57 = 1.6*M57;
a73 = 0.4*M73; b73 = 1.6*M73;
a74 = 0.4*M74; b74 = 1.6*M74;

W11 = P11*((exp(s*a11)-exp(s*b11))/((a11-b11)*s));
W12 = P12*((exp(s*a12)-exp(s*b12))/((a12-b12)*s));
W13 = P13*((exp(s*a13)-exp(s*b13))/((a13-b13)*s));
W26 = P26*((exp(s*a26)-exp(s*b26))/((a26-b26)*s));
W34 = P34*((exp(s*a34)-exp(s*b34))/((a34-b34)*s));
W41 = P41*((exp(s*a41)-exp(s*b41))/((a41-b41)*s));
W42 = P42*((exp(s*a42)-exp(s*b42))/((a42-b42)*s));
W45 = P45*((exp(s*a45)-exp(s*b45))/((a45-b45)*s));
W56 = P56*((exp(s*a56)-exp(s*b56))/((a56-b56)*s));
W57 = P57*((exp(s*a57)-exp(s*b57))/((a57-b57)*s));
W73 = P73*((exp(s*a73)-exp(s*b73))/((a73-b73)*s));
W74 = P74*((exp(s*a74)-exp(s*b74))/((a74-b74)*s));
 
We = ((W12W23W35W56+W12W24W45W56)/(1-W45W54-W23W32+W23W32W45W54));
 
We = simplify(We)
We0 = subs(We, 's', 0)  % We(0)
 
Me = We/We0;
 
m1 = diff(Me, 's');
m1 = subs(m1, 's', 0)

m2 = diff(Me, 's',2);
m2=subs(m2, 's', 0)

D = m2 - (m1)^2
