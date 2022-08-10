
:root {
  /* fonts */
  --main-font: Roboto, sens-serif;
  --secondary-font: Raleway, sens-serif;
  /* text colors */
  --main-tx-cl: #212121;
  --ac-tx-cl: #2196f3;
  --text-sm-cl: #757575;
  /* bd colors */
  --gr-bd-cl: #e5e5e5;
  --dr-bd-cl: #2f303a;
  --lr-bd-cl: #ffffff;
}

  /* others */

body {
  font-family: var(--main-font);
  color: var(--main-tx-cl);
  background-color: var(--lr-bd-cl);
}
/* resets */
h1 h2 h3 h3 h4 h5 h6 p {
  margin: 0;
  padding: 0;
}
.link {
  margin: 0;
  padding: 0;
  display: flex;
    align-items: center;
    justify-content: center;
    text-decoration: none;
      color: currentColor;
transition-duration: 250ms;
  transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
  }
.list {
  list-style: none;
  margin: 0;
  padding: 0;
      display: flex;
      align-items: center;
      justify-content: center;
      gap: 30px;
       
}
/* base styles */
.section {
  padding-top: 94px;
  padding-bottom: 94px;
}

.container {
 
  width: 1200px;
  padding-left: 15px;
  padding-right: 15px;
  margin-left: auto;
  margin-right: auto;
}
.title{
  margin-top: 0;
    margin-bottom: 50px;
    font-family: inherit;
    font-style: normal;
    font-weight: 700;
    font-size: 36px;
    line-height: 1.16;
    text-align: center;
    letter-spacing: 0.03em;
    color: var(--main-tx-cl);
}

.btn {
  display: flex;
    align-items: center;
    justify-content: center;
  font-family: var(--main-font);
  font-style: normal;
  font-weight: 700;
  font-size: 16px;
  line-height: 1.87;
  color: var(--lr-bd-cl);
  background-color: var(--ac-tx-cl);
  cursor: pointer;
  border: none;
    border-radius: 4px;
    
}
.icon{
  display: flex;
    align-items: center;
    justify-content: center;
}
/* section header*/

.header {
  background-color: var(--lr-bd-cl);
}
.container__header {
  display: flex;
  justify-content: space-between;
  padding-top: 24px;
  padding-bottom: 24px;
}
/* nav*/
.nav {
  padding: 0;
  margin: 0;
  display: flex;
  align-items: center;
}
.nav__list {
  gap: 50px;
  
}
.current__link {
  position: relative;
}

.current__link::after {
  bottom: -32px;
  position: absolute;
  content: '';
  display: block;
  height: 4px;
  width: 100%;
  background-color: var(--ac-tx-cl);
  border-radius: 2px;
}

/* logo */
.logo__web {
  color: var(--ac-tx-cl);
  text-transform: capitalize;
  
}
.nav__logo {
  text-decoration: none;
 margin-right: 93px;
  font-family: var(--secondary-font);
  font-style: normal;
  font-weight: 700;
  font-size: 26px;
  line-height: 1.19;
  letter-spacing: 0.03em;
  color: currentColor;
}
/* info*/

.info__conteiner {
  display: flex;
  align-items: center;
 
}
.info__list {
  gap: 50px;
}

.info__link--icon {
  margin-right: 10px;
  fill: currentColor;
}
.nav__link,
.info__link {
  text-transform: lowercase;
  font-family: inherit;
  font-style: normal;
  font-weight: 500;
  font-size: 14px;
  line-height: 1.14;
  letter-spacing: 0.02em;
  color: var(--text-sm-cl);
  text-align: center;
  text-transform: capitalize;
  transition-property: color;
}


.nav__link:hover,
.nav__link:focus,
.info__link:hover,
.info__link:focus
 {
  color: var(--ac-tx-cl);
}

/* main */

/* business */
.biz {
  background-image: linear-gradient(to right, rgba(47, 48, 58, 0.4), rgba(47, 48, 58, 0.4)),
    url(../images/im_photo/fon.jpg);
  background-color: var(--dr-bd-cl);
  text-align: center;
  padding-top: 200px;
  padding-bottom: 200px;
}

.biz__title {
  width: 696px;
  display: flex;
  align-items: center;
  margin: 0 auto;
  margin-bottom: 30px;
  font-weight: 900;
  font-size: 44px;
  line-height: 1.36;
  text-align: center;
  letter-spacing: 0.06em;
  color: var(--lr-bd-cl);
  text-transform: uppercase;
}
.biz__btn {
  min-width: 200px;
  min-height: 50px;
  padding: 10px 32px;
  
  margin: 0 auto;
  text-align: center;
  letter-spacing: 0.06em;
  border: none;
  border-radius: 4px;
}

