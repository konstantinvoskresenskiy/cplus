CPP_FILES="input.cpp main.cpp output.cpp sort.cpp"
APP=example

if [ -f $APP ]; then rm $APP
fi

g++ $CPP_FILES -o $APP

./$APP
