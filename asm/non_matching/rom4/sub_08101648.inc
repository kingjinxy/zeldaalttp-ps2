	THUMB_FUNC_START sub_08101648
sub_08101648: @ 0x08101648
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _081016AC  @ =gRam
	ldr r2, _081016B0  @ =0x00001052
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _081016A0
	add r0, r5, #0
	bl sub_080E89E4
	add r4, r0, #0
	cmp r4, #0
	blt _081016A0
	add r0, r5, #0
	mov r1, #89
	bl sub_080CF140
	ldr r0, _081016B4  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r3, _081016B8  @ =gUnknown_0817ADF1
	ldr r0, _081016BC  @ =0x00001082
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081016C0  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r3, _081016C4  @ =gUnknown_0817AE01
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080F5490
_081016A0:
	mov r0, #1
	neg r0, r0
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081016AC:
	.4byte gRam
_081016B0:
	.4byte 0x00001052
_081016B4:
	.4byte 0x00000F22
_081016B8:
	.4byte gUnknown_0817ADF1
_081016BC:
	.4byte 0x00001082
_081016C0:
	.4byte 0x00000F12
_081016C4:
	.4byte gUnknown_0817AE01
	THUMB_FUNC_END sub_08101648

