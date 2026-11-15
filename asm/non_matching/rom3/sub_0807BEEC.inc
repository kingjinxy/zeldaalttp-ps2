	THUMB_FUNC_START sub_0807BEEC
sub_0807BEEC: @ 0x0807BEEC
	push {r4,r5,lr}
	ldr r1, _0807BF24  @ =gRam
	ldr r2, _0807BF28  @ =0x00000AD8
	add r0, r1, r2
	ldrh r3, [r0]
	ldr r5, _0807BF2C  @ =0x000009F8
	add r0, r1, r5
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r1, #0
	cmp r2, r0
	bne _0807BF34
	lsl r2, r3, #1
	ldr r1, _0807BF30  @ =0x00000C12
	add r0, r4, r1
	add r2, r2, r0
	sub r5, r5, #136
	add r0, r4, r5
	ldrh r0, [r0]
	mov r5, #128
	lsl r5, r5, #6
	add r1, r5, #0
	orr r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r2]
	b _0807BF4A
_0807BF24:
	.4byte gRam
_0807BF28:
	.4byte 0x00000AD8
_0807BF2C:
	.4byte 0x000009F8
_0807BF30:
	.4byte 0x00000C12
_0807BF34:
	lsl r1, r3, #1
	ldr r2, _0807BF58  @ =0x00000C12
	add r0, r4, r2
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
_0807BF4A:
	add r3, r3, #1
	ldr r1, _0807BF5C  @ =0x00000AD8
	add r0, r4, r1
	strh r3, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_0807BF58:
	.4byte 0x00000C12
_0807BF5C:
	.4byte 0x00000AD8
	THUMB_FUNC_END sub_0807BEEC

