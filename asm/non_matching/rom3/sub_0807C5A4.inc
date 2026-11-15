	THUMB_FUNC_START sub_0807C5A4
sub_0807C5A4: @ 0x0807C5A4
	push {r4,r5,lr}
	ldr r1, _0807C5DC  @ =gRam
	ldr r2, _0807C5E0  @ =0x00000B4E
	add r0, r1, r2
	ldrh r3, [r0]
	ldr r5, _0807C5E4  @ =0x000009F8
	add r0, r1, r5
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r1, #0
	cmp r2, r0
	bne _0807C5EC
	lsl r2, r3, #1
	ldr r1, _0807C5E8  @ =0x00000C22
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
	b _0807C602
_0807C5DC:
	.4byte gRam
_0807C5E0:
	.4byte 0x00000B4E
_0807C5E4:
	.4byte 0x000009F8
_0807C5E8:
	.4byte 0x00000C22
_0807C5EC:
	lsl r1, r3, #1
	ldr r2, _0807C618  @ =0x00000C22
	add r0, r4, r2
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
_0807C602:
	add r3, r3, #1
	ldr r1, _0807C61C  @ =0x00000B4E
	add r0, r4, r1
	strh r3, [r0]
	mov r2, #181
	lsl r2, r2, #4
	add r0, r4, r2
	strh r3, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_0807C618:
	.4byte 0x00000C22
_0807C61C:
	.4byte 0x00000B4E
	THUMB_FUNC_END sub_0807C5A4

