find . -type f -o -type d -o -type d -name '.*' | egrep -v '~|#' | wc -l | tr -d ' '
