	THUMB_FUNC_START sub_080E0478
sub_080E0478: @ 0x080E0478
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	bl sub_08131E24
	bl sub_08133600
	ldr r5, _080E04C0  @ =gRam
	ldr r1, _080E04C4  @ =0x00001052
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #255
	beq _080E04A4
	ldr r1, _080E04C8  @ =0x00001776
	add r0, r5, r1
	mov r1, #2
	strb r1, [r0]
	ldrb r0, [r2]
	bl sub_080A1588
_080E04A4:
	ldr r1, _080E04CC  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080E04D0  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E04C0:
	.4byte gRam
_080E04C4:
	.4byte 0x00001052
_080E04C8:
	.4byte 0x00001776
_080E04CC:
	.4byte 0x00000F52
_080E04D0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E0478

