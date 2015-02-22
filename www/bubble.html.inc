<style>
.bubblingG {
    position: absolute;
    top: 0;
    left: 0;
    text-align: center;
    padding-top: 50%;
    width: 100%;
    height: 100%;
    background-color: black;
    opacity: 0.5;
    color: gold;
    text-shadow: none;
}

.bubblingG span {
    display: inline-block;
    vertical-align: middle;
    width: 10px;
    height: 10px;
    margin: 25px auto;
    background: #000000;
    -moz-border-radius: 50px;
    -moz-animation: bubblingG 1.1s infinite alternate;
    -webkit-border-radius: 50px;
    -webkit-animation: bubblingG 1.1s infinite alternate;
    -ms-border-radius: 50px;
    -ms-animation: bubblingG 1.1s infinite alternate;
    -o-border-radius: 50px;
    -o-animation: bubblingG 1.1s infinite alternate;
    border-radius: 50px;
    animation: bubblingG 1.1s infinite alternate;
}

#bubblingG_1 {
    -moz-animation-delay: 0s;
    -webkit-animation-delay: 0s;
    -ms-animation-delay: 0s;
    -o-animation-delay: 0s;
    animation-delay: 0s;
}

#bubblingG_2 {
    -moz-animation-delay: 0.33s;
    -webkit-animation-delay: 0.33s;
    -ms-animation-delay: 0.33s;
    -o-animation-delay: 0.33s;
    animation-delay: 0.33s;
}

#bubblingG_3 {
    -moz-animation-delay: 0.66s;
    -webkit-animation-delay: 0.66s;
    -ms-animation-delay: 0.66s;
    -o-animation-delay: 0.66s;
    animation-delay: 0.66s;
}

@-moz-keyframes bubblingG {
    0% {
    width: 10px;
    height: 10px;
    background-color:#000000;
    -moz-transform: translateY(0);
    }

    100% {
    width: 24px;
    height: 24px;
    background-color:#FFFFFF;
    -moz-transform: translateY(-21px);
    }
}

@-webkit-keyframes bubblingG {
    0% {
    width: 10px;
    height: 10px;
    background-color:#000000;
    -webkit-transform: translateY(0);
    }

    100% {
    width: 24px;
    height: 24px;
    background-color:#FFFFFF;
    -webkit-transform: translateY(-21px);
    }
}

@-ms-keyframes bubblingG {
    0% {
    width: 10px;
    height: 10px;
    background-color:#000000;
    -ms-transform: translateY(0);
    }

    100% {
    width: 24px;
    height: 24px;
    background-color:#FFFFFF;
    -ms-transform: translateY(-21px);
    }
}

@-o-keyframes bubblingG {
    0% {
    width: 10px;
    height: 10px;
    background-color:#000000;
    -o-transform: translateY(0);
    }

    100% {
    width: 24px;
    height: 24px;
    background-color:#FFFFFF;
    -o-transform: translateY(-21px);
    }
}

@keyframes bubblingG {
    0% {
    width: 10px;
    height: 10px;
    background-color:#000000;
    transform: translateY(0);
    }

    100% {
    width: 24px;
    height: 24px;
    background-color:#FFFFFF;
    transform: translateY(-21px);
    }
}
</style>

<div id="bubble_div" class="bubblingG">
    <div id="bubble_msg">loading...</div>
    <span id="bubblingG_1"></span>
    <span id="bubblingG_2"></span>
    <span id="bubblingG_3"></span>
</div>
