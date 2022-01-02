<script>
    import Tabs from './shared/Tabs.svelte'
    import Play from './components/Play.svelte'
    import Home from './components/Home.svelte'
    import About from './components/About.svelte'

    let items = ['Home', 'Play', 'About'];
    let activeItem = 'Home';

    const tabChange = (e) => {
        activeItem = e.detail;
    }
</script>

<main>
    <h1>Number Jack
        <a href="#"><img src="./images/dark-logo.png" alt="Logo-NumberJack" id="logo"/></a>
</h1>
    <Tabs {activeItem} {items} on:tabChange={tabChange} />

    {#if activeItem === 'Home'}
        <Home/>
    {:else if activeItem === 'Play'}
        <Play/>
    {:else if activeItem === 'About'}
        <About/>
    {/if}
</main>

<style>
	main {
		text-align: center;
        margin-block-start: 0em;
        margin-block-end: 0em;
        background-color:#010030;
        width:auto;
        height:auto;
        padding-bottom: 10%;
	}
    h1{
        cursor:pointer;
        color:#00ffff;
        font-size:75px;
        padding:0;
    }
    #logo{
        position:relative;
        right:480px;
        top:145px;
        height:120px;
        width:100px;
        cursor:pointer;
    }

</style>
