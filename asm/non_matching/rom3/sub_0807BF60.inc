	THUMB_FUNC_START sub_0807BF60
sub_0807BF60: @ 0x0807BF60
	push {r4,r5,lr}
	ldr r1, _0807BF98  @ =gRam
	ldr r2, _0807BF9C  @ =0x00000ADE
	add r0, r1, r2
	ldrh r3, [r0]
	ldr r5, _0807BFA0  @ =0x000009F8
	add r0, r1, r5
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r1, #0
	cmp r2, r0
	bne _0807BFA8
	lsl r2, r3, #1
	ldr r1, _0807BFA4  @ =0x00000C22
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
	b _0807BFBE
_0807BF98:
	.4byte gRam
_0807BF9C:
	.4byte 0x00000ADE
_0807BFA0:
	.4byte 0x000009F8
_0807BFA4:
	.4byte 0x00000C22
_0807BFA8:
	lsl r1, r3, #1
	ldr r2, _0807C004  @ =0x00000C22
	add r0, r4, r2
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
_0807BFBE:
	add r3, r3, #1
	ldr r1, _0807C008  @ =0x00000ADE
	add r0, r4, r1
	strh r3, [r0]
	ldr r2, _0807C00C  @ =0x00000B26
	add r0, r4, r2
	strh r3, [r0]
	ldr r5, _0807C010  @ =0x00000B2A
	add r0, r4, r5
	strh r3, [r0]
	add r1, r1, #108
	add r0, r4, r1
	strh r3, [r0]
	add r2, r2, #38
	add r0, r4, r2
	strh r3, [r0]
	sub r5, r5, #74
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
_0807C004:
	.4byte 0x00000C22
_0807C008:
	.4byte 0x00000ADE
_0807C00C:
	.4byte 0x00000B26
_0807C010:
	.4byte 0x00000B2A
	THUMB_FUNC_END sub_0807BF60

