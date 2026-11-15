	THUMB_FUNC_START sub_080F20EC
sub_080F20EC: @ 0x080F20EC
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080F22AC
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F21B0
	mov r0, #0
	bl sub_080F21E4
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _080F2124
	bl sub_080AF16C
	ldr r0, _080F21B8  @ =gRam
	ldr r1, _080F21BC  @ =0x00001719
	add r0, r0, r1
	strb r4, [r0]
	bl sub_08093078
_080F2124:
	bl sub_0809E3CC
	cmp r0, #0
	bne _080F219A
	mov r0, #2
	bl sub_080F21E4
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _080F219A
	ldr r0, _080F21C0  @ =gUnknown_03003E70
	mov r3, #1
	strb r3, [r0]
	ldr r2, _080F21B8  @ =gRam
	ldr r6, _080F21C4  @ =0x00000546
	add r0, r2, r6
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080F219A
	ldr r1, _080F21C8  @ =0x000016C4
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r6, _080F21CC  @ =0x00000EE2
	add r0, r2, r6
	add r0, r5, r0
	ldrb r0, [r0]
	sub r1, r1, r0
	asr r1, r1, #8
	and r1, r1, r3
	mov r0, #150
	lsl r0, r0, #4
	add r3, r2, r0
	strb r1, [r3]
	ldr r6, _080F21D0  @ =0x00000961
	add r1, r2, r6
	strb r4, [r1]
	ldr r0, _080F21D4  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bls _080F2180
	mov r0, #2
	strb r0, [r1]
_080F2180:
	ldr r2, _080F21D8  @ =gUnknown_081790B4
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r1, #0
	ldrsb r1, [r3, r1]
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
_080F219A:
	ldr r0, _080F21B8  @ =gRam
	ldr r1, _080F21DC  @ =0x00000F92
	add r2, r0, r1
	add r2, r5, r2
	ldr r6, _080F21E0  @ =0x00000996
	add r0, r0, r6
	ldrb r0, [r0]
	lsr r0, r0, #5
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
_080F21B0:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080F21B8:
	.4byte gRam
_080F21BC:
	.4byte 0x00001719
_080F21C0:
	.4byte gUnknown_03003E70
_080F21C4:
	.4byte 0x00000546
_080F21C8:
	.4byte 0x000016C4
_080F21CC:
	.4byte 0x00000EE2
_080F21D0:
	.4byte 0x00000961
_080F21D4:
	.4byte gSword
_080F21D8:
	.4byte gUnknown_081790B4
_080F21DC:
	.4byte 0x00000F92
_080F21E0:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F20EC

