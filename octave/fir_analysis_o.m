%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Instituto Superior Tecnico 
%% Electronica II
%% Trabalho sobre filtro digital FIR
%% Autor: Jose T. de Sousa
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all
close all

%read y from file and extract parameters
y = load ('y.dec');
Nsamples = length(y);
fs = Nsamples*100;


t = 1/fs : 1/fs : Nsamples/fs;
f = fs/Nsamples:fs/Nsamples:fs;


for i = 1:Nsamples
  %remove 2's complement
  if( y(i)>= 2^15)
    y(i) = y(i) - 2^16;
  end
  %convert back to float
  y(i) = y(i) / 2^12;
end

%plot time response
plot(t*1000,y);
xlabel('Time [ms]');
ylabel('Filter response');

%plot magnitude response
figure;
plot(f/1000,20*log10(abs(fft(y))/Nsamples));
xlabel('Frequency [kHz]');
ylabel('Magnitude spectrum [dB]');

%plot phase response
figure;
plot(f/1000,(angle(fft(y))));
xlabel('Frequency [kHz]');
ylabel('Phase spectrum [rad]');
