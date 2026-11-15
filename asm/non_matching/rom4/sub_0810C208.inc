	THUMB_FUNC_START sub_0810C208
sub_0810C208: @ 0x0810C208
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810C2B4  @ =gRam
	ldr r1, _0810C2B8  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0810C2EC
	add r0, r4, #0
	mov r1, #110
	bl sub_080CF0AC
	mov r2, #29
	ldr r1, _0810C2BC  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0810C23A
	mov r2, #14
_0810C23A:
	lsl r0, r2, #24
	cmp r0, #0
	blt _0810C2EC
	add r3, r5, #0
	ldr r5, _0810C2C0  @ =0x000011D2
	add r6, r3, r5
	mov r5, #21
	ldr r1, _0810C2C4  @ =0x000015F8
	add r7, r3, r1
	ldr r1, _0810C2C8  @ =0x0000122C
	add r1, r1, r3
	mov r12, r1
_0810C252:
	asr r2, r0, #24
	add r1, r2, r6
	ldrb r0, [r1]
	cmp r0, #0
	bne _0810C2E4
	strb r5, [r1]
	strb r5, [r7]
	mov r5, r12
	add r1, r2, r5
	ldr r5, _0810C2CC  @ =0x00000EE2
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810C2D0  @ =0x00001268
	add r1, r3, r0
	add r1, r2, r1
	add r5, r5, #32
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0810C2D4  @ =0x00000ED2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r5, r5, #16
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #24
	ldr r4, _0810C2D8  @ =0x0000120E
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
	ldr r5, _0810C2DC  @ =0x0000124A
	add r0, r3, r5
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _0810C2E0  @ =0x000012FE
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #15
	strb r1, [r0]
	b _0810C2EC
	.byte 0x00
	.byte 0x00
_0810C2B4:
	.4byte gRam
_0810C2B8:
	.4byte 0x00000996
_0810C2BC:
	.4byte 0x00000F12
_0810C2C0:
	.4byte 0x000011D2
_0810C2C4:
	.4byte 0x000015F8
_0810C2C8:
	.4byte 0x0000122C
_0810C2CC:
	.4byte 0x00000EE2
_0810C2D0:
	.4byte 0x00001268
_0810C2D4:
	.4byte 0x00000ED2
_0810C2D8:
	.4byte 0x0000120E
_0810C2DC:
	.4byte 0x0000124A
_0810C2E0:
	.4byte 0x000012FE
_0810C2E4:
	sub r0, r2, #1
	lsl r0, r0, #24
	cmp r0, #0
	bge _0810C252
_0810C2EC:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810C208

	.byte 0x00
	.byte 0x00
