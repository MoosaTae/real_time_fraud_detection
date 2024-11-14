import os
import re

def process_file(filepath, suffix):
    with open(filepath, 'r') as f:
        content = f.read()
    
    # Skip if file contains header guards
    replacements = {
        'maximum': 'maximum_{}'.format(suffix),
        'rtGetInf': 'rtGetInf_{}'.format(suffix),
        'rtGetInfF': 'rtGetInfF_{}'.format(suffix),
        'rtGetMinusInf': 'rtGetMinusInf_{}'.format(suffix),
        'rtGetMinusInfF': 'rtGetMinusInfF_{}'.format(suffix),
        'rtGetNaN': 'rtGetNaN_{}'.format(suffix),
        'rtGetNaNF': 'rtGetNaNF_{}'.format(suffix),
        'rtNaN': 'rtNaN_{}'.format(suffix),
        'rtInf': 'rtInf_{}'.format(suffix),
        'rtMinusInf': 'rtMinusInf_{}'.format(suffix),
        'rtNaNF': 'rtNaNF_{}'.format(suffix),
        'rtInfF': 'rtInfF_{}'.format(suffix),
        'rtMinusInfF': 'rtMinusInfF_{}'.format(suffix),
        'rtIsInf': 'rtIsInf_{}'.format(suffix),
        'rtIsInfF': 'rtIsInfF_{}'.format(suffix),
        'rtIsNaN': 'rtIsNaN_{}'.format(suffix),
        'rtIsNaNF': 'rtIsNaNF_{}'.format(suffix)
    }
    
    lines = content.split('\n')
    new_lines = []
    
    for line in lines:
        if '#ifndef' in line or '#include' in line:
            new_lines.append(line)
            continue
            
        modified_line = line
        for old, new in replacements.items():
            # Match extern declarations
            pattern = r'extern\s+\w+\s+{}\b'.format(old)
            modified_line = re.sub(pattern, 'extern boolean_T {}'.format(new), modified_line)
            
            # Match function declarations/definitions
            pattern = r'\b{}\b(?=\s*[\(\{{])'.format(old)
            modified_line = re.sub(pattern, new, modified_line)
            
            # Match variable references
            pattern = r'\b{}\b'.format(old)
            modified_line = re.sub(pattern, new, modified_line)
            
        new_lines.append(modified_line)
    
    with open(filepath, 'w') as f:
        f.write('\n'.join(new_lines))

def main():
    base_dir = '/home/super/integration_system'
    
    # # Process predict directory
    # predict_dir = os.path.join(base_dir, 'src/predict')
    # for filename in os.listdir(predict_dir):
    #     if filename.endswith('.c'):
    #         filepath = os.path.join(predict_dir, filename)
    #         process_file(filepath, 'predict')
    
    # Process extract directory
    extract_dir = os.path.join(base_dir, 'src/extract')
    for filename in os.listdir(extract_dir):
        if filename.endswith('.c'):
            filepath = os.path.join(extract_dir, filename)
            process_file(filepath, 'extract')

if __name__ == '__main__':
    main()