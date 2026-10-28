
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CSS Box Model - Lesson Completed</title>
    <link rel="stylesheet" href="style.css">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link href="https://fonts.googleapis.com/css2?family=Nunito:wght@400;600;700;800;900&display=swap" rel="stylesheet">
</head>
<body>

    <main class="poster">

        <div class="decor dots dots-left"></div>
        <div class="decor dots dots-right"></div>

        <header class="heading">
            <div class="tech-icon css-icon">3</div>

            <div class="heading-text">
                <h1><span class="spark">›</span> CSS <span class="spark">‹</span></h1>
                <h2>BOX MODEL</h2>
                <span class="completed">LESSON COMPLETED!</span>
            </div>

            <div class="tech-icon code-icon">{ }</div>
        </header>

        <section class="follow">
            <div class="profile-icon">
                <span>♟</span>
                <small>+</small>
            </div>

            <div class="follow-text">
                <h3>FOLLOW</h3>
                <p>FOR MORE CONTENT!</p>
                <div class="underline"></div>
            </div>

            <div class="heart-icon">♥</div>
        </section>

        <section class="features">
            <div class="feature">
                <span class="feature-icon">&lt;/&gt;</span>
                <p>Easy to Understand</p>
            </div>

            <div class="feature">
                <span class="feature-icon">◉</span>
                <p>Practical Examples</p>
            </div>

            <div class="feature">
                <span class="feature-icon">♧</span>
                <p>Visual Learning</p>
            </div>

            <div class="feature">
                <span class="feature-icon">♟</span>
                <p>Regular Updates</p>
            </div>
        </section>

        <section class="next-lesson">
            <div class="rocket">🚀</div>

            <div class="lesson-content">
                <span class="next-label">COMING UP NEXT</span>

                <h3>
                    CSS #09 <span>|</span>
                    <strong>DISPLAY</strong>
                </h3>

                <p>Learn how CSS display property works</p>
                <p class="lesson-description">
                    and how it controls the layout behavior of elements.
                </p>
            </div>

            <div class="screen-icon">▣</div>
        </section>

        <footer class="poster-footer">
            <p>Let's build the web,</p>
            <p>one property at a time! <span>✦</span></p>
        </footer>

    </main>

</body>
</html>


* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    min-height: 100vh;
    display: flex;
    justify-content: center;
    align-items: center;
    padding: 30px 15px;
    background: #f4f0e9;
    font-family: "Nunito", sans-serif;
    color: #5e6064;
}

.poster {
    position: relative;
    isolation: isolate;
    overflow: hidden;
    width: 100%;
    max-width: 650px;
    min-height: 740px;
    padding: 95px 38px 35px;
    background: #fffdf8;
    border: 1px solid #eee8e0;
    border-radius: 8px;
    box-shadow: 0 12px 35px #6b5b4b15;
}

.heading,
.follow,
.features,
.next-lesson,
.poster-footer {
    position: relative;
    z-index: 1;
}

/* Decorative dots */

