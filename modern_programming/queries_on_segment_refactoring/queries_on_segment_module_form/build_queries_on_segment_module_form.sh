CPP_FILES="array_io.cpp array_generator.cpp array_max.cpp array_prefix_sum.cpp counting_sort.cpp interval_queries.cpp main.cpp"
APP=example

if [ -f $APP ]; then rm $APP
fi

g++ $CPP_FILES -o $APP

./$APP
