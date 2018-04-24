# base image
FROM php:5.6-apache
MAINTAINER lcube

# lib and php extensions
RUN apt-get update && apt-get install -y libpng12-dev libjpeg-dev libpq-dev libxml2-dev \
	&& docker-php-ext-configure gd --with-png-dir=/usr --with-jpeg-dir=/usr \
	&& docker-php-ext-install gd mbstring pdo_mysql zip \
	&& docker-php-ext-install opcache bcmath soap \
	&& rm -rf /var/lib/apt/lists/*

# drush install and dependencies
ENV DRUSH_VERSION 8.1.16
RUN curl -fsSL -o /usr/local/bin/drush "https://github.com/drush-ops/drush/releases/download/$DRUSH_VERSION/drush.phar" && \
  chmod +x /usr/local/bin/drush
RUN drush core-status
RUN apt-get update && apt-get install -y mysql-client

# set vhost
COPY ./.docker/apache-php/vhost.conf /etc/apache2/sites-enabled/000-default.conf

# restart apache
RUN a2enmod rewrite

# working directory
WORKDIR /var/www/html