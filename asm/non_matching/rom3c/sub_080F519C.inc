	THUMB_FUNC_START sub_080F519C
sub_080F519C: @ 0x080F519C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	add r0, r5, #0
	bl sub_080F5280
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F5252
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F5252
	bl sub_080AF16C
	bl sub_0809945C
	ldr r6, _080F525C  @ =gRam
	ldr r1, _080F5260  @ =0x00001663
	add r0, r6, r1
	ldrb r0, [r0]
	mov r8, r0
	cmp r0, #1
	bne _080F5252
	ldr r0, _080F5264  @ =gLamp
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F5252
	ldr r1, _080F5268  @ =0x00001804
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F5252
	ldr r1, _080F526C  @ =0x000010A2
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #144
	beq _080F5252
	ldr r1, _080F5270  @ =0x000016CE
	add r0, r6, r1
	ldrb r0, [r0]
	sub r0, r0, #24
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080F5252
	ldr r1, _080F5274  @ =0x00001661
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #4
	beq _080F521A
	mov r0, #4
	bl sub_080BE9A0
_080F521A:
	ldr r0, _080F5278  @ =0x00001052
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	bne _080F5234
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080F5234:
	ldrb r0, [r4]
	cmp r0, #7
	bls _080F5252
	add r0, r7, #0
	mov r1, #58
	bl sub_080CF0AC
	ldr r1, _080F527C  @ =0x00000F22
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080CA58C
_080F5252:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080F525C:
	.4byte gRam
_080F5260:
	.4byte 0x00001663
_080F5264:
	.4byte gLamp
_080F5268:
	.4byte 0x00001804
_080F526C:
	.4byte 0x000010A2
_080F5270:
	.4byte 0x000016CE
_080F5274:
	.4byte 0x00001661
_080F5278:
	.4byte 0x00001052
_080F527C:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F519C

