%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Instituto Superior Tecnico 
%% Electronica II
%% Trabalho sobre filtro digital FIR
%% Autor: Jose T. de Sousa
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%get filter order from environment
N = base2dec(getenv('N'), 10)
if(isempty(N))
%default
  N=10
end

%get sample rate  from environment
fs = base2dec(getenv('fs'), 10)
if(isempty(fs))
%default
  fs=58000 
end

%get cut frequency from environment
fc = base2dec(getenv('fc'), 10)
if(isempty(fc))
%default
  fc=3000 
end

%number of samples in analysis
Nsamples = fs/100

%time axis
t = 1/fs : 1/fs : Nsamples/fs; 


%create input signal: uncomment the one you want
%1) sum of 2 sine waves
% fin1 = 1000; %Hz
% fin2 = 12000; %Hz
% x1 = 2*sin(2*pi*fin1*t);
% x2 = 2*sin(2*pi*fin2*t);
% x = x1+x2;



%2) dirac pulse
 x = zeros(1,Nsamples);
 x(1) = 1;

%3) step function
%x = ones(1, Nsamples);
%%
%convert to Q12 format
x = round(x * 2^12);
%2's complement for 16 bits
for i=1:length(x)
  if x(i)<0
    x(i) = 2^16+x(i);
  end
end

%convert to hex with 4 digits
x = dec2hex(x,4);

%print input signal to file
fx = fopen ('x.hex', 'w');
for i = 1:Nsamples
  fprintf(fx, '%s\n', x(i,1:4));
end
fclose (fx);
%%
%make truncated low pass filter response 
h = 2*fc/fs*sinc( 2*fc * ( t -   (Nsamples + rem(N,2))/2/fs  ) );
ht = h(Nsamples/2-floor(N/2):Nsamples/2+ceil(N/2));
%%
%convert to Q12
ht = round(ht * 2^12);
%2's complement for 16 bits
for i=1:length(ht)
  if ht(i)<0
    ht(i) = 2^16+ht(i);
  end
end

%%

ht = dec2hex(ht,4);

%print impulse response to file
fh = fopen ('h.hex', 'w');
for i = 1:N+1
  fprintf(fh, '%s\n', ht(i,1:4));
end
fclose (fh);


