	THUMB_FUNC_START sub_080FF9B8
sub_080FF9B8: @ 0x080FF9B8
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r7, r6, #0
	mov r0, sp
	add r1, r6, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FFA1E
	ldr r4, _080FFA2C  @ =gRam
	ldr r1, _080FFA30  @ =0x00000F62
	add r0, r4, r1
	add r0, r6, r0
	mov r5, #0
	mov r1, #3
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #113
	bl sub_080CF0AC
	add r0, r6, #0
	mov r1, #92
	bl sub_080CF140
	add r0, r6, #0
	mov r1, #48
	bl sub_080C35FC
	ldr r2, _080FFA34  @ =0x00000F22
	add r1, r4, r2
	add r1, r6, r1
	ldr r2, _080FFA38  @ =0x00000961
	add r0, r4, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080FFA3C  @ =0x00000F12
	add r1, r4, r0
	add r1, r6, r1
	sub r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080FFA40  @ =0x00000F52
	add r4, r4, r0
	add r4, r6, r4
	strb r5, [r4]
_080FFA1E:
	add r0, r7, #0
	bl sub_080C4F98
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FFA2C:
	.4byte gRam
_080FFA30:
	.4byte 0x00000F62
_080FFA34:
	.4byte 0x00000F22
_080FFA38:
	.4byte 0x00000961
_080FFA3C:
	.4byte 0x00000F12
_080FFA40:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FF9B8

