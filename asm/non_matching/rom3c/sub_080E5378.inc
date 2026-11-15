	THUMB_FUNC_START sub_080E5378
sub_080E5378: @ 0x080E5378
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _080E53DC  @ =gRam
	ldr r1, _080E53E0  @ =0x00000FC2
	add r0, r4, r1
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080E53B2
	ldr r6, _080E53E4  @ =0x00000F52
	add r1, r4, r6
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E53E8  @ =gUnknown_081774B0
	add r6, r6, #16
	add r0, r4, r6
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	add r0, r2, #0
	mov r1, #32
	bl sub_080C35FC
_080E53B2:
	ldr r0, _080E53EC  @ =0x00001142
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E53F0  @ =0x00000F92
	add r2, r4, r1
	add r2, r5, r2
	ldr r6, _080E53F4  @ =0x00000996
	add r0, r4, r6
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #1
	and r0, r0, r1
	add r0, r0, #1
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E53DC:
	.4byte gRam
_080E53E0:
	.4byte 0x00000FC2
_080E53E4:
	.4byte 0x00000F52
_080E53E8:
	.4byte gUnknown_081774B0
_080E53EC:
	.4byte 0x00001142
_080E53F0:
	.4byte 0x00000F92
_080E53F4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080E5378

