	THUMB_FUNC_START sub_0807C324
sub_0807C324: @ 0x0807C324
	push {r4,lr}
	ldr r1, _0807C360  @ =gRam
	ldr r2, _0807C364  @ =0x00000B2C
	add r0, r1, r2
	ldrh r3, [r0]
	ldr r2, _0807C368  @ =0x000009F8
	add r0, r1, r2
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r1, #0
	cmp r2, r0
	bne _0807C370
	lsl r2, r3, #1
	ldr r1, _0807C36C  @ =0x00000C22
	add r0, r4, r1
	add r2, r2, r0
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	sub r0, r0, #128
	mov r1, #128
	lsl r1, r1, #6
	orr r0, r0, r1
	asr r0, r0, #1
	strh r0, [r2]
	b _0807C388
	.byte 0x00
	.byte 0x00
_0807C360:
	.4byte gRam
_0807C364:
	.4byte 0x00000B2C
_0807C368:
	.4byte 0x000009F8
_0807C36C:
	.4byte 0x00000C22
_0807C370:
	lsl r1, r3, #1
	ldr r2, _0807C3A4  @ =0x00000C22
	add r0, r4, r2
	add r1, r1, r0
	mov r2, #151
	lsl r2, r2, #4
	add r0, r4, r2
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r0, r0, #128
	asr r0, r0, #1
	strh r0, [r1]
_0807C388:
	add r3, r3, #1
	ldr r1, _0807C3A8  @ =0x00000B2C
	add r0, r4, r1
	strh r3, [r0]
	ldr r2, _0807C3AC  @ =0x00000B4E
	add r0, r4, r2
	strh r3, [r0]
	add r1, r1, #36
	add r0, r4, r1
	strh r3, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807C3A4:
	.4byte 0x00000C22
_0807C3A8:
	.4byte 0x00000B2C
_0807C3AC:
	.4byte 0x00000B4E
	THUMB_FUNC_END sub_0807C324

