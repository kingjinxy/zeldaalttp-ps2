	THUMB_FUNC_START sub_080F197C
sub_080F197C: @ 0x080F197C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r7, r6, #0
	ldr r5, _080F19A4  @ =gRam
	ldr r1, _080F19A8  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F19B4
	ldr r1, _080F19AC  @ =0x0000010D
	add r0, r6, #0
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080F19B0  @ =0x00000F52
	add r0, r5, r1
	add r0, r6, r0
	b _080F1A10
_080F19A4:
	.4byte gRam
_080F19A8:
	.4byte 0x00001AE2
_080F19AC:
	.4byte 0x0000010D
_080F19B0:
	.4byte 0x00000F52
_080F19B4:
	ldr r1, _080F19EC  @ =0x0000166A
	add r0, r5, r1
	ldrb r4, [r0]
	cmp r4, #0
	bne _080F1A00
	ldr r1, _080F19F0  @ =0x00001776
	add r0, r5, r1
	strb r4, [r0]
	mov r0, #22
	bl sub_080A1588
	ldr r0, _080F19F4  @ =0x00001662
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #16
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _080F19F8  @ =0x00000F52
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F19FC  @ =0x00001663
	add r0, r5, r1
	strb r4, [r0]
	b _080F1A14
	.byte 0x00
	.byte 0x00
_080F19EC:
	.4byte 0x0000166A
_080F19F0:
	.4byte 0x00001776
_080F19F4:
	.4byte 0x00001662
_080F19F8:
	.4byte 0x00000F52
_080F19FC:
	.4byte 0x00001663
_080F1A00:
	ldr r1, _080F1A1C  @ =0x0000010F
	add r0, r7, #0
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080F1A20  @ =0x00000F52
	add r0, r5, r1
	add r0, r7, r0
_080F1A10:
	mov r1, #2
	strb r1, [r0]
_080F1A14:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F1A1C:
	.4byte 0x0000010F
_080F1A20:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F197C

