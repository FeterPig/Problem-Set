#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double real_1, image_1, real_2, image_2;

    while (scanf("%lf %lf %lf %lf", &real_1, &image_1, &real_2, &image_2) != EOF)
    {
        // 近似0
        if (fabs(real_1) < 1e-6)
            real_1 = 0.0;
        if (fabs(image_1) < 1e-6)
            image_1 = 0.0;
        if (fabs(real_2) < 1e-6)
            real_2 = 0.0;
        if (fabs(image_2) < 1e-6)
            image_2 = 0.0;

        // 实部和虚部之间的符号
        char sign_1 = (image_1 >= 0) ? '+' : '-';
        double abs_image_1 = fabs(image_1);

        char sign_2 = (image_2 >= 0) ? '+' : '-';
        double abs_image_2 = fabs(image_2);

        // 计算结果

        // 加法
        double add_real = real_1 + real_2;
        double add_image = image_1 + image_2;

        // 减法
        double sub_real = real_1 - real_2;
        double sub_image = image_1 - image_2;

        // 乘法：(a+bi)(c+di) = (ac-bd) + (ad+bc)i
        double mul_real = real_1 * real_2 - image_1 * image_2;
        double mul_image = real_1 * image_2 + real_2 * image_1;

        // 除法：(a+bi) / (c+di) = (a+bi)(c-di) / (c²+d²) = (ac+bd) / (c²+d²) + (bc-ad)i / (c²+d²)
        double div_fenmu = real_2 * real_2 + image_2 * image_2;
        double div_real = (real_1 * real_2 + image_1 * image_2) / div_fenmu;
        double div_image = (image_1 * real_2 - real_1 * image_2) / div_fenmu;

        // 四舍五入!!!!!!!!!!!!
        add_real = round(add_real * 10) / 10.0;
        add_image = round(add_image * 10) / 10.0;
        sub_real = round(sub_real * 10) / 10.0;
        sub_image = round(sub_image * 10) / 10.0;
        mul_real = round(mul_real * 10) / 10.0;
        mul_image = round(mul_image * 10) / 10.0;
        div_real = round(div_real * 10) / 10.0;
        div_image = round(div_image * 10) / 10.0;

        // 绝对值小于10^-6就认为近似于零
        if (fabs(add_real) < 1e-6)
            add_real = 0.0;
        if (fabs(add_image) < 1e-6)
            add_image = 0.0;
        if (fabs(sub_real) < 1e-6)
            sub_real = 0.0;
        if (fabs(sub_image) < 1e-6)
            sub_image = 0.0;
        if (fabs(mul_real) < 1e-6)
            mul_real = 0.0;
        if (fabs(mul_image) < 1e-6)
            mul_image = 0.0;
        if (fabs(div_real) < 1e-6)
            div_real = 0.0;
        if (fabs(div_image) < 1e-6)
            div_image = 0.0;

        // 打印

        // 打印加法
        printf("(%.1f%c%.1fi) + (%.1f%c%.1fi) = ", real_1, sign_1, abs_image_1, real_2, sign_2, abs_image_2);
        if (fabs(add_real) < 1e-6 && fabs(add_image) < 1e-6)
        {
            printf("0.0\n");
        }
        else if (fabs(add_real) < 1e-6 && fabs(add_image) > 1e-6)
        {
            char add_sign = (add_image > 0) ? '+' : '-';
            printf("%c%.1fi\n", add_sign, fabs(add_image));
        }
        else
        {
            printf("%.1f", add_real);
            if (fabs(add_image) > 1e-6)
            {
                char add_sign = (add_image > 0) ? '+' : '-';
                printf("%c%.1fi\n", add_sign, fabs(add_image));
            }
            else
            {
                printf("\n");
            }
        }

        // 打印减法
        printf("(%.1f%c%.1fi) - (%.1f%c%.1fi) = ", real_1, sign_1, abs_image_1, real_2, sign_2, abs_image_2);
        if (fabs(sub_real) < 1e-6 && fabs(sub_image) < 1e-6)
        {
            printf("0.0\n");
        }
        else if (fabs(sub_real) < 1e-6 && fabs(sub_image) > 1e-6)
        {
            char sub_sign = (sub_image > 0) ? '+' : '-';
            printf("%c%.1fi\n", sub_sign, fabs(sub_image));
        }
        else
        {
            printf("%.1f", sub_real);
            if (fabs(sub_image) > 1e-6)
            {
                char sub_sign = (sub_image > 0) ? '+' : '-';
                printf("%c%.1fi\n", sub_sign, fabs(sub_image));
            }
            else
            {
                printf("\n");
            }
        }

        // 打印乘法
        printf("(%.1f%c%.1fi) * (%.1f%c%.1fi) = ", real_1, sign_1, abs_image_1, real_2, sign_2, abs_image_2);
        if (fabs(mul_real) < 1e-6 && fabs(mul_image) < 1e-6)
        {
            printf("0.0\n");
        }
        else if (fabs(mul_real) < 1e-6 && fabs(mul_image) > 1e-6)
        {
            char mul_sign = (mul_image > 0) ? '+' : '-';
            printf("%c%.1fi\n", mul_sign, fabs(mul_image));
        }
        else
        {
            printf("%.1f", mul_real);
            if (fabs(mul_image) > 1e-6)
            {
                char mul_sign = (mul_image > 0) ? '+' : '-';
                printf("%c%.1fi\n", mul_sign, fabs(mul_image));
            }
            else
            {
                printf("\n");
            }
        }

        // 打印除法
        printf("(%.1f%c%.1fi) / (%.1f%c%.1fi) = ", real_1, sign_1, abs_image_1, real_2, sign_2, abs_image_2);
        if (fabs(div_real) < 1e-6 && fabs(div_image) < 1e-6)
        {
            printf("0.0\n");
        }
        else if (fabs(div_real) < 1e-6 && fabs(div_image) > 1e-6)
        {
            char div_sign = (div_image > 0) ? '+' : '-';
            printf("%c%.1fi\n", div_sign, fabs(div_image));
        }
        else
        {
            printf("%.1f", div_real);
            if (fabs(div_image) > 1e-6)
            {
                char div_sign = (div_image > 0) ? '+' : '-';
                printf("%c%.1fi\n", div_sign, fabs(div_image));
            }
            else
            {
                printf("\n");
            }
        }
    }

    return 0;
}