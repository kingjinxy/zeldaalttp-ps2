	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08006B12
sub_08006B12: @ 0X08006B12
	movs r1, r0
	lsrs r6, r3, #32
	movs r1, r0
	lsrs r7, r3, #32
	movs r1, r0
	lsrs r0, r4, #32
	movs r1, r0
	lsrs r1, r4, #32
	strh r1, [r0, #0]
	movs r0, r4
	movs r0, r0
	lsrs r2, r4, #32
	movs r0, r0
	lsrs r3, r4, #32
	movs r0, r0
	lsrs r4, r4, #32
	movs r0, r0
	lsrs r5, r4, #32
	movs r0, r0
	lsrs r6, r4, #32
	movs r0, r0
	lsrs r7, r4, #32
	movs r0, r0
	lsrs r0, r5, #32
	movs r0, r0
	lsrs r1, r5, #32
	strh r0, [r0, #0]
	movs r0, r4
	movs r0, r0
	lsls r1, r5, #10
	movs r0, r0
	lsls r3, r5, #10
	movs r0, r0
	lsls r5, r5, #10
	movs r0, r0
	.4byte 0x8000ffac
	movs r4, r0
	movs r0, r0
	lsls r6, r5, #10
	movs r1, r0
	lsls r0, r6, #10
	movs r1, r0
	lsls r2, r6, #10
	movs r1, r0
	.4byte 0x8001ffb1
	movs r4, r0
	movs r0, r0
	lsls r3, r6, #10
	movs r0, r0
	lsls r5, r6, #10
	movs r0, r0
	lsls r7, r6, #10
	movs r0, r0
	.4byte 0x8000ffb6
	movs r4, r0
	movs r0, r0
	lsls r0, r7, #26
	movs r0, r0
	lsls r1, r7, #26
	movs r0, r0
	lsls r2, r7, #26
	movs r0, r0
	lsls r3, r7, #26
	movs r0, r0
	lsls r4, r7, #26
	movs r0, r0
	lsls r5, r7, #26
	movs r0, r0
	lsls r6, r7, #26
	movs r0, r0
	lsls r7, r7, #26
	strh r0, [r0, #0]
	movs r0, r4
	movs r0, r0
	lsls r0, r0, #27
	movs r1, r0
	lsls r1, r0, #27
	movs r1, r0
	lsls r2, r0, #27
	movs r1, r0
	lsls r3, r0, #27
	movs r1, r0
	lsls r4, r0, #27
	movs r1, r0
	lsls r5, r0, #27
	movs r1, r0
	lsls r6, r0, #27
	movs r1, r0
	lsls r7, r0, #27
	strh r1, [r0, #0]
	movs r0, r4
	lsls r0, r1, #27
	movs r0, r0
	lsls r1, r1, #27
	movs r0, r0
	lsls r2, r1, #27
	movs r0, r0
	lsls r3, r1, #27
	movs r0, r0
	lsls r4, r1, #27
	movs r0, r0
	lsls r5, r1, #27
	movs r0, r0
	lsls r6, r1, #27
	movs r0, r0
	lsls r7, r1, #27
	strh r0, [r0, #0]
	movs r0, r4
	lsls r2, r5, #16
	movs r0, r0
	lsls r3, r5, #16
	movs r0, r0
	lsls r4, r5, #20
	movs r0, r0
	lsls r5, r5, #20
	movs r0, r0
	lsls r6, r5, #20
	movs r0, r0
	lsls r5, r5, #20
	strh r0, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsls r7, r5, #16
	movs r1, r0
	lsls r0, r6, #16
	movs r1, r0
	lsls r1, r6, #20
	movs r1, r0
	lsls r2, r6, #20
	movs r1, r0
	lsls r3, r6, #20
	movs r1, r0
	lsls r2, r6, #20
	strh r1, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsls r4, r6, #16
	movs r0, r0
	lsls r5, r6, #16
	movs r0, r0
	lsls r6, r6, #20
	movs r0, r0
	lsls r7, r6, #20
	movs r0, r0
	lsls r0, r7, #20
	movs r0, r0
	lsls r7, r6, #20
	strh r0, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsrs r1, r7, #32
	movs r0, r0
	lsrs r2, r7, #32
	movs r0, r0
	lsrs r3, r7, #32
	movs r0, r0
	lsrs r4, r7, #32
	strh r0, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsrs r1, r0, #1
	movs r1, r0
	lsrs r2, r0, #1
	movs r1, r0
	lsrs r3, r0, #1
	movs r1, r0
	lsrs r4, r0, #1
	strh r1, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsrs r1, r1, #1
	movs r0, r0
	lsrs r2, r1, #1
	movs r0, r0
	lsrs r3, r1, #1
	movs r0, r0
	lsrs r4, r1, #1
	strh r0, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsrs r5, r7, #32
	movs r0, r0
	lsrs r6, r7, #32
	movs r0, r0
	lsrs r7, r7, #32
	movs r0, r0
	lsrs r0, r0, #1
	strh r0, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsrs r5, r0, #1
	movs r1, r0
	lsrs r6, r0, #1
	movs r1, r0
	lsrs r7, r0, #1
	movs r1, r0
	lsrs r0, r1, #1
	strh r1, [r0, #0]
	movs r0, r2
	movs r0, r0
	lsrs r5, r1, #1
	movs r0, r0
	lsrs r6, r1, #1
	movs r0, r0
	lsrs r7, r1, #1
	movs r0, r0
	lsrs r0, r2, #1
	strh r0, [r0, #0]
	movs r0, r2
	lsls r0, r5, #18
	movs r0, r0
	lsls r1, r5, #18
	strh r0, [r0, #0]
	movs r0, r1
	lsls r2, r5, #18
	movs r1, r0
	lsls r3, r5, #18
	strh r1, [r0, #0]
	movs r0, r1
	lsls r4, r5, #18
	movs r0, r0
	lsls r5, r5, #18
	strh r0, [r0, #0]
	movs r0, r1
	lsrs r1, r6, #31
	movs r0, r0
	adds r5, #241
	movs r0, r0
	lsls r1, r6, #7
	lsls r0, r0, #4
	lsls r2, r6, #7
	movs r0, r0
	.4byte 0x8000fff3
	.4byte 0x8000ff5e
	movs r4, r0
	movs r0, r0
	.4byte 0xff5d
	lsls r1, r2, #17
	movs r0, r0
	lsls r2, r2, #17
	movs r0, r0
	lsls r3, r2, #17
	strh r0, [r0, #0]
	movs r4, r1
	movs r0, r0
	lsls r6, r5, #18
	movs r0, r0
	lsls r7, r5, #18
	movs r0, r0
	lsls r0, r6, #18
	strh r0, [r0, #0]
	movs r4, r1
	movs r0, r0
	.4byte 0x8000ff5f
	movs r4, r0
	movs r0, r0
	.4byte 0x8001ff60
	movs r4, r0
	movs r0, r0
	.4byte 0x8000ff61
	movs r4, r0
	movs r0, r0
	lsls r7, r4, #21
	movs r0, r0
	lsls r0, r5, #21
	movs r0, r0
	lsls r1, r5, #25
	movs r0, r0
	lsls r2, r5, #9
	movs r0, r0
	lsls r3, r5, #9
	movs r0, r0
	lsls r4, r5, #9
	movs r0, r0
	lsls r5, r5, #17
	movs r0, r0
	lsls r6, r5, #17
	movs r0, r0
	lsls r7, r5, #17
	movs r0, r0
	.4byte 0x8000ff70
	lsls r1, r6, #9
	movs r0, r0
	lsls r2, r6, #9
	movs r0, r0
	lsls r3, r6, #9
	movs r0, r0
	lsls r4, r6, #9
	movs r0, r0
	lsls r5, r6, #9
	movs r0, r0
	lsls r6, r6, #9
	movs r0, r0
	lsls r7, r6, #9
	movs r0, r0
	lsls r0, r7, #9
	movs r0, r0
	lsls r1, r7, #9
	movs r0, r0
	lsls r2, r7, #9
	strh r0, [r0, #0]
	movs r0, r5
	movs r0, r0
	lsls r3, r7, #9
	movs r1, r0
	lsls r4, r7, #9
	movs r1, r0
	lsls r5, r7, #9
	movs r1, r0
	lsls r6, r7, #9
	movs r1, r0
	lsls r7, r7, #9
	movs r1, r0
	lsls r0, r0, #10
	movs r1, r0
	lsls r1, r0, #10
	movs r1, r0
	lsls r2, r0, #10
	movs r1, r0
	lsls r3, r0, #10
	movs r1, r0
	lsls r4, r0, #10
	strh r1, [r0, #0]
	movs r0, r5
	movs r0, r0
	lsls r5, r0, #10
	movs r0, r0
	lsls r6, r0, #10
	movs r0, r0
	lsls r7, r0, #10
	movs r0, r0
	lsls r0, r1, #10
	movs r0, r0
	lsls r1, r1, #10
	movs r0, r0
	lsls r2, r1, #10
	movs r0, r0
	lsls r3, r1, #10
	movs r0, r0
	lsls r4, r1, #10
	movs r0, r0
	lsls r5, r1, #10
	movs r0, r0
	lsls r6, r1, #10
	strh r0, [r0, #0]
	movs r0, r5
	.4byte 0x8000ff8f
	movs r4, r0
	lsls r0, r2, #18
	movs r0, r0
	.4byte 0x8000ff91
	movs r4, r0
	lsls r2, r2, #18
	movs r0, r0
	.4byte 0x8000ff93
	movs r4, r0
	.4byte 0x8001ff94
	movs r4, r0
	lsls r5, r2, #18
	movs r1, r0
	.4byte 0x8001ff96
	movs r4, r0
	lsls r7, r2, #18
	movs r1, r0
	.4byte 0x8001ff98
	movs r4, r0
	.4byte 0x8001ff99
	movs r4, r0
	lsls r2, r3, #18
	movs r1, r0
	.4byte 0x8001ff9b
	movs r4, r0
	lsls r4, r3, #18
	movs r1, r0
	.4byte 0x8001ff9d
	movs r4, r0
	.4byte 0x8000ff9e
	movs r4, r0
	lsls r7, r3, #18
	movs r0, r0
	.4byte 0x8000ffa0
	movs r4, r0
	lsls r1, r4, #18
	movs r0, r0
	.4byte 0x8000ffa2
	movs r4, r0
	.4byte 0x8000ffa3
	movs r4, r0
	lsls r4, r4, #18
	movs r0, r0
	.4byte 0x8000ffa5
	movs r4, r0
	lsls r6, r4, #18
	movs r0, r0
	.4byte 0x8000ffa7
	movs r4, r0
	lsls r5, r5, #17
	movs r0, r0
	lsls r2, r7, #19
	movs r1, r0
	lsls r2, r6, #17
	movs r1, r0
	lsls r1, r7, #19
	movs r1, r0
	lsls r7, r6, #17
	movs r0, r0
	lsls r1, r7, #19
	movs r0, r0
	lsls r2, r6, #17
	movs r0, r0
	lsls r2, r7, #19
	strh r0, [r0, #0]
	movs r0, r4
	lsls r4, r6, #19
	movs r0, r0
	lsls r5, r6, #15
	movs r0, r0
	lsls r6, r6, #11
	movs r0, r0
	lsls r7, r6, #11
	movs r0, r0
	lsls r0, r7, #11
	movs r0, r0
	lsls r1, r7, #11
	movs r0, r0
	lsls r2, r7, #15
	movs r0, r0
	lsls r3, r7, #15
	movs r0, r0
	lsls r4, r7, #15
	movs r0, r0
	.4byte 0x8000fffd
	movs r4, r0
	ldrb r4, [r7, r3]
	lsrs r0, r0, #32
	ldrb r4, [r0, r4]
	lsrs r0, r0, #32
	ldrb r0, [r6, r4]
	lsrs r0, r0, #32
	ldrb r4, [r0, r4]
	lsrs r0, r0, #32
	ldrb r4, [r6, r6]
	lsrs r0, r0, #32
	ldrb r0, [r1, r6]
	lsrs r0, r0, #32
	ldrb r4, [r3, r5]
	lsrs r0, r0, #32
	ldrb r0, [r1, r6]
	lsrs r0, r0, #32
	ldrsh r0, [r2, r1]
	lsrs r0, r0, #32
	ldrsh r0, [r3, r0]
	lsrs r0, r0, #32
	ldrb r0, [r4, r7]
	lsrs r0, r0, #32
	ldrsh r0, [r3, r0]
	lsrs r0, r0, #32
	str r0, [r2, #44]
	lsrs r0, r0, #32
	str r4, [r4, #40]
	lsrs r0, r0, #32
	str r0, [r7, #36]
	lsrs r0, r0, #32
	str r4, [r4, #40]
	lsrs r0, r0, #32
	str r4, [r7, #48]
	lsrs r0, r0, #32
	str r4, [r3, #48]
	lsrs r0, r0, #32
	str r4, [r7, #44]
	lsrs r0, r0, #32
	str r4, [r3, #48]
	lsrs r0, r0, #32
	ldr r0, [r6, #28]
	lsrs r0, r0, #32
	ldr r0, [r4, #28]
	lsrs r0, r0, #32
	ldr r0, [r2, #28]
	lsrs r0, r0, #32
	ldr r0, [r4, #28]
	lsrs r0, r0, #32
	ldr r0, [r3, #36]
	lsrs r0, r0, #32
	ldr r4, [r7, #32]
	lsrs r0, r0, #32
	ldr r0, [r4, #32]
	lsrs r0, r0, #32
	ldr r4, [r7, #32]
	lsrs r0, r0, #32
	ldr r4, [r7, #40]
	lsrs r0, r0, #32
	ldr r0, [r3, #40]
	lsrs r0, r0, #32
	ldr r4, [r6, #36]
	lsrs r0, r0, #32
	ldr r0, [r3, #40]
	lsrs r0, r0, #32
	str r0, [r6, #44]
	lsrs r0, r0, #32
	str r4, [r0, #44]
	lsrs r0, r0, #32
	str r0, [r3, #40]
	lsrs r0, r0, #32
	str r4, [r0, #44]
	lsrs r0, r0, #32
	ldrsh r0, [r0, r5]
	lsrs r0, r0, #32
	ldrsh r4, [r4, r3]
	lsrs r0, r0, #32
	ldrsh r0, [r1, r2]
	lsrs r0, r0, #32
	ldrsh r4, [r3, r6]
	lsrs r0, r0, #32
	str r0, [r5, #8]
	lsrs r0, r0, #32
	str r0, [r2, #4]
	lsrs r0, r0, #32
	ldrsh r0, [r7, r7]
	lsrs r0, r0, #32
	str r0, [r0, #16]
	lsrs r0, r0, #32
	str r4, [r7, #60]
	lsrs r0, r0, #32
	str r4, [r4, #60]
	lsrs r0, r0, #32
	str r4, [r1, #60]
	lsrs r0, r0, #32
	str r4, [r4, #60]
	lsrs r0, r0, #32
	str r4, [r6, #88]
	lsrs r0, r0, #32
	str r0, [r2, #84]
	lsrs r0, r0, #32
	str r4, [r5, #76]
	lsrs r0, r0, #32
	str r0, [r2, #84]
	lsrs r0, r0, #32
	str r4, [r0, #120]
	lsrs r0, r0, #32
	str r0, [r0, #112]
	lsrs r0, r0, #32
	str r4, [r7, #100]
	lsrs r0, r0, #32
	str r0, [r0, #112]
	lsrs r0, r0, #32
	str r4, [r1, #68]
	lsrs r0, r0, #32
	str r0, [r6, #64]
	lsrs r0, r0, #32
	str r4, [r2, #64]
	lsrs r0, r0, #32
	str r0, [r6, #64]
	lsrs r0, r0, #32
	str r0, [r0, #76]
	lsrs r0, r0, #32
	str r4, [r2, #72]
	lsrs r0, r0, #32
	str r0, [r5, #68]
	lsrs r0, r0, #32
	str r4, [r2, #72]
	lsrs r0, r0, #32
	str r0, [r2, #100]
	lsrs r0, r0, #32
	str r4, [r6, #96]
	lsrs r0, r0, #32
	str r0, [r3, #96]
	lsrs r0, r0, #32
	str r4, [r6, #96]
	lsrs r0, r0, #32
	str r4, [r2, #120]
	lsrs r0, r0, #32
	str r0, [r2, #112]
	lsrs r0, r0, #32
	str r4, [r1, #104]
	lsrs r0, r0, #32
	str r0, [r2, #112]
	lsrs r0, r0, #32
	ldr r4, [r2, #8]
	lsrs r0, r0, #32
	ldr r4, [r7, #4]
	lsrs r0, r0, #32
	ldr r4, [r4, #4]
	lsrs r0, r0, #32
	ldr r4, [r7, #4]
	lsrs r0, r0, #32
	str r4, [r1, #64]
	lsrs r0, r0, #32
	str r4, [r6, #60]
	lsrs r0, r0, #32
	str r4, [r3, #60]
	lsrs r0, r0, #32
	str r4, [r6, #60]
	lsrs r0, r0, #32
	ldr r0, [r0, #4]
	lsrs r0, r0, #32
	ldr r4, [r3, #0]
	lsrs r0, r0, #32
	str r0, [r7, #124]
	lsrs r0, r0, #32
	ldr r4, [r3, #0]
	lsrs r0, r0, #32
	ldr r4, [r6, #52]
	lsrs r0, r0, #32
	ldr r0, [r4, #52]
	lsrs r0, r0, #32
	ldr r4, [r1, #52]
	lsrs r0, r0, #32
	ldr r0, [r4, #52]
	lsrs r0, r0, #32
	ldr r6, [r5, #20]
	lsrs r0, r0, #32
	ldr r4, [r1, #16]
	lsrs r0, r0, #32
	ldr r2, [r5, #8]
	lsrs r0, r0, #32
	ldr r4, [r1, #16]
	lsrs r0, r0, #32
	str r4, [r7, #56]
	lsrs r0, r0, #32
	str r4, [r5, #56]
	lsrs r0, r0, #32
	str r4, [r3, #56]
	lsrs r0, r0, #32
	str r4, [r5, #56]
	lsrs r0, r0, #32
	ldr r6, [r1, #60]
	lsrs r0, r0, #32
	ldr r4, [r5, #56]
	lsrs r0, r0, #32
	ldr r0, [r1, #56]
	lsrs r0, r0, #32
	ldr r4, [r5, #56]
	lsrs r0, r0, #32
	ldr r0, [r0, #56]
	lsrs r0, r0, #32
	ldr r4, [r5, #52]
	lsrs r0, r0, #32
	ldr r0, [r3, #52]
	lsrs r0, r0, #32
	ldr r4, [r5, #52]
	lsrs r0, r0, #32
	ldrsh r4, [r7, r1]
	lsrs r0, r0, #32
	ldrsh r4, [r0, r1]
	lsrs r0, r0, #32
	ldrsh r4, [r1, r0]
	lsrs r0, r0, #32
	ldrsh r4, [r0, r1]
	lsrs r0, r0, #32
	str r0, [r1, #24]
	lsrs r0, r0, #32
	str r0, [r6, #20]
	lsrs r0, r0, #32
	str r0, [r3, #20]
	lsrs r0, r0, #32
	str r0, [r6, #20]
	lsrs r0, r0, #32
	str r0, [r1, #28]
	lsrs r0, r0, #32
	str r4, [r6, #24]
	lsrs r0, r0, #32
	str r0, [r4, #24]
	lsrs r0, r0, #32
	str r4, [r6, #24]
	lsrs r0, r0, #32
	str r4, [r0, #36]
	lsrs r0, r0, #32
	str r0, [r2, #32]
	lsrs r0, r0, #32
	str r4, [r3, #28]
	lsrs r0, r0, #32
	str r0, [r2, #32]
	lsrs r0, r0, #32
	str r4, [r6, #116]
	lsrs r0, r0, #32
	str r0, [r6, #108]
	lsrs r0, r0, #32
	str r4, [r5, #100]
	lsrs r0, r0, #32
	str r0, [r6, #108]
	lsrs r0, r0, #32
	ldr r4, [r3, #8]
	lsrs r0, r0, #32
	ldr r4, [r0, #8]
	lsrs r0, r0, #32
	ldr r4, [r5, #4]
	lsrs r0, r0, #32
	ldr r4, [r0, #8]
	lsrs r0, r0, #32
	ldr r4, [r1, #44]
	lsrs r0, r0, #32
	ldr r0, [r5, #40]
	lsrs r0, r0, #32
	ldr r4, [r0, #40]
	lsrs r0, r0, #32
	ldr r0, [r5, #40]
	lsrs r0, r0, #32
	ldr r4, [r0, #44]
	lsrs r0, r0, #32
	ldr r0, [r4, #40]
	lsrs r0, r0, #32
	ldr r4, [r7, #36]
	lsrs r0, r0, #32
	ldr r0, [r4, #40]
	lsrs r0, r0, #32
	ldr r0, [r5, #48]
	lsrs r0, r0, #32
	ldr r4, [r0, #48]
	lsrs r0, r0, #32
	ldr r0, [r4, #44]
	lsrs r0, r0, #32
	ldr r4, [r0, #48]
	lsrs r0, r0, #32
	ldr r0, [r5, #64]
	lsrs r0, r0, #32
	ldr r4, [r1, #64]
	lsrs r0, r0, #32
	ldr r0, [r6, #60]
	lsrs r0, r0, #32
	ldr r4, [r1, #64]
	lsrs r0, r0, #32
	ldr r4, [r5, #68]
	lsrs r0, r0, #32
	ldr r0, [r3, #68]
	lsrs r0, r0, #32
	ldr r4, [r0, #68]
	lsrs r0, r0, #32
	ldr r0, [r3, #68]
	lsrs r0, r0, #32
	ldr r0, [r5, #72]
	lsrs r0, r0, #32
	ldr r4, [r2, #72]
	lsrs r0, r0, #32
	ldr r0, [r0, #72]
	lsrs r0, r0, #32
	ldr r4, [r2, #72]
	lsrs r0, r0, #32
	ldr r0, [r5, #80]
	lsrs r0, r0, #32
	ldr r0, [r4, #80]
	lsrs r0, r0, #32
	ldr r0, [r3, #80]
	lsrs r0, r0, #32
	ldr r0, [r4, #80]
	lsrs r0, r0, #32
	ldr r0, [r6, #88]
	lsrs r0, r0, #32
	ldr r4, [r0, #88]
	lsrs r0, r0, #32
	ldr r0, [r3, #84]
	lsrs r0, r0, #32
	ldr r4, [r0, #88]
	lsrs r0, r0, #32
	ldr r6, [r1, #76]
	lsrs r0, r0, #32
	ldr r4, [r0, #76]
	lsrs r0, r0, #32
	ldr r2, [r7, #72]
	lsrs r0, r0, #32
	ldr r4, [r0, #76]
	lsrs r0, r0, #32
	ldr r0, [r0, #32]
	lsrs r0, r0, #32
	ldr r0, [r3, #76]
	lsrs r0, r0, #32
	ldr r4, [r5, #76]
	lsrs r0, r0, #32
	ldr r0, [r2, #32]
	lsrs r0, r0, #32
	ldr r4, [r6, #76]
	lsrs r0, r0, #32
	ldr r4, [r4, #76]
	lsrs r0, r0, #32
	str r4, [r3, #52]
	lsrs r0, r0, #32
	str r4, [r0, #56]
	lsrs r0, r0, #32
	ldr r0, [r7, #76]
	lsrs r0, r0, #32
	ldr r0, [r6, #80]
	lsrs r0, r0, #32
	ldr r2, [r2, #100]
	lsrs r0, r0, #32
	ldr r2, [r0, #100]
	lsrs r0, r0, #32
	ldr r0, [r1, #100]
	lsrs r0, r0, #32
	ldr r0, [r7, #96]
	lsrs r0, r0, #32
	ldr r0, [r5, #96]
	lsrs r0, r0, #32
	ldr r6, [r5, #96]
	lsrs r0, r0, #32
	ldr r6, [r3, #96]
	lsrs r0, r0, #32
	ldr r6, [r1, #96]
	lsrs r0, r0, #32
	ldr r4, [r2, #96]
	lsrs r0, r0, #32
	ldr r4, [r0, #96]
	lsrs r0, r0, #32
	ldr r4, [r6, #92]
	lsrs r0, r0, #32
	ldr r2, [r7, #92]
	lsrs r0, r0, #32
	ldr r2, [r5, #92]
	lsrs r0, r0, #32
	ldr r2, [r3, #92]
	lsrs r0, r0, #32
	ldr r0, [r4, #92]
	lsrs r0, r0, #32
	ldr r4, [r3, #100]
	lsrs r0, r0, #32
	ldr r0, [r1, #80]
	lsrs r0, r0, #32
	ldr r6, [r7, #100]
	lsrs r0, r0, #32
	lsls r0, r0, #1
	lsls r0, r0, #12
	lsls r0, r6, #2
	lsls r0, r0, #12
	lsls r0, r4, #4
	lsls r0, r0, #12
	lsls r0, r2, #6
	lsls r0, r0, #12
	.syntax unified
	.thumb