/* features */
/*card*/
.card {
  background: #f5f4fa;
  border-radius: 4px;
  margin-bottom: 30px;
    width: 270px;
    height: 120px;
}
.card__title {
  margin: 0;
  margin-bottom: 10px;
  font-size: 14px;
  line-height: 1.14;
  letter-spacing: 0.03em;
  color: var(--main-tx-cl);
  text-transform: uppercase;
}

.card__info {
  margin: 0;
  font-family: inherit;
  font-style: normal;
  font-weight: 270px;
  font-size: 14px;
  line-height: 1.71;
  letter-spacing: 0.03em;
  color: var(--text-sm-cl);
}

/* about */
.about{
  padding-top: 0;
}

.about__item {
  position: relative;
}

.about__item>.pictures__overlay {
  position: absolute;
  bottom: 0%;
}

.pictures {
  width: 370px;
  height: 70px;
  background-color: rgba(47, 48, 58, 0.8);
}

.pictures__title {
  margin: 0;
  font-family: inherit;
  font-style: normal;
  font-weight: 700;
  font-size: 14px;
  line-height: 16px;
  text-align: center;
  letter-spacing: 0.03em;
  text-transform: uppercase;
  color: var(--lr-bd-cl);
}

/* team*/
.team {
  background-color: #f5f4fa;
}

.team__subtitle {
  margin-top: 0;
  margin-bottom: 10px;
  font-family: inherit;
  font-style: normal;
  font-weight: 500;
  font-size: 16px;
  line-height: 1.18;
  letter-spacing: 0.03em;
  color: var(--main-tx-cl);
  text-transform: capitalize;
}
.team__job {
  margin: 0;
  margin-bottom: 16px;
  font-family: inherit;
  font-style: normal;
  font-weight: 400;
  font-size: 16px;
  line-height: 1.18;
  letter-spacing: 0.03em;
  color: var(--text-sm-cl);
}

.team__wrapper {
  margin-top: 0;
  padding-top: 30px;
  padding-bottom: 30px;
  text-align: center;
  background-color: var(--lr-bd-cl);
  border-top: none;
  border-radius: 0px 0px 4px 4px;
  box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.12), 0px 1px 1px rgba(0, 0, 0, 0.14),
    0px 2px 1px rgba(0, 0, 0, 0.2);
}


/*social*/
.social__icon {
  gap: 10px;
}
.social__link {
      width: 44px;
        height: 44px;
  border-radius: 80%;
  transition-property: fill, background-color;
 
}
.social__link--img {
  fill: #afb1b8;
}
.social__link:hover,
.social__link:focus {
  background-color: var(--ac-tx-cl);
}
.social__link:hover .social__link--img,
.social__link:focus .socia__link--img {
  background-color: var(--ac-tx-cl);
  fill: var(--lr-bd-cl);
}

/*customers section*/

.company__link {
  width: 170px;
  height: 92px;
  border: 1px solid rgba(175, 177, 184, 1);
  border-radius: 4px;
  transition-property: border, border-radius;
}
.company__link--icon {
  fill: rgba(175, 177, 184, 1);
  transition-property: fill;
  transition-duration: 250ms;
  transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
}
.company__link:focus,
.company__link:hover {
  border: 1px solid rgba(33, 150, 243, 1);
  border-radius: 4px;
}

.company__link:focus .company__link--icon,
.company__link:hover .company__link--icon {
  fill: var(--ac-tx-cl);
}

/* footer*/
.footer {
  background-color: var(--dr-bd-cl);
  padding-top: 60px;
  padding-bottom: 60px;
}

.footer__container {
  align-items: baseline;
  width: 1200px;
  display: flex;
}

.nav__address {
  width: 231px;
  display: block;
  align-items: center;
  justify-content: center;
}
.logo__name {
  display: block;
  font-family: var(--main-tx-cl);
  font-style: normal;
  font-weight: 700;
  font-size: 26px;
  line-height: 1.19;
  letter-spacing: 0.03em;
  color: var(--lr-bd-cl);
}
.addrees {
  margin-top: 20px;
  font-family: inherit;
  font-style: normal;
  font-weight: 400;
  font-size: 14px;
  line-height: 1.71;
  letter-spacing: 0.03em;
  color: var(--lr-bd-cl);
}
.addrees__list{
  display: block;
}
.addrees__item {
  list-style: none;
  margin-top: 9px;
  margin-bottom: 9px;
}
.addrees__item:last-child {
  margin-bottom: 0;
}
.addrees__item--mail,
.addrees__item--phone {
  color: rgba(255, 255, 255, 0.6);
  text-decoration: none;
}
/*join*/

