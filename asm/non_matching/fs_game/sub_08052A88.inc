	THUMB_FUNC_START sub_08052A88
sub_08052A88: @ 0x08052A88
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _08052A98  @ =gUnknown_03000420
	ldrb r1, [r0]
	cmp r1, #0
	bne _08052A9C
	b _08052B80
_08052A98:
	.4byte gUnknown_03000420
_08052A9C:
	ldr r0, _08052AE8  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08052AD6
	ldr r0, _08052AEC  @ =gUnknown_03006C80
	ldr r2, _08052AEC  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #108
	ldrb r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	mov r2, #3
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #108
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08052AD6:
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08052ADC:
	add r0, r7, #0
	ldrb r1, [r0]
	cmp r1, #3
	bls _08052AF0
	b _08052B80
	.byte 0x00
	.byte 0x00
_08052AE8:
	.4byte gUnknown_03000E20
_08052AEC:
	.4byte gUnknown_03006C80
_08052AF0:
	add r0, r7, #1
	ldr r2, _08052B7C  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #108
	add r1, r7, #0
	ldrb r2, [r2]
	ldrb r1, [r1]
	add r2, r2, r1
	add r1, r2, #0
	mov r2, #3
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08052B7C  @ =gUnknown_03006C80
	add r1, r7, #1
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, #112
	add r1, r0, r2
	ldr r0, [r1]
	cmp r0, #0
	beq _08052B6C
	ldr r1, _08052B7C  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #109
	ldrb r0, [r1]
	add r1, r7, #1
	ldrb r2, [r1]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08052B6C
	ldr r0, _08052B7C  @ =gUnknown_03006C80
	add r1, r7, #1
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, #112
	add r1, r0, r2
	ldr r0, [r1]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, _08052B7C  @ =gUnknown_03006C80
	add r1, r7, #1
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, #112
	add r1, r0, r2
	ldr r2, [r1]
	add r0, r2, #0
	bl sub_08003688
_08052B6C:
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08052ADC
_08052B7C:
	.4byte gUnknown_03006C80
_08052B80:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08052A88

