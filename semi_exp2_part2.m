amplitude = 4;
frequency = 1000;
period = 1 / frequency;


t = 0: 0.00001: 2 * period; 
y = amplitude * sin(2 * pi * frequency * t);

plot(t,y);
xlabel("t");
ylabel("y");
grid on;