.join__conteiner {
  width: 206px;
  padding: 0;
  margin-left: 70px;
  display: inline-block;
  justify-content: center;
  align-items: center;
}
.join__title {
  margin: 0;
  margin-bottom: 20px;
  font-family: var(--main-font);
  font-style: normal;
  font-weight: 700;
  font-size: 14px;
  line-height: 16px;
  letter-spacing: 0.03em;
  text-transform: uppercase;
  color: #ffffff;
}
.join__list {
  gap: 10px;
}

.join__link {
    width: 44px;
      height: 44px;
  background-color: rgba(255, 255, 255, 0.1);
  border-radius: 50%;
  transition-property: background-color;
}
.join__link--icon {
  fill: var(--lr-bd-cl);
}

.join__link:focus,
.join__link:hover {
  background-color: #2196f3;
}
/* form*/
.form__footer {
  display: block;
width: 570px;
  margin-left: 93px;
}
.form__group {
  display: flex;
  margin-top: 20px;
}
.input__email {
  padding: 15px 16px;
  width: 358px;
  border: 1px solid rgba(255, 255, 255, 0.3);
  border-radius: 4px;
  outline: transparent;
  font-family: var(--main-font);
  font-style: normal;
  font-weight: 400;
  font-size: 16px;
  line-height: 20px;
  align-items: center;
  letter-spacing: 0.03em;
  color: rgba(255, 255, 255, 0.6);
  background-color: #2f303a;
  transition: border;
  transition-duration: 250ms;
  transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
}
.input__email:hover,
.input__email:focus {
  border: 1px solid var(--ac-tx-cl);
}
.input__btn {
  display: inline-flex;
  align-items: center;
  justify-content: center;
  font-size: 16px;
  line-height: 30px;
  letter-spacing: 0.06em;
  padding: 10px 28px;
  margin-left: 12px;
  width: 200px;
  border: none;
  border-radius: 4px;
}

/*portfolio*/
/*project*/
.header {
  border-bottom: 1px solid #ececec;
}

.visually-hidden {
  position: absolute;
  width: 1px;
  height: 1px;
  margin: -1px;
  border: 0;
  padding: 0;
  white-space: nowrap;
  clip-path: inset(100%);
  clip: rect(0 0 0 0);
  overflow: hidden;
}

.projects__btn {
  margin-bottom: 50px;
  padding: 6px 22px;
  font-weight: 500;
  line-height: 1.63;
  color: var(--main-tx-cl);
  background-color: #f5f4fa;
  transition-property: background-color, color;
  transition-duration: 250ms;
  transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
}
.projects__list {
  gap: 8px;

}
.projects__btn:hover {
  color: var(--lr-bd-cl);
  background-color: var(--ac-tx-cl);
}
/* potrtfolio list */


.portfolio__list{
  display: flex;
      grid-gap: 30px;
    flex-wrap: wrap;
}

.portfolio__item--link {
  color: var(--main-tx-cl);
  display: inline-block;
  transition-property: box-shadow;
}
.portfolio__item--link:hover {
  box-shadow: 0px 1px 1px rgba(0, 0, 0, 0.12), 0px 4px 4px rgba(0, 0, 0, 0.06),
    1px 4px 6px rgba(0, 0, 0, 0.16);
}

.wrapper {
  border: 1px solid #eeeeee;
  padding-top: 20px;
  padding-left: 24px;
  padding-right: 24px;
  padding-bottom: 20px;
}

.wrapper__title {
  display: block;
  margin: 0;
  padding-bottom: 4px;
  font-family: var(--main-font);
  font-weight: 700;
  font-size: 18px;
  line-height: 2;
  letter-spacing: 0.06em;
}
.wrapper__subtitle {
  margin: 0;
  font-family: var(--main-font);
  font-weight: 400;
  font-size: 16px;
  line-height: 1.67;
  letter-spacing: 0.03em;
  color: var(--text-sm-cl);
}
.overlay__element--img{
  display: block;
}
.overlay__element {
  position: relative;
  overflow: hidden;
}
.portfolio__item--link:hover .overlay {
  transform: translate(0);
}
.overlay {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  overflow: hidden;
  transform: translateY(100%);
  transition-property: transform;
  transition-duration: 250ms;
  transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
}
.overlay__text {
  padding: 64px 23px;
  font-family: var(--main-font);
  font-style: normal;
  font-weight: 400;
  font-size: 18px;
  line-height: 28px;
  letter-spacing: 0.03em;
  margin: 0;
  color: var(--lr-bd-cl);
  background-color: var(--ac-tx-cl);
}
/* Modal window*/
.backdrob {
  position: fixed;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background-color: rgba(0, 0, 0, 0.2);
  opacity: 1;
  transition: opacity 250ms cubic-bezier(0.4, 0, 0.2, 1),
    visibility 250ms cubic-bezier(0.4, 0, 0.2, 1);
}
.backdrob.is-hidden {
  visibility: hidden;
  opacity: 0;
  pointer-events: none;
}

