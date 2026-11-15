	THUMB_FUNC_START sub_080D6968
sub_080D6968: @ 0x080D6968
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r1, _080D6A9C  @ =gRam
	ldr r2, _080D6AA0  @ =0x0000097C
	add r0, r1, r2
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bhi _080D699C
	add r2, r2, #1
	add r0, r1, r2
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bhi _080D699C
	mov r0, #16
	bl sub_080CF388
_080D699C:
	add r0, r4, #0
	bl sub_080D6BB8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D69B0
	b _080D6AF2
_080D69B0:
	ldr r5, _080D6A9C  @ =gRam
	ldr r1, _080D6AA4  @ =0x00001082
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	sub r1, r1, #224
	add r2, r5, r1
	add r0, r0, r2
	ldrb r1, [r0]
	cmp r1, #6
	bne _080D69C8
	b _080D6AD4
_080D69C8:
	ldr r2, _080D6AA8  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080D6A80
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D6A80
	bl sub_08093078
	ldr r1, _080D6AAC  @ =0x00000546
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080D69FA
	ldr r2, _080D6AB0  @ =0x00000DA7
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
_080D69FA:
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	mov r6, #0
	ldr r1, _080D6AB4  @ =0x00000F62
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080D6A28
	mov r6, #1
	mvn r0, r1
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080D6A28:
	add r0, r1, r2
	strb r0, [r3]
	mov r7, #128
	lsl r7, r7, #1
	and r0, r0, r7
	cmp r0, #0
	beq _080D6A44
	ldr r1, _080D6AB8  @ =gUnknown_081754FE
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _080D6ABC  @ =0x00000DAA
	add r0, r5, r2
	strh r1, [r0]
_080D6A44:
	mov r6, #0
	ldr r1, _080D6AC0  @ =0x00000F72
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	ldr r1, _080D6AC4  @ =0x00000961
	add r0, r5, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080D6A68
	mov r6, #1
	mvn r0, r1
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080D6A68:
	add r0, r1, r2
	strb r0, [r3]
	and r0, r0, r7
	cmp r0, #0
	beq _080D6A80
	ldr r1, _080D6AB8  @ =gUnknown_081754FE
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _080D6AC8  @ =0x00000DA8
	add r0, r5, r2
	strh r1, [r0]
_080D6A80:
	ldr r1, _080D6ACC  @ =gUnknown_08175504
	ldr r0, _080D6A9C  @ =gRam
	ldr r2, _080D6AD0  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080D6AF2
	.byte 0x00
	.byte 0x00
_080D6A9C:
	.4byte gRam
_080D6AA0:
	.4byte 0x0000097C
_080D6AA4:
	.4byte 0x00001082
_080D6AA8:
	.4byte 0x00000F92
_080D6AAC:
	.4byte 0x00000546
_080D6AB0:
	.4byte 0x00000DA7
_080D6AB4:
	.4byte 0x00000F62
_080D6AB8:
	.4byte gUnknown_081754FE
_080D6ABC:
	.4byte 0x00000DAA
_080D6AC0:
	.4byte 0x00000F72
_080D6AC4:
	.4byte 0x00000961
_080D6AC8:
	.4byte 0x00000DA8
_080D6ACC:
	.4byte gUnknown_08175504
_080D6AD0:
	.4byte 0x00000F52
_080D6AD4:
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080D6AF8  @ =0x00000FC2
	add r1, r5, r0
	add r2, r4, r1
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080D6AFC  @ =0x00001012
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
_080D6AF2:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D6AF8:
	.4byte 0x00000FC2
_080D6AFC:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080D6968

