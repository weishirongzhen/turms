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

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/user/relationship/delete_relationship_group_request.proto

package im.turms.server.common.access.client.dto.request.user.relationship;

/**
 * Protobuf type {@code im.turms.proto.DeleteRelationshipGroupRequest}
 */
public final class DeleteRelationshipGroupRequest extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:im.turms.proto.DeleteRelationshipGroupRequest)
    DeleteRelationshipGroupRequestOrBuilder {
private static final long serialVersionUID = 0L;
  // Use DeleteRelationshipGroupRequest.newBuilder() to construct.
  private DeleteRelationshipGroupRequest(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private DeleteRelationshipGroupRequest() {
  }

  @java.lang.Override
  @SuppressWarnings({"unused"})
  protected java.lang.Object newInstance(
      UnusedPrivateParameter unused) {
    return new DeleteRelationshipGroupRequest();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private DeleteRelationshipGroupRequest(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    int mutable_bitField0_ = 0;
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          case 8: {

            groupIndex_ = input.readInt32();
            break;
          }
          case 16: {
            bitField0_ |= 0x00000001;
            targetGroupIndex_ = input.readInt32();
            break;
          }
          default: {
            if (!parseUnknownField(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_DeleteRelationshipGroupRequest_descriptor;
  }

  @java.lang.Override
  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_DeleteRelationshipGroupRequest_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest.class, im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest.Builder.class);
  }

  private int bitField0_;
  public static final int GROUP_INDEX_FIELD_NUMBER = 1;
  private int groupIndex_;
  /**
   * <code>int32 group_index = 1;</code>
   * @return The groupIndex.
   */
  @java.lang.Override
  public int getGroupIndex() {
    return groupIndex_;
  }

  public static final int TARGET_GROUP_INDEX_FIELD_NUMBER = 2;
  private int targetGroupIndex_;
  /**
   * <code>optional int32 target_group_index = 2;</code>
   * @return Whether the targetGroupIndex field is set.
   */
  @java.lang.Override
  public boolean hasTargetGroupIndex() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <code>optional int32 target_group_index = 2;</code>
   * @return The targetGroupIndex.
   */
  @java.lang.Override
  public int getTargetGroupIndex() {
    return targetGroupIndex_;
  }

  private byte memoizedIsInitialized = -1;
  @java.lang.Override
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  @java.lang.Override
  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    if (groupIndex_ != 0) {
      output.writeInt32(1, groupIndex_);
    }
    if (((bitField0_ & 0x00000001) != 0)) {
      output.writeInt32(2, targetGroupIndex_);
    }
    unknownFields.writeTo(output);
  }

  @java.lang.Override
  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (groupIndex_ != 0) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt32Size(1, groupIndex_);
    }
    if (((bitField0_ & 0x00000001) != 0)) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt32Size(2, targetGroupIndex_);
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest)) {
      return super.equals(obj);
    }
    im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest other = (im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest) obj;

    if (getGroupIndex()
        != other.getGroupIndex()) return false;
    if (hasTargetGroupIndex() != other.hasTargetGroupIndex()) return false;
    if (hasTargetGroupIndex()) {
      if (getTargetGroupIndex()
          != other.getTargetGroupIndex()) return false;
    }
    if (!unknownFields.equals(other.unknownFields)) return false;
    return true;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + GROUP_INDEX_FIELD_NUMBER;
    hash = (53 * hash) + getGroupIndex();
    if (hasTargetGroupIndex()) {
      hash = (37 * hash) + TARGET_GROUP_INDEX_FIELD_NUMBER;
      hash = (53 * hash) + getTargetGroupIndex();
    }
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  @java.lang.Override
  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  @java.lang.Override
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * Protobuf type {@code im.turms.proto.DeleteRelationshipGroupRequest}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:im.turms.proto.DeleteRelationshipGroupRequest)
      im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequestOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_DeleteRelationshipGroupRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_DeleteRelationshipGroupRequest_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest.class, im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest.Builder.class);
    }

    // Construct using im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
      }
    }
    @java.lang.Override
    public Builder clear() {
      super.clear();
      groupIndex_ = 0;

      targetGroupIndex_ = 0;
      bitField0_ = (bitField0_ & ~0x00000001);
      return this;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_DeleteRelationshipGroupRequest_descriptor;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest getDefaultInstanceForType() {
      return im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest.getDefaultInstance();
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest build() {
      im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest buildPartial() {
      im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest result = new im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest(this);
      int from_bitField0_ = bitField0_;
      int to_bitField0_ = 0;
      result.groupIndex_ = groupIndex_;
      if (((from_bitField0_ & 0x00000001) != 0)) {
        result.targetGroupIndex_ = targetGroupIndex_;
        to_bitField0_ |= 0x00000001;
      }
      result.bitField0_ = to_bitField0_;
      onBuilt();
      return result;
    }

    @java.lang.Override
    public Builder clone() {
      return super.clone();
    }
    @java.lang.Override
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.setField(field, value);
    }
    @java.lang.Override
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return super.clearField(field);
    }
    @java.lang.Override
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return super.clearOneof(oneof);
    }
    @java.lang.Override
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return super.setRepeatedField(field, index, value);
    }
    @java.lang.Override
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.addRepeatedField(field, value);
    }
    @java.lang.Override
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest) {
        return mergeFrom((im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest other) {
      if (other == im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest.getDefaultInstance()) return this;
      if (other.getGroupIndex() != 0) {
        setGroupIndex(other.getGroupIndex());
      }
      if (other.hasTargetGroupIndex()) {
        setTargetGroupIndex(other.getTargetGroupIndex());
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    @java.lang.Override
    public final boolean isInitialized() {
      return true;
    }

    @java.lang.Override
    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }
    private int bitField0_;

    private int groupIndex_ ;
    /**
     * <code>int32 group_index = 1;</code>
     * @return The groupIndex.
     */
    @java.lang.Override
    public int getGroupIndex() {
      return groupIndex_;
    }
    /**
     * <code>int32 group_index = 1;</code>
     * @param value The groupIndex to set.
     * @return This builder for chaining.
     */
    public Builder setGroupIndex(int value) {
      
      groupIndex_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>int32 group_index = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearGroupIndex() {
      
      groupIndex_ = 0;
      onChanged();
      return this;
    }

    private int targetGroupIndex_ ;
    /**
     * <code>optional int32 target_group_index = 2;</code>
     * @return Whether the targetGroupIndex field is set.
     */
    @java.lang.Override
    public boolean hasTargetGroupIndex() {
      return ((bitField0_ & 0x00000001) != 0);
    }
    /**
     * <code>optional int32 target_group_index = 2;</code>
     * @return The targetGroupIndex.
     */
    @java.lang.Override
    public int getTargetGroupIndex() {
      return targetGroupIndex_;
    }
    /**
     * <code>optional int32 target_group_index = 2;</code>
     * @param value The targetGroupIndex to set.
     * @return This builder for chaining.
     */
    public Builder setTargetGroupIndex(int value) {
      bitField0_ |= 0x00000001;
      targetGroupIndex_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>optional int32 target_group_index = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearTargetGroupIndex() {
      bitField0_ = (bitField0_ & ~0x00000001);
      targetGroupIndex_ = 0;
      onChanged();
      return this;
    }
    @java.lang.Override
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFields(unknownFields);
    }

    @java.lang.Override
    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:im.turms.proto.DeleteRelationshipGroupRequest)
  }

  // @@protoc_insertion_point(class_scope:im.turms.proto.DeleteRelationshipGroupRequest)
  private static final im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest();
  }

  public static im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<DeleteRelationshipGroupRequest>
      PARSER = new com.google.protobuf.AbstractParser<DeleteRelationshipGroupRequest>() {
    @java.lang.Override
    public DeleteRelationshipGroupRequest parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return new DeleteRelationshipGroupRequest(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<DeleteRelationshipGroupRequest> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<DeleteRelationshipGroupRequest> getParserForType() {
    return PARSER;
  }

  @java.lang.Override
  public im.turms.server.common.access.client.dto.request.user.relationship.DeleteRelationshipGroupRequest getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}