.modal {
  position: absolute;
  padding: 40px;
  width: 528px;
  height: 581px;
  top: 50%;
  left: 50%;
  background-color: var(--lr-bd-cl);
  box-shadow: 0px 1px 3px rgba(0, 0, 0, 0.12), 0px 1px 1px rgba(0, 0, 0, 0.14),
    0px 2px 1px rgba(0, 0, 0, 0.2);
  border-radius: 4px;

  opacity: 1;
  transform: translate(-50%, -50%) scale(1);
  transition: transform 250ms cubic-bezier(0.4, 0, 0.2, 1),
    opasity 250ms cubic-bezier(0.4, 0, 0.2, 1), visibility 250ms cubic-bezier(0.4, 0, 0.2, 1);
}
.modal-btn {
  position: absolute;
  padding: 0;
  margin: 0;
  width: 30px;
  height: 30px;
  top: 8px;
  right: 8px;
  border-radius: 100%;
  border: 1px solid rgba(0, 0, 0, 0.1);
  background-color: var(--lr-bd-cl);
}
.modal-btn:hover,
.modal-btn:focus {
  fill: var(--ac-tx-cl);
}
.window-title {
  display: block;
  text-align: center;
  font-size: 20px;
  margin-bottom: 12px;
}
.register-group {
  margin-bottom: 20px;
}
.register-wrap {
  position: relative;
  display: block;
  margin-bottom: 10px;
}

.register-wrap:last-child {
  margin-bottom: 20px;
}
.register-wrap:hover .register-input__icon,
.register-wrap:focus-within .register-input__icon{
  fill: var(--ac-tx-cl);
}
.register-wrap__label {
  display: block;
  text-align: left;
  margin-bottom: 4px;
  font-family: var(--main-font);
  font-style: normal;
  letter-spacing: 0.01em;
  color: #757575;
  font-weight: 400;
  font-size: 12px;
  line-height: 14px;
}
.register {
  width: 100%;
  height: 40px;
  padding: 12px;
  padding-left: 40px;
  border: 1px solid rgba(33, 33, 33, 0.2);
  border-radius: 4px;
  outline: transparent;
}
.register-span {
  position: relative;
}
.register-input__icon {
  position: absolute;
  top: 50%;
  left: 5%;
  transform: translate(-50%, -50%);
  transition: fill 250ms cubic-bezier(0.4, 0, 0.2, 1);
}
.register-wrap:hover .register,
.register-wrap:focus-within .register{
  border: 1px solid var(--ac-tx-cl);
}

.feedback {
  height: 120px;
  resize: none;
  padding: 12px 16px;
  transition: border 250ms cubic-bezier(0.4, 0, 0.2, 1);
}
.checkbox-form {
  align-items: center;
  justify-content: center;
  gap: 7px;
  padding-left: 12px;
  font-family: var(--main-font);
  font-style: normal;
  font-weight: 400;
  font-size: 14px;
  line-height: 24px;
  letter-spacing: 0.03em;
  color: #757575;
}

.visually-hidden {
  position: absolute;
  white-space: nowrap;
  width: 1px;
  height: 1px;
  overflow: hidden;
  border: 0;
  padding: 0;
  clip: rect(0 0 0 0);
  clip-path: inset(50%);
  margin: -1px;
}
.checkbox-text__link {
  color: var(--ac-tx-cl);
}
.checkbox-input {
  background-color: transparent;
}

.checkbox-span__icon {
  position: absolute;
  top: -2px;
  left: -2px;
  opacity: 0;
}
.checkbox-span {
  position: relative;
  display: inline-block;
  width: 16px;
  height: 15px;
  border: 2px solid #212121;
  border-radius: 2px;
}

.checkbox-input:checked + .checkbox-span {
  border: 2px solid var(--ac-tx-cl);
  border-radius: 2px;
  background-color: var(--ac-tx-cl);
}
.checkbox-input:checked + .checkbox-span .checkbox-span__icon {
  fill: var(--lr-bd-cl);
  opacity: 1;
}
.checkbox-text {
  font-size: 14px;
  user-select: none;
  text-underline-position: under;
}
.submit-btn {
  padding: 10px 52px;
  margin: 30px auto;
  line-height: 30px;
    letter-spacing: 0.06em;
  transition: box-shadow 250ms cubic-bezier(0.4, 0, 0.2, 1);
}
.submit-btn:hover,
.submit-btn:focus {
  box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.15);
}
*/