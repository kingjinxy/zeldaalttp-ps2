	THUMB_FUNC_START sub_0810C010
sub_0810C010: @ 0x0810C010
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810C070  @ =gRam
	ldr r1, _0810C074  @ =0x00001152
	add r0, r5, r1
	add r6, r4, r0
	mov r0, #120
	strb r0, [r6]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r2, _0810C078  @ =0x00001142
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #223
	bls _0810C06A
	ldr r1, _0810C07C  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _0810C080  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	strb r0, [r6]
	ldr r1, _0810C084  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _0810C088  @ =0x000016C4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810C08C  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	sub r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
_0810C06A:
	pop {r4-r6}
	pop {r0}
	bx r0
_0810C070:
	.4byte gRam
_0810C074:
	.4byte 0x00001152
_0810C078:
	.4byte 0x00001142
_0810C07C:
	.4byte 0x00000FC2
_0810C080:
	.4byte 0x00000F52
_0810C084:
	.4byte 0x00000EE2
_0810C088:
	.4byte 0x000016C4
_0810C08C:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_0810C010

