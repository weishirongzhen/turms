/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.server.common.property.env.common;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

/**
 * @author James Chen
 */
@AllArgsConstructor
@Builder(toBuilder = true)
@Data
@NoArgsConstructor
public class LoggingProperties {

    public static final boolean ENABLE_CONSOLE_APPENDER_DEFAULT_VALUE = false;
    public static final boolean ENABLE_FILE_APPENDER_DEFAULT_VALUE = true;

    private boolean enableConsoleAppender = ENABLE_CONSOLE_APPENDER_DEFAULT_VALUE;

    private boolean enableFileAppender = ENABLE_FILE_APPENDER_DEFAULT_VALUE;

}