.dots {
    position: absolute;
    width: 35px;
    height: 35px;
    opacity: 0.45;
    background-image: radial-gradient(#aaa5a0 1.5px, transparent 1.5px);
    background-size: 8px 8px;
}

.dots-left {
    top: 75px;
    left: 35px;
}

.dots-right {
    top: 85px;
    right: 35px;
}

/* Main heading */

.heading {
    display: flex;
    justify-content: center;
    align-items: center;
    gap: 16px;
    text-align: center;
}

.tech-icon {
    display: flex;
    align-items: center;
    justify-content: center;
    flex-shrink: 0;
    width: 60px;
    height: 60px;
    font-weight: 900;
    font-size: 30px;
    box-shadow: 0 3px 4px #00000012;
}

.css-icon {
    color: white;
    background: #65b8d0;
    border: 4px solid #478eaa;
    border-radius: 8px 8px 15px 15px;
    transform: rotate(-7deg);
}

.code-icon {
    color: white;
    background: #9d8acb;
    border-radius: 10px;
    font-size: 23px;
    transform: rotate(10deg);
}

.heading h1 {
    font-size: clamp(38px, 7vw, 58px);
    line-height: 1;
    font-weight: 900;
    letter-spacing: 1px;
}

.spark {
    font-size: 25px;
    color: #aaa2a0;
    vertical-align: middle;
}

.heading h2 {
    color: #8178a9;
    font-size: clamp(25px, 5vw, 38px);
    line-height: 1.2;
    font-weight: 900;
}

.completed {
    display: inline-block;
    margin-top: 10px;
    padding: 5px 17px;
    color: white;
    background: #8276ad;
    border-radius: 30px;
    font-size: 13px;
    font-weight: 900;
    letter-spacing: 0.5px;
}

/* Follow section */

.follow {
    display: flex;
    align-items: center;
    justify-content: center;
    gap: 15px;
    margin: 45px 0 25px;
}

.profile-icon {
    position: relative;
    display: grid;
    place-items: center;
    width: 65px;
    height: 65px;
    flex-shrink: 0;
    color: white;
    background: #8d9bd0;
    border-radius: 50%;
    font-size: 35px;
}

.profile-icon small {
    position: absolute;
    bottom: 0;
    right: -2px;
    display: grid;
    place-items: center;
    width: 22px;
    height: 22px;
    background: #7568a5;
    border-radius: 50%;
    font-size: 17px;
}

.follow-text h3 {
    color: #66676c;
    font-size: 34px;
    font-weight: 900;
    line-height: 1;
}

.follow-text p {
    color: #656660;
    font-size: clamp(17px, 3.5vw, 24px);
    font-weight: 900;
    white-space: nowrap;
}

.underline {
    height: 3px;
    margin-top: 7px;
    background: #aaa6a0;
    transform: rotate(-1deg);
}

.heart-icon {
    align-self: flex-start;
    padding: 8px 12px;
    color: white;
    background: #d98d9c;
    border-radius: 8px;
    font-size: 22px;
    transform: rotate(8deg);
}

/* Four feature columns */

.features {
    display: grid;
    grid-template-columns: repeat(4, 1fr);
    padding: 16px 5px;
    margin-bottom: 32px;
    border: 1px solid #e9e5df;
    border-radius: 18px;
    background: #fffefa;
}

.feature {
    display: flex;
    align-items: center;
    flex-direction: column;
    justify-content: center;
    gap: 10px;
    min-width: 0;
    padding: 0 4px;
    text-align: center;
}

.feature + .feature {
    border-left: 1px solid #eee9e4;
}

.feature-icon {
    display: grid;
    place-items: center;
    width: 38px;
    height: 38px;
    color: white;
    background: #9b91c7;
    border-radius: 50%;
    font-size: 17px;
    font-weight: 800;
}

.feature p {
    font-size: 10px;
    font-weight: 700;
    line-height: 1.4;
}

/* Next lesson card */

.next-lesson {
    display: flex;
    align-items: center;
    gap: 14px;
    padding: 24px 16px;
    min-height: 155px;
    background: #fffdf8;
    border: 1px solid #eee8df;
    border-radius: 20px;
    box-shadow: 0 5px 15px #6b5b4b0b;
}

.rocket {
    font-size: 58px;
    transform: rotate(-20deg);
}

.lesson-content {
    flex: 1;
    min-width: 0;
}

.next-label {
    display: inline-block;
    margin-bottom: 8px;
    padding: 4px 12px;
    color: white;
    background: #8176aa;
    border-radius: 15px;
    font-size: 12px;
    font-weight: 900;
}

.lesson-content h3 {
    color: #65645e;
    font-size: clamp(17px, 3.2vw, 26px);
    font-weight: 900;
    white-space: nowrap;
}

.lesson-content h3 span {
    margin: 0 3px;
    color: #aaa49c;
}

.lesson-content h3 strong {
    color: #8278ac;
}

.lesson-content p {
    margin-top: 8px;
    font-size: 11px;
    font-weight: 700;
}

.lesson-content .lesson-description {
    margin-top: 3px;
}

.screen-icon {
    display: grid;
    place-items: center;
    width: 48px;
    height: 48px;
    flex-shrink: 0;
    color: white;
    background: #8276b1;
    border-radius: 50%;
    font-size: 25px;
}

/* Bottom decorative waves */

.poster-footer {
    margin: 30px -38px -35px;
    padding: 45px 10px 35px;
    text-align: center;
    font-family: "Nunito", cursive;
    font-size: 19px;
    font-style: italic;
    font-weight: 800;
    background:
        radial-gradient(ellipse at 0% 110%,
            #a8a5dc 0%, #c6c5e8 30%, transparent 31%),
        radial-gradient(ellipse at 100% 110%,
            #9992d0 0%, #c3bde9 32%, transparent 33%);
}

.poster-footer span {
    color: #aaa0c7;
}

/* Mobile responsive */

@media (max-width: 480px) {
    .poster {
        min-height: auto;
        padding: 65px 18px 25px;
    }

    .heading {
        gap: 9px;
    }

    .tech-icon {
        width: 40px;
        height: 44px;
        font-size: 22px;
    }

    .code-icon {
        font-size: 16px;
    }

    .follow {
        gap: 10px;
        margin-top: 35px;
    }

    .profile-icon {
        width: 48px;
        height: 48px;
        font-size: 27px;
    }

    .follow-text h3 {
        font-size: 27px;
    }

    .heart-icon {
        padding: 5px 8px;
        font-size: 17px;
    }

    .features {
        margin-bottom: 22px;
        padding: 13px 2px;
    }

    .feature p {
        font-size: 8px;
    }

    .feature-icon {
        width: 32px;
        height: 32px;
        font-size: 14px;
    }

    .next-lesson {
        gap: 8px;
        padding: 18px 9px;
    }

    .rocket {
        font-size: 35px;
    }

    .screen-icon {
        width: 34px;
        height: 34px;
        font-size: 18px;
    }

    .lesson-content p {
        font-size: 9px;
    }

    .poster-footer {
        margin: 25px -18px -25px;
    }
}
