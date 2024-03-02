while getopts 'ce:' flag; do
    case "$flag" in
        c)
            tar -cf "$2" "${@:3}"
            ;;
        e)
            tar -xf "$2"
            ;;
    esac
done