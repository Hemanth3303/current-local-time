plugins {
	java
}

java {
	toolchain {
		languageVersion.set(JavaLanguageVersion.of(21))
	}
}

sourceSets {
	main {
		java.srcDirs("src")
	}
}

tasks.register<JavaExec>("run") {
	mainClass.set("CurrentTime")
	classpath = sourceSets["main"].runtimeClasspath
}