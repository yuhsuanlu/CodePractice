def sort_based_on_length(txt):
    txt_arr = txt.split()
    n = len(txt_arr)
    if n==0:
        return []
    txt_arr = sorted(txt_arr, key=lambda x: len(x))
    txt_str = ' '.join(txt_arr)
    return txt_str

def modify_case(txt):
    txt = txt.lower();
    txt = txt.capitalize()
    return txt

if __name__ == '__main__':
    txt = "Hello my friends. My name is Ashley."
    result = sort_based_on_length(txt)
    result = modify_case(result)
    print(result)
