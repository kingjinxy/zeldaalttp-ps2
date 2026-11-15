	THUMB_FUNC_START sub_08052B88
sub_08052B88: @ 0x08052B88
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _08052BA0
	ldr r0, [r7]
	bl sub_08052BE4
	b _08052BDC
_08052BA0:
	ldr r0, [r7]
	bl sub_08053028
	ldr r0, _08052BC8  @ =gUnknown_03006C80
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #0
	lsl r2, r1, #2
	add r1, r0, #0
	add r1, r1, #112
	add r0, r1, r2
	ldr r1, [r7]
	ldrb r2, [r1, #28]
	lsl r3, r2, #30
	lsr r1, r3, #30
	cmp r1, #0
	beq _08052BCC
	ldr r1, [r7]
	b _08052BCE
	.byte 0x00
	.byte 0x00
_08052BC8:
	.4byte gUnknown_03006C80
_08052BCC:
	mov r1, #0
_08052BCE:
	str r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_08052BDC:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08052B88

