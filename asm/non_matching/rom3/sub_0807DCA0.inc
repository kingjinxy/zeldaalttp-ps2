	THUMB_FUNC_START sub_0807DCA0
sub_0807DCA0: @ 0x0807DCA0
	push {r4-r7,lr}
	ldr r7, _0807DD4C  @ =gRam
	ldr r0, _0807DD50  @ =0x000009EA
	add r3, r7, r0
	ldrh r0, [r3]
	ldr r2, _0807DD54  @ =gUnknown_08167934
	lsl r1, r0, #1
	add r0, r1, r2
	ldrh r4, [r0]
	mov r6, #0
	strh r4, [r3]
	ldr r5, _0807DD58  @ =gUnknown_0816793C
	add r1, r1, r5
	ldrh r0, [r1]
	sub r0, r0, #24
	ldr r3, _0807DD5C  @ =0x00000BF8
	add r1, r7, r3
	strh r0, [r1]
	ldr r0, _0807DD60  @ =0x000009EE
	add r1, r7, r0
	ldrh r0, [r1]
	lsl r0, r0, #1
	add r2, r0, r2
	ldrh r3, [r2]
	strh r3, [r1]
	add r0, r0, r5
	ldrh r1, [r0]
	add r2, r1, #0
	sub r2, r2, #8
	ldr r5, _0807DD64  @ =0x00000BFA
	add r0, r7, r5
	strh r2, [r0]
	sub r1, r1, #32
	ldr r2, _0807DD68  @ =0x00000BF6
	add r0, r7, r2
	strh r1, [r0]
	add r5, r5, #2
	add r0, r7, r5
	strh r6, [r0]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r7, r1
	ldrh r2, [r0]
	mov r0, #126
	and r0, r0, r2
	lsl r0, r0, #2
	sub r5, r5, #84
	add r1, r7, r5
	lsl r4, r4, #4
	ldrh r1, [r1]
	add r4, r4, r1
	add r0, r0, r4
	ldr r4, _0807DD6C  @ =0x00000BF2
	add r1, r7, r4
	strh r0, [r1]
	mov r0, #252
	lsl r0, r0, #5
	and r0, r0, r2
	lsr r0, r0, #4
	add r5, r5, #2
	add r1, r7, r5
	lsl r3, r3, #4
	ldrh r1, [r1]
	add r3, r3, r1
	add r0, r0, r3
	sub r0, r0, #8
	ldr r2, _0807DD70  @ =0x00000BF4
	add r1, r7, r2
	strh r0, [r1]
	ldr r3, _0807DD74  @ =0x00000AA8
	add r0, r7, r3
	ldr r1, _0807DD78  @ =gUnknown_081676B2
	ldrh r0, [r0]
	ldrh r4, [r1, #8]
	and r4, r4, r0
	cmp r4, #0
	beq _0807DD84
	ldr r4, _0807DD7C  @ =0x000009E7
	add r1, r7, r4
	mov r0, #0
	strb r0, [r1]
	ldr r5, _0807DD80  @ =0x00001812
	add r1, r7, r5
	mov r0, #1
	strb r0, [r1]
	b _0807DDB4
_0807DD4C:
	.4byte gRam
_0807DD50:
	.4byte 0x000009EA
_0807DD54:
	.4byte gUnknown_08167934
_0807DD58:
	.4byte gUnknown_0816793C
_0807DD5C:
	.4byte 0x00000BF8
_0807DD60:
	.4byte 0x000009EE
_0807DD64:
	.4byte 0x00000BFA
_0807DD68:
	.4byte 0x00000BF6
_0807DD6C:
	.4byte 0x00000BF2
_0807DD70:
	.4byte 0x00000BF4
_0807DD74:
	.4byte 0x00000AA8
_0807DD78:
	.4byte gUnknown_081676B2
_0807DD7C:
	.4byte 0x000009E7
_0807DD80:
	.4byte 0x00001812
_0807DD84:
	ldr r0, _0807DDBC  @ =0x00000AE8
	add r3, r7, r0
	ldrh r1, [r3]
	ldr r2, _0807DDC0  @ =0x00000AE6
	add r0, r7, r2
	strh r1, [r0]
	ldr r5, _0807DDC4  @ =0x00000AEA
	add r2, r7, r5
	ldrh r1, [r2]
	add r5, r5, #4
	add r0, r7, r5
	strh r1, [r0]
	strh r4, [r3]
	strh r4, [r2]
	ldr r0, _0807DDC8  @ =0x00000B56
	add r2, r7, r0
	ldrh r1, [r2]
	ldr r3, _0807DDCC  @ =0x00000B46
	add r0, r7, r3
	strh r1, [r0]
	strh r4, [r2]
	sub r5, r5, #52
	add r0, r7, r5
	strh r4, [r0]
_0807DDB4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807DDBC:
	.4byte 0x00000AE8
_0807DDC0:
	.4byte 0x00000AE6
_0807DDC4:
	.4byte 0x00000AEA
_0807DDC8:
	.4byte 0x00000B56
_0807DDCC:
	.4byte 0x00000B46
	THUMB_FUNC_END sub_0807DCA0

