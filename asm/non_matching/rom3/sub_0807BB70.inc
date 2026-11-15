	THUMB_FUNC_START sub_0807BB70
sub_0807BB70: @ 0x0807BB70
	push {r4,r5,lr}
	ldr r1, _0807BBC4  @ =gRam
	ldr r3, _0807BBC8  @ =0x000009EA
	add r2, r1, r3
	ldrh r2, [r2]
	ldr r4, _0807BBCC  @ =0x00000974
	add r3, r1, r4
	strh r2, [r3]
	mov r2, #151
	lsl r2, r2, #4
	add r1, r1, r2
	ldrh r1, [r1]
	ldr r4, _0807BBD0  @ =0x00003FFF
	and r4, r4, r1
	ldrh r5, [r0]
_0807BB8E:
	mov r2, #64
	and r2, r2, r4
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	and r1, r1, r4
	asr r1, r1, #1
	ldr r0, _0807BBD4  @ =0x0000303F
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _0807BBD8  @ =gUnknown_02018000
	add r0, r0, r1
	strh r5, [r0]
	add r4, r4, #2
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807BB8E
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807BBC4:
	.4byte gRam
_0807BBC8:
	.4byte 0x000009EA
_0807BBCC:
	.4byte 0x00000974
_0807BBD0:
	.4byte 0x00003FFF
_0807BBD4:
	.4byte 0x0000303F
_0807BBD8:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_0807BB70

