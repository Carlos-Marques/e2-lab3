%%
% yn = 0;
% 
% for i = 1:length(ht)
%     T(i) = T + ht(i) * Z;
% end

figure;
freqz(ht);
%%
figure;
plot(x);
xlabel('Samples');
ylabel('Filter Response');

%%
y = zeros(Nsamples,1);
for j = 1:length(x)
    for i = 1:length(ht)
        if(j-i > 0) 
            y(j) = y(j) + ht(i) * x(j-i);
        end

    end
%     if(j-8 > 0)
%         y(j) = ht(1) * x(j) + ht(2) * x(j-1) + ht(3) * x(j-2) + ht(4) * x(j-3) + ht(5) * x(j-4) + ht(6) * x(j-5) + ht(7) * x(j-6) + ht(8) * x(j-7) + ht(9) * x(j-8);
%     end
end
 
figure;
plot(y);
xlabel('Samples');
ylabel('Signal');
