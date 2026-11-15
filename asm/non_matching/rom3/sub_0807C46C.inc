	THUMB_FUNC_START sub_0807C46C
sub_0807C46C: @ 0x0807C46C
	push {r4,r5,lr}
	ldr r1, _0807C4A4  @ =gRam
	ldr r2, _0807C4A8  @ =0x00000B4A
	add r0, r1, r2
	ldrh r3, [r0]
	ldr r5, _0807C4AC  @ =0x000009F8
	add r0, r1, r5
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r1, #0
	cmp r2, r0
	bne _0807C4B4
	lsl r2, r3, #1
	ldr r1, _0807C4B0  @ =0x00000C22
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
	b _0807C4CA
_0807C4A4:
	.4byte gRam
_0807C4A8:
	.4byte 0x00000B4A
_0807C4AC:
	.4byte 0x000009F8
_0807C4B0:
	.4byte 0x00000C22
_0807C4B4:
	lsl r1, r3, #1
	ldr r2, _0807C500  @ =0x00000C22
	add r0, r4, r2
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
_0807C4CA:
	add r3, r3, #1
	ldr r1, _0807C504  @ =0x00000B4A
	add r0, r4, r1
	strh r3, [r0]
	ldr r2, _0807C508  @ =0x00000B4C
	add r0, r4, r2
	strh r3, [r0]
	mov r5, #174
	lsl r5, r5, #4
	add r0, r4, r5
	strh r3, [r0]
	sub r1, r1, #34
	add r0, r4, r1
	strh r3, [r0]
	sub r2, r2, #32
	add r0, r4, r2
	strh r3, [r0]
	add r5, r5, #110
	add r0, r4, r5
	strh r3, [r0]
	add r1, r1, #40
	add r0, r4, r1
	strh r3, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807C500:
	.4byte 0x00000C22
_0807C504:
	.4byte 0x00000B4A
_0807C508:
	.4byte 0x00000B4C
	THUMB_FUNC_END sub_0807C46C

