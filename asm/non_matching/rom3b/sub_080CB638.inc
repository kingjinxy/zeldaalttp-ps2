	THUMB_FUNC_START sub_080CB638
sub_080CB638: @ 0x080CB638
	push {lr}
	add r2, r0, #0
	add r2, r2, #2
	ldrb r0, [r2]
	add r1, r0, #0
	cmp r1, #228
	bne _080CB684
	sub r2, r2, #2
	ldrb r0, [r2]
	add r2, r2, #2
	cmp r0, #254
	bne _080CB656
	bl sub_080CBDFC
	b _080CB6A8
_080CB656:
	cmp r0, #253
	beq _080CB664
	add r0, r2, #0
	mov r1, #228
	bl sub_080CB6B4
	b _080CB6A8
_080CB664:
	bl sub_080CBDFC
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080CB67C  @ =gRam
	ldr r2, _080CB680  @ =0x00000E85
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	b _080CB6A8
_080CB67C:
	.4byte gRam
_080CB680:
	.4byte 0x00000E85
_080CB684:
	sub r2, r2, #1
	ldrb r0, [r2]
	add r2, r2, #1
	cmp r0, #223
	bhi _080CB696
	add r0, r2, #0
	bl sub_080CB6B4
	b _080CB6A8
_080CB696:
	add r0, r2, #0
	bl sub_080CBE28
	ldr r1, _080CB6AC  @ =gRam
	ldr r0, _080CB6B0  @ =0x00000964
	add r1, r1, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080CB6A8:
	pop {r0}
	bx r0
_080CB6AC:
	.4byte gRam
_080CB6B0:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080CB638

