	THUMB_FUNC_START sub_08114584
sub_08114584: @ 0x08114584
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _081145A8  @ =gRam
	ldr r1, _081145AC  @ =0x00001776
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	ldr r0, _081145B0  @ =gSword
	ldrb r1, [r0]
	add r0, r1, #0
	cmp r0, #255
	bne _081145B4
	mov r0, #87
	bl sub_080A1588
	b _081145C0
	.byte 0x00
	.byte 0x00
_081145A8:
	.4byte gRam
_081145AC:
	.4byte 0x00001776
_081145B0:
	.4byte gSword
_081145B4:
	add r0, r1, #0
	add r0, r0, #83
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080A1588
_081145C0:
	ldr r0, _081145DC  @ =gRam
	ldr r1, _081145E0  @ =0x00001770
	add r2, r0, r1
	mov r1, #0
	strb r1, [r2]
	ldr r1, _081145E4  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #11
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081145DC:
	.4byte gRam
_081145E0:
	.4byte 0x00001770
_081145E4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08114584

