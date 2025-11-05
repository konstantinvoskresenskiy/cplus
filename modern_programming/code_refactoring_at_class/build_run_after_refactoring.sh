CPP_FILES="after_refactoring.cpp"
APP=example

if [ -f $APP ]; then rm $APP
fi

g++ $CPP_FILES -o $APP

./$APP
