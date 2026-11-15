	THUMB_FUNC_START sub_0807C13C
sub_0807C13C: @ 0x0807C13C
	push {r4,lr}
	ldr r1, _0807C178  @ =gRam
	ldr r2, _0807C17C  @ =0x00000B26
	add r0, r1, r2
	ldrh r3, [r0]
	ldr r2, _0807C180  @ =0x000009F8
	add r0, r1, r2
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r1, #0
	cmp r2, r0
	bne _0807C188
	lsl r2, r3, #1
	ldr r1, _0807C184  @ =0x00000C22
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
	b _0807C1A0
	.byte 0x00
	.byte 0x00
_0807C178:
	.4byte gRam
_0807C17C:
	.4byte 0x00000B26
_0807C180:
	.4byte 0x000009F8
_0807C184:
	.4byte 0x00000C22
_0807C188:
	lsl r1, r3, #1
	ldr r2, _0807C1E0  @ =0x00000C22
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
_0807C1A0:
	add r3, r3, #1
	ldr r1, _0807C1E4  @ =0x00000B26
	add r0, r4, r1
	strh r3, [r0]
	ldr r2, _0807C1E8  @ =0x00000B2A
	add r0, r4, r2
	strh r3, [r0]
	add r1, r1, #36
	add r0, r4, r1
	strh r3, [r0]
	add r2, r2, #34
	add r0, r4, r2
	strh r3, [r0]
	sub r1, r1, #106
	add r0, r4, r1
	strh r3, [r0]
	sub r2, r2, #36
	add r0, r4, r2
	strh r3, [r0]
	add r1, r1, #76
	add r0, r4, r1
	strh r3, [r0]
	add r2, r2, #38
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
_0807C1E0:
	.4byte 0x00000C22
_0807C1E4:
	.4byte 0x00000B26
_0807C1E8:
	.4byte 0x00000B2A
	THUMB_FUNC_END sub_0807C13C